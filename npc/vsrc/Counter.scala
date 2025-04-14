package updown

import  chisel3._
import _root_.circt.stage.ChiselStage


class  CounterModule extends  Module{
    val io=IO(new Bundle {
        val second=Output(UInt(7.W))
        val minutes=Output(UInt(7.W))
        val hour=Output(UInt(7.W))
        val enable=Input(Bool())
        val reset=Input(Bool())
        val led_second1=Output(UInt(7.W))
        val led_second2=Output(UInt(7.W))
        val led_minutes1=Output(UInt(7.W))
        val led_minutes2=Output(UInt(7.W))
        val led_hour1=Output(UInt(7.W))
        val led_hour2=Output(UInt(7.W))
        
    }
    )
    val secondsReg = RegInit(0.U(7.W))
    val minutesReg = RegInit(0.U(7.W))
    val hoursReg = RegInit(0.U(7.W))
    val tick = RegInit(0.U(32.W))

    io.second := secondsReg
    io.minutes := minutesReg
    io.hour := hoursReg


    when(io.reset){
        secondsReg :=0.U
        minutesReg:=0.U
        hoursReg :=0.U

    }.elsewhen(io.enable){
        tick:=tick+1.U
    }

    when(tick===500.U){
    secondsReg := Mux(secondsReg < 59.U, secondsReg + 1.U, 0.U)
    
    minutesReg := Mux(secondsReg === 59.U, Mux(minutesReg < 59.U, minutesReg + 1.U, 0.U), minutesReg)
    
    hoursReg := Mux(secondsReg === 59.U && minutesReg === 59.U, Mux(hoursReg < 23.U, hoursReg + 1.U, 0.U), hoursReg)

    tick:=0.U    

    }

    val secOnes = secondsReg % 10.U
    val secTens = secondsReg / 10.U
    val minOnes = minutesReg % 10.U
    val minTens = minutesReg / 10.U
    val hourOnes = hoursReg % 10.U 
    val hourTens = hoursReg / 10.U
      
    def sevenSeg(num:UInt) : UInt={
        val segs = Wire(UInt(7.W))
       when(num === 0.U) { segs := "b0000001".U }  // 0
        .elsewhen(num === 1.U) { segs := "b1001111".U }  
        .elsewhen(num === 2.U) { segs := "b0010010".U } 
        .elsewhen(num === 3.U) { segs := "b0000110".U }  
        .elsewhen(num === 4.U) { segs := "b1001100".U }  
        .elsewhen(num === 5.U) { segs := "b0100100".U }  
        .elsewhen(num === 6.U) { segs := "b1100000".U }  
        .elsewhen(num === 7.U) { segs := "b0001111".U }  
        .elsewhen(num === 8.U) { segs := "b0000000".U }  
        .elsewhen(num === 9.U) { segs := "b0000100".U }  
        .otherwise { segs := "b1111111".U } 
        segs
    }

    io.led_second1 := sevenSeg(secOnes)
    io.led_second2 := sevenSeg(secTens)
    io.led_minutes1 := sevenSeg(minOnes)
    io.led_minutes2 := sevenSeg(minTens)
    io.led_hour1  := sevenSeg(hourOnes)
    io.led_hour2  := sevenSeg(hourTens)



}

object  Counter extends  App{
    ChiselStage.emitSystemVerilogFile(
        new CounterModule,
        firtoolOpts=Array("-disable-all-randomization","-strip-debug-info")
    )

}    
    



#include "stm32f10x.h"
#include "led.h"

void GPIOB_Config(void){
	
	GPIO_InitTypeDef 	GPIO_InitStruct;	//端口结构体
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);	//开启时钟
	GPIO_InitStruct.GPIO_Pin = LED_B | LED_R| LED_G;	//这一步必须是或，否则是能赋值一个端口号
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;	//推挽输出方式
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;	//50MHZ
	GPIO_Init(GPIOB, &GPIO_InitStruct);	//初始化
}


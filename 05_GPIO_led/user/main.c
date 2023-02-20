
#include "stm32f10x.h"  // 包含STM32F103的固件库头文件
#include "led.h"

//C语言中先声明再调用
void Delay(__IO uint32_t nCount);
void GPIOB_Config(void);

int main(void) {
		
		GPIOB_Config();	//初始化
	
    while(1) {
			GPIO_SetBits(GPIOB, LED_B);		//led低电平导通，所以置高电平灯灭
			GPIO_SetBits(GPIOB, LED_G);
			GPIO_ResetBits(GPIOB, LED_R);	//红灯亮
			Delay(0X1FFFFF);
			
			GPIO_SetBits(GPIOB, LED_R);
			GPIO_SetBits(GPIOB, LED_B);
			GPIO_ResetBits(GPIOB, LED_G);	//绿灯亮
			Delay(0X1FFFFF);
			
			GPIO_SetBits(GPIOB, LED_R);
			GPIO_SetBits(GPIOB, LED_G);
			GPIO_ResetBits(GPIOB, LED_B);	//蓝灯亮
			Delay(0X1FFFFF);
    }
}

//定义一个延时函数
void Delay(__IO uint32_t nCount) {
    for(; nCount != 0; nCount--);
}




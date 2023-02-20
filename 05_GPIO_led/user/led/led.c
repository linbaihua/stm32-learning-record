#include "stm32f10x.h"
#include "led.h"

void GPIOB_Config(void){
	
	GPIO_InitTypeDef 	GPIO_InitStruct;	//�˿ڽṹ��
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);	//����ʱ��
	GPIO_InitStruct.GPIO_Pin = LED_B | LED_R| LED_G;	//��һ�������ǻ򣬷������ܸ�ֵһ���˿ں�
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;	//���������ʽ
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;	//50MHZ
	GPIO_Init(GPIOB, &GPIO_InitStruct);	//��ʼ��
}


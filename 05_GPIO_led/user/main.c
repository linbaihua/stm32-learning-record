
#include "stm32f10x.h"  // ����STM32F103�Ĺ̼���ͷ�ļ�
#include "led.h"

//C�������������ٵ���
void Delay(__IO uint32_t nCount);
void GPIOB_Config(void);

int main(void) {
		
		GPIOB_Config();	//��ʼ��
	
    while(1) {
			GPIO_SetBits(GPIOB, LED_B);		//led�͵�ƽ��ͨ�������øߵ�ƽ����
			GPIO_SetBits(GPIOB, LED_G);
			GPIO_ResetBits(GPIOB, LED_R);	//�����
			Delay(0X1FFFFF);
			
			GPIO_SetBits(GPIOB, LED_R);
			GPIO_SetBits(GPIOB, LED_B);
			GPIO_ResetBits(GPIOB, LED_G);	//�̵���
			Delay(0X1FFFFF);
			
			GPIO_SetBits(GPIOB, LED_R);
			GPIO_SetBits(GPIOB, LED_G);
			GPIO_ResetBits(GPIOB, LED_B);	//������
			Delay(0X1FFFFF);
    }
}

//����һ����ʱ����
void Delay(__IO uint32_t nCount) {
    for(; nCount != 0; nCount--);
}




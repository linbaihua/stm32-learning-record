
#define IS_GPIO_SPEED(SPEED) (((SPEED) == GPIO_Speed_10MHz) || ((SPEED) == GPIO_Speed_2MHz) || \
((SPEED) == GPIO_Speed_50MHz))

#define LED1(a)	if (a)	GPIO_SetBits(LED1_GPIO_PORT,LED1_GPIO_PIN); else GPIO_ResetBits(LED1_GPIO_PORT,LED1_GPIO_PIN)


//记得ifndef和endif的条件编译
#ifndef _BSP_LED_TEST_H
#define _BSP_LED_TEST_H

#include "stm32f10x.h"
//GPIO输出有关LED的宏定义（对于led引脚和寄存器端口,以及时钟进行重定义）

//绿色LED灯
#define LED_G_GPIO_PIN				GPIO_Pin_0
#define LED_G_GPIO_PORT				GPIOB
#define LED_G_GPIO_CLK				RCC_APB2Periph_GPIOB

//对于灯的开关状态进行宏定义
#define ON		1
#define OFF		0
/*直接操作寄存器的方法控制IO*/
#define digitalHi(p,i) {p->BSRR=i;} //输出为高电平
#define digitalLo(p,i) {p->BRR=i;} //输出低电平
#define digitalToggle(p,i) {p->ODR ^=i;} //输出反转状态


/*定义控制IO的宏*/
 #define LED_G_TOGGLE 	digitalToggle(LED_G_GPIO_PORT,LED_G_GPIO_PIN)
 #define LED_G_OFF 		digitalHi(LED_G_GPIO_PORT,LED_G_GPIO_PIN)
 #define LED_G_ON 		digitalLo(LED_G_GPIO_PORT,LED_G_GPIO_PIN)

//LED灯反转的宏定义
#define LED_GREEN_TOGGLE		{LED_G_GPIO_PORT->ODR ^= LED_G_GPIO_PIN;}


//调用LED的GPIO的配置函数
void LED_GPIO_Config(void);

#endif /*_BSP_LED_TEST_H*/

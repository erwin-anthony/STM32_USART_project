//bsp:board support package 板级支持包（stm32f103VE6T）
#include "bsp_led_test.h"

void LED_GPIO_Config(void){
	

	//定义一个结构体(每一个引脚都对应一个结构体)
	GPIO_InitTypeDef GPIO_InitStructure_GREEN;

	//时钟的使能
	RCC_APB2PeriphClockCmd(LED_G_GPIO_CLK,ENABLE);

	//对LED灯的引脚，引脚输出模式，速度进行配置
	//绿色LED的GPIO配置
	GPIO_InitStructure_GREEN.GPIO_Pin = LED_G_GPIO_PIN;
	GPIO_InitStructure_GREEN.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure_GREEN.GPIO_Speed = GPIO_Speed_50MHz;

	//调用库函数，初始化GPIO
	GPIO_Init(LED_G_GPIO_PORT, &GPIO_InitStructure_GREEN);

	

}

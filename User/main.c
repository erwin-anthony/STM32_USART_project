#include "stm32f10x.h"                  // Device header
#include "bsp_led_test.h"
#include "bsp_usart.h"
#include "stdio.h"


int main(void){
	

	uint8_t	arr1[10] = {1,2,3,4,5,6,7,8,9,10};
	uint8_t	str1[] = "Beinvenu a Paris\n";
	uint8_t	str2[] = "打印正常\n";	
	
	USART_Config();
	LED_GPIO_Config();
	Usart_SendByte(USARTx,'A');
	Usart_SendHalfWord(USARTx,0xff56);
	Usart_SendArr(USARTx,arr1,10);
	Usart_SendStr(USARTx,str1);
	
	
	printf("%s\n",str2);

	
	while(1){


	}


}

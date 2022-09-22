#include "led.h"
//////////////////////////////////////////////////////////////////////////////////	 
//?????????,??????,??????????
//ALIENTEK STM32F429???
//LED????	   
//????@ALIENTEK
//????:www.openedv.com
//????:2015/11/23
//??:V1.0
//????,?????
//Copyright(C) ????????????? 2014-2024
//All rights reserved									  
////////////////////////////////////////////////////////////////////////////////// 	

//???PB1???.?????	    
//LED IO???
void LED_Init(void)
{
    GPIO_InitTypeDef GPIO_Initure;
    __HAL_RCC_GPIOB_CLK_ENABLE();           //??GPIOB??
	
    GPIO_Initure.Pin=GPIO_PIN_0|GPIO_PIN_1; //PB1,0
    GPIO_Initure.Mode=GPIO_MODE_OUTPUT_PP;  //????
    GPIO_Initure.Pull=GPIO_PULLUP;          //??
    GPIO_Initure.Speed=GPIO_SPEED_HIGH;     //??
    HAL_GPIO_Init(GPIOB,&GPIO_Initure);
	
    HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,GPIO_PIN_SET);	//PB0?1,????????
    HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1,GPIO_PIN_SET);	//PB1?1,????????
}

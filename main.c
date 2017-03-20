//--包含你要使用的头文件--//
#include <reg51.h>	   //此文件中定义了51的一些特殊功能寄存器

//--声明全局函数--//
void Delay10ms(unsigned int c);   //延时10ms

/*******************************************************************************
* 函 数 名         : main
* 函数功能		   : 主函数
* 输    入         : 无
* 输    出         : 无
*******************************************************************************/

void main()
{ 
	while(1)
	{
		//--数字前面加0x表示该数是十六进制的数，0x00就是十六进制的00--//
		//--P2口一共有8个IO口，即从P2.0到P2.7，而0x00二进制就是0000 0000--//
		//--效果就是P2.0到P2.7都是0，即低电平。而如果你想给P2.1口赋高电平时--//
		//--二进制就是0000 0001，就是十六进制0x01.--//
		P0  = 0x00; //置P0口为低电平
		
		Delay10ms(50); //调用延时程序，修改括号里面的值可以调整延时时间
		
		P0  = 0xff; //置P0口为高电平
				
		Delay10ms(50); // 调用延时程序
	}

}

/*******************************************************************************
* 函 数 名         : Delay10ms
* 函数功能		   : 延时函数，延时10ms
* 输    入         : 无
* 输    出         : 无
*******************************************************************************/

void Delay10ms(unsigned int c)   //误差 0us
{
    unsigned char a, b;

	//--c已经在传递过来的时候已经赋值了，所以在for语句第一句就不用赋值了--//
    for (;c>0;c--)
	{
		for (b=38;b>0;b--)
		{
			for (a=130;a>0;a--);
		}
           
	}
        
}













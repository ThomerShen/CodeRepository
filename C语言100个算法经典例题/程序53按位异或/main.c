﻿#include <stdio.h>
#include <stdlib.h>
//0^0=0; 0^1=1; 1^0=1; 1^1=0

void main()
{
	int a, b;
	a = 077;//八进制，二进制是‭00111111‬，十进制是‭63‬
	b = a ^ 3;//‭00111111&‭00000011‬=‭00111100
	printf("\40: The a & b(decimal) is %d \n", b);//‭60‬
	b ^= 7;//‭00111100‬&‭00000111‬=00111011
	printf("\40: The a & b(decimal) is %d \n", b);//‭59‬
	system("pause");
}
// OPERANDOS LOGICOS  

#include <stdio.h>


int main(void)

{
	// 8 bits unsigned
	unsigned int a = 29; //a nivel de bits esta variable es a = 0001 1101
	unsigned int b = 48; //a nivel de bits esta variable es b = 0011 0000
	int c = 0;
	c = a & b;
	printf("%d & %d = %d \n", a,b,c);

	c = a | b;
	printf("%d | %d = %d \n", a,b,c);

	c = a ^ b;
	printf("%d ^ %d = %d \n", a,b,c);

	c = ~a;
	printf("~%d     = %d \n", a,c); 

	c = a << 2;
	printf("%d<<2   = %d \n", a,c);

	c = a >> 2;
	printf("%d>>2   = %d \n", a,c);



	return 0;
}
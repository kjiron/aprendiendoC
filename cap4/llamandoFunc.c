// vamos a llamar una funcion por medio de un puntero
#include <stdio.h>

int funcion(int x,int y){
	return x*2+y;	
}



int main(void)
{
	int (*fn)(int,int) = &funcion;
	int x = 42;
	int y = 123;
	printf("(*fn)(%i,%i) = %i\n", x,y,(*fn)(x,y));
	printf("fn(%i,%i) = %i\n", x,y,fn(x,y));


	return 0;
}
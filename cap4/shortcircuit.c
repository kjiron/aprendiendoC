#include <stdio.h>

int main(void)
{
	int a = 20;
	int b = -5;


	if(a != 20 && b == -5){ // el && funciona de la siguiente forma, si la primera condicion es evaluada 
							// () && ()  el segundo operando no es evaluado y solo se cumple la primera condicion
		printf("Nunca deberia de entrar aqui\n");
	}
	printf("hola\n");
	
	return 0;
}
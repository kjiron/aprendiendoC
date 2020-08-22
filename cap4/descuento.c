#include <stdio.h>


int main(void)
{
	int precio,resultado,descuento;
	double frac;
	printf("Introduzca el PRECIO del articulo    : ");
	scanf("%d", &precio);
	printf("Introduzca el DESCUENTO del articulo : ");
	scanf("%d", &descuento);

	frac = descuento/100.0;
	resultado = precio - precio*frac;
	printf("El resultado es de %d \n",resultado );

	return 0;
}
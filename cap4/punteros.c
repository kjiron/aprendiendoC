#include <stdio.h>

int main(void)
{	
	/*
	int x = 3;
	int *p = &x;
	// es muy diferente ver el valor de una variables (copia) a ver su direccion de memoria, con esto se le puede editar
	printf("Variable                = %d \n", x);
	printf("Su direccion de MEMORIA = %p \n", (void*)p);
	printf("%p = %p\n", (void*)&x,(void*)p);
	*/

	// tambien se puede editar variables "sin querer por trabajar con punteros"
	int x = 32;
	int *p = &x;
	printf("x = %d , *p = %d \n", x,*p);
	*p = 155;
	printf("x = %d , *p = %d \n", x,*p);

	/* cabe mencionar que los punteros tambien son igual que en el MIPS por ejemplo
	   por ejemplo los punteros se declara como *p = <direccion de memoria>
	   pero de un array tambien puedo crear un puntero por ejemplo :
	   array [] = {1,2,3,4,5}, si hago 3[array], es lo mismo que hacer array[3]*/

	printf("%zu\n", sizeof(double));

	/* code */
	return 0;
}
// esta funcion sscanf me permite LEER informacion de un string y tener la posibilidad de utilizar

#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* code */
	char fecha[] = "fecha : 23-08-2020";
	char nombre[50];
	int dia;
	int mes;
	int anio;
	sscanf(fecha,"%s : %2d-%2d-%4d", nombre,&dia,&mes,&anio);
	printf("%s : %2d-%2d-%4d\n", nombre,dia,mes,anio); 

	return 0;
}
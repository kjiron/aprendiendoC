#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char CADENA[11];
	// voy a copiar "kevin" a la cadena
	strcpy(CADENA,"kevin"); 
	printf("%s\n", CADENA);
	// ahora voy concatenar(adherir) a la cadena "jiron"
	strcat(CADENA,"jiron");
	printf("%s\n", CADENA);
	// si le adhiero un string a la cadena este se desbordaria 
	// pero si le copio de nuevo, "le cae encima" por asi decirlo
	strcpy(CADENA,"hola");
	printf("%s\n", CADENA);
	
	return 0;
}
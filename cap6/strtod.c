#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	char cadena[50] = "20.30300 Hola tengo conejos ";
	char *ptr;
	double ret;

	ret = strtod(cadena,&ptr);
	printf("El valor (double) en la cadena es : %lf\n",ret);
	printf("El string que sobra en la cadena es : %s\n",ptr);
	return 0;
}
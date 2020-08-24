#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	
	char a[] = "012345678901234567890";
	char b[8];
	strncpy(b,a,sizeof(b)-1);
	//como estoy copiando el array a este jala toda la dimension de el, sus bytes, pero b es de 8, por lo tanto
	// este copia los bits que puede respecto a su dimension, pero como a es mas grande, este se llena de basura
	//b[sizeof(b)/sizeof(*b) - 1] = '\0';
	//esta linea solo me deja los valores correctos copiados del string, termina el string
	printf("%s\n", b);
	char *part;
	printf("%ld\n", sizeof(*part));

	/* code */
	return 0;
}
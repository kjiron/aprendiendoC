#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
	char * string = "Hola mundo";
	size_t i = 0; //tipo de dato que nunca sera menor a cero
	size_t length = strlen(string);
	printf("%ld\n", i);
	// sino se sabe la longitud del array se pude usar strlen
	for (i; i < length; ++i)
	{
		printf("%c\n", string[i]);
	}
	// tambien se le puede sacar provecho al caracter nulo de un string
	size_t e = 0;
	printf("\n\n");
	while(string[e] != '\0'){
		printf("%c\n", string[e]);
		e++;
	}
	return 0;
}
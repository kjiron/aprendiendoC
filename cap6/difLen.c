#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	char asciiString[50] = "Hello world!"; //se define una cadena de caracteres de 50 bytes
	char utf8String[50] = "Γειά σου Κόσμε!"; /* "Hello World!" in Greek, lo que pasa esque esos caract pesan mas */ 
	printf("asciiString has %zu bytes in the array\n", sizeof(asciiString));//sizeof te devuelve los 50 que se declaro en el array
	printf("utf8String has %zu bytes in the array\n", sizeof(utf8String));
	printf("%s is %zu bytes\n", asciiString, strlen(asciiString));
	printf("%s is %zu bytes\n", utf8String, strlen(utf8String));
}
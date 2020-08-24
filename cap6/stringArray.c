#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char *array_string[] = {
		"hola",
		"esto",
		"es",
		"una",
		"prueba"
	};
	size_t length = strlen(array_string[0]);
	size_t i = 0;
	for (i; i < length; ++i)
	{
		printf("%c\n", array_string[0][i]);
	}
	
	
	return 0;
}
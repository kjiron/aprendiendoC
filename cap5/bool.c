#include <stdio.h>
#include <stdbool.h>

/*
Tambien se puede hacer uso de macros para utilizar los booleanos por ejemplo
#define bool int;
#define true 1;
#define false 0;
esto se hace si no se tiene stdbool.h
*/


/*
Ademas un booleano nativo de C es el _Bool por ejemplo
_Bool z = X;
si X es igual a cero, entonces z = 0 sino sera 1
si X es un puntero , z sera 0 si X es nulo, del caso contrario es 1

*/

int main(int argc, char const *argv[])
{
	bool x = true;
	bool y = false;

	if(x){
		printf("Esto deberia imprimirse\n");
	}
	if(!y){
		printf("Esto tambien deberia imprimirse\n");
	}
	return 0;
}
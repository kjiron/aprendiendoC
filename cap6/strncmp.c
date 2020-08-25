#include <stdio.h>
#include <string.h>

void compare(char *pCadena, char *sCadena, int n){
	int comp = strncmp(pCadena,sCadena,n);
	if (comp == 0)
	{
		printf("Las cadenas %s y %s son iguales \n", pCadena, sCadena);
	} else if(comp < 0){
		printf("La cadena %s aparece antes que %s \n", pCadena, sCadena);
		
	} else {
		printf("La cadena %s aparece despues que %s \n", pCadena, sCadena);
	
	}
}


int main(int argc, char const *argv[])
{

	// esto es viendo el primer argumento
	compare("BBB", "Bb", 2);
	compare("FB", "AA", 2);
	compare("BBB", "AB", 1);
	return 0;
}
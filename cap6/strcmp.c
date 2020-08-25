#include <stdio.h>
#include <string.h>

void compare (char *pCadena, char *sCadena){
	int comp = strcmp(pCadena,sCadena);
	if (comp == 0)
	{
		printf("Las cadenas %s y %s son iguales \n", pCadena, sCadena);
	} else if(comp == -1){
		printf("La cadena %s aparece antes que %s \n", pCadena, sCadena);
		
	} else {
		printf("La cadena %s aparece despues que %s \n", pCadena, sCadena);
	
	}

}

int main(int argc, char const *argv[])
{

	// esto es viendo el primer argumento
	compare("AAA","AAA");
	compare("ddd","ccc");
	compare("BBB","AAA");
	return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char cadena [] = "Unapalabramuygrande";
	char buscar = 'a';
	char *pOcurrencia = strchr(cadena,buscar);
	if(pOcurrencia != NULL){
		printf("La primera ocurrencia al buscar [%c] en [%s] fue [%s]\n", buscar,cadena,pOcurrencia);
	}
	char *lOcurrencia = strrchr(cadena,buscar);
	if(lOcurrencia != NULL){
		printf("La ultima ocurrencia al buscar  [%c] en [%s] fue [%s]\n", buscar,cadena,lOcurrencia);
	}

	return 0;
}
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	/* code */

	char src[] = "1.2,3.5,4.2";
	char *token = strtok(src,",");
	do
	{	
		char* part;
		printf("[%s]\n", token);
		part = strtok(token,".");
		while(part != NULL){
			printf("[%s]\n", part);
			part = strtok(NULL,".");
		}
		/* code */
	} while ((token = strtok(NULL,",")) != NULL);
	/*Lo que se deberia de esperar esque salga por la terminal los valores de 
	[1.2]
	[1]
	[2]
	y asi con todos los valores de la cadenas, pero esto es parte del problema de que 
	strtok no puede volverse a llamar mientras esta siendo utilizado
	para arreglar este problema se debe de usar __STDC_LIB_EXT1__*/

	return 0;
}
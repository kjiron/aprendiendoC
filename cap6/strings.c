#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
	/* code */
	int tokNUM = 0;
	char src[] = "Hello,,world!,kevin,andrey,jiron";
	const char delimiters[] = ",!";
	char *token = strtok(src,delimiters);
	while(token != NULL){
		printf("%d,[%s]\n", ++tokNUM,token);
		token = strtok(NULL,delimiters);
		//NULL ahora a token, porque ahora token, ya tiene la referencia respecto a la cadena utilizada "src"
		// solo ocupa los delimitadores
		// si le paso la cadena src en vez de NULL nunca saldran del ciclo ya que se quedaria solo con el primer 
		// caracter que se le paso
	}
	return 0;
}
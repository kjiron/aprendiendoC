/* you have to announce that you want to use Annex K */
#define __STDC_WANT_LIB_EXT1__ 1
#include <string.h>
#ifndef __STDC_LIB_EXT1__
#endif

#include <stdio.h>

int main(int argc, char const *argv[])
{
	char src[] = "1.2,3.5,4.2";
	char *next = NULL;
	char *token = strtok_r(src, ",", &next);
	do
	{
	char *part;
	char *posn;
	printf("[%s]\n", token);
	part = strtok_r(token, ".", &posn);
	while (part != NULL){
		printf(" [%s]\n", part);
		part = strtok_r(NULL, ".", &posn);
	}

	}while ((token = strtok_r(NULL, ",", &next)) != NULL);
	return 0;
}

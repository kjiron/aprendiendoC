#include <stdio.h>

static const size_t N = 4;

int main(void)
{
	/* code */
	size_t k = 0;
	int array[] = {1,2,3,4,5};
	for (k = 0; k < N; k++)
	{
		printf("\t%d\n",*(array+k));

	}

	return 0;
}
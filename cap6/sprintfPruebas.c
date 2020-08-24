#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* code */
	char buffer [50];
	double PI = 3.1415926;
	sprintf (buffer, "PI = %.7f", PI);
	printf ("%s\n",buffer);
	return 0;
}
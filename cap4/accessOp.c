#include <stdio.h>

struct MyStruct
{
	int x;
	int y;
};


int main(void)
{
	/*
	struct MyStruct myObject;


	myObject.x = 12;
	myObject.y = 2;


	printf(".x = %i , .y = %i \n", myObject.x,myObject.y);
	return 0;
	*/
	struct MyStruct myObject;
	struct MyStruct *p = &myObject;

	p->x = 32;
	p->y = 8;

	printf(".x = %i , .y = %i \n", p->x,p->y);
	return 0;

}

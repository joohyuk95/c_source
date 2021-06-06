#include <stdio.h>
#define MAX(a, b) ((a) > (b)) ? (a) : (b)

extern inline int findMax(int a, int b)
{
	return (a > b) ? a : b;
}

int main(void)
{
	int a = 100;
	int b = 200;
	
	int max = findMax(a, b);
	//int max = (a > b) ? a : b;
	//int max = MAX(a, b); // macro function, after preprocessing // int max = ((a) > (b)) ? (a) : (b)
							// NO type checking
	//int max = MAX(++a, b);		//int max = ((++a) > (b) ? (++a) : (b); 	not recommend because of this			
	
	printf("max: %d\n", max);
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int size;
	printf("array size : ");
	scanf("%d", &size);
	
	int *pArr;
	pArr = malloc(sizeof(int) * size); // parameter = byte
	
	// use
	free(pArr);
	return 0;
}

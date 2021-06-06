#include <stdio.h>

void printStringArray1(char (*arr)[20], int size)
{
	for (int i = 0; i < size; ++i)
		printf("%s\n", arr[i]);	
}

void printStringArray2(char **arr, int size)
{
	for (int i = 0; i < size; ++i)
		printf("%s\n", arr[i]);
}

int main(void)
{
	char cities1[5][20] = {	// 2 dimensional array which have cities1[0], cities1[1], ... cities1[4]
		"Seoul", 
		"Los Angeles", 
		"Paris", 
		"Rio de janeiro", 
		"Rome"
	};

	char *cities2[5] = {	// pointer array, element of this array is pointer, total 5 byte because of char type
		"Seoul", 			// pointer is pointing first element address of constant string array 
		"Los Angeles", 
		"Paris", 
		"Rio de janeiro", 
		"Rome"
	};	
	
	printStringArray1(cities1, 5);	// array address
	printStringArray2(cities2, 5);	// pointer address

	return 0;
}

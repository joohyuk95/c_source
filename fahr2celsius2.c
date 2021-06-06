#include <stdio.h>
int main(void)
{
	int fahr;
	double celsius;
	
	fahr = 100;
	
	celsius = 5 / 9 * (fahr - 32);
	
	printf("fahr: %d ---> celsius: %.2f\n", fahr, celsius);
	return 0;
}

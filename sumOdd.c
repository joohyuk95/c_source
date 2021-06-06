#include <stdio.h>

int main(void)
{
	int i;
	i = 1;
	
	int sum = 0;
	
	while (i <= 100) {
		sum += i;
		i += 2;	
	}
	return 0;
}

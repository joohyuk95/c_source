#include <stdio.h>
#include <string.h>

int main(void)
{
	int score[10];
	int result[10][2];
	int first = 0;
	int second = 0;
	
	for (int i = 0; i < 10; ++i) {
		if (i <= 9) {
			printf("%d frame\n", i + 1);
			printf("first throw :\n");
			scanf("%d", first);
			result[i][0] = first;
			
			// before frame score checking
			if (i > 1 && result[i-2][0] == 10 && result[i-1][0])
				score[i-2] = 20 + first;
			else if (i > 0 && result[i-2][0] != 10 && (result[i-1][0] + result[i-1][1] == 10))
				score[i-1] = 10 + first;
			
			//  strike checking
			if (first == 10) {
				result[i][1] = 0;
				continue; 
			} else {
				printf("second throw :\n");
				scanf("%d", second);
				result[i][1] = second;
				if (first + second == 10) // spare checking
					continue;
				else
					score[i] = first + second;
			}
		} else {
			
		}
		
		for (int j = 0; j <= i; ++j) {
			printf("%d, %d |", result[i][0], result[i][1]);
		}
	}


	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int question[3]; 
	int answer[3]; 
	
	srand(time(NULL));
	
	while (1) {  // make different three numbers
		int count1 = 0;
		int check = 0;
		
		for (int i = 0; i < 3; ++i) {
			question[i] = rand() % 9 + 1;
		}	
		for (int i = 0; i < 2; ++i) {
			for (int j = i+1; j < 3; ++j) {
				++count1;
				if (question[i] != question[j])
					++check;
			}	
		}	
		if (count1 == check)
			break;
	}
	
	int count = 0;
	while (1) { 
		++count;
		
		int strike = 0;
		int ball = 0;
		
		printf("guess the question :");  // input guess
		for (int i = 0; i < 3; ++i) 
			scanf("%d", &answer[i]);
			
		for (int i = 0; i < 3; ++i) {  // compare
			if (question[i] == answer[i])
				strike += 1;	
			for (int j = 0; j < 3; ++j) {
				if (i != j && question[i] == answer[j])
					ball += 1; 
			} 
		}
		
		printf("strike = %d\nball = %d\n\n", strike, ball);		
		if (strike == 3)
			break;
	}

	printf("congraturation, your count: %d\n", count);
	return 0;
}

#include <stdio.h>

int main(void)
{
	int score;
	scanf("%d", &score);

	if (score >= 90)
		printf("score: %d, your grade is A\n", score);
	else if (score >= 80)
		printf("score: %d, your grade is B\n", score);
	else if (score >= 70)
		printf("score: %d, your grade is C\n", score);
	else if (score >= 60)
		printf("score: %d, your grade is D\n", score);
	else
		printf("score: %d, your grade is F\n", score);

	return 0;
}

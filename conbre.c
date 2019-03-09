#include <stdio.h>

int main(void)
{
	int num = 1;
	int dan = 1;


	while (dan < 10)
	{
		if (dan % 2 != 0)
			continue;

		while (num < 10)
		{
			if (num > dan)
				break;
			printf("%d x %d = %d \n", dan, num, dan*num);
			num++;
			
		}
		dan++;

	}
	return 0;
}
		
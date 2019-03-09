#include <stdio.h>

int main(void)
{
	int num = 1;
	int dan = 0;

	while (dan < 9)
	{
		num = 1;
		dan++;
		if (dan % 2 != 0)
			continue;


		while (num < 10)
		{
			
			if (num > dan)
				break;
			printf("%d x %d = %d \n", dan, num, dan*num);
			num++;

		}

	}
	return 0;
}
		
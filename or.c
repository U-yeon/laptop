#include <stdio.h>

int main(void)
{
	int num1, num2, num3;
	double av;

	printf("���� ���� : ");
	scanf("%d", &num1);
	printf("���� ���� : ");
	scanf("%d", &num2);
	printf("���� ���� : ");
	scanf("%d", &num3);

	av = (num1 + num2 + num3) / 3.0;
	printf("��� : %f\n", av);

	if (av >= 90)
		printf("A");
	else if (av >= 70)
		printf("B");
	else if (av >= 50)
		printf("C");
	else
		printf("F");

	return 0;
}
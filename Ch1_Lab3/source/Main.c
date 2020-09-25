#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int numl;
	int num2;

	printf("Enter two integers, and I will tell you\n");
	printf("the relationships they satisfy:");

	scanf_s("%d%d", &numl, &num2);

	if (numl == num2)
	{
		printf("%d is equal to %d\n", numl, num2);
	}

	if (numl != num2)
	{
		printf("%d is not equal to %d\n", numl, num2);
	}

	if (numl < num2)
	{
		printf("%d is less to %d\n", numl, num2);
	}

	if (numl > num2)
	{
		printf("%d is greater to %d\n", numl, num2);
	}

	if (numl <= num2)
	{
		printf("%d is less than or equal to %d\n", numl, num2);
	}

	if (numl >= num2)
	{
		printf("%d is greater than or eqaul to %d\n", numl, num2);
	}

	system("pause");
	return 0;
}
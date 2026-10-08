#include<stdio.h>
int main()
{
	int number, sum, i;
	printf_s("1-100内的完数有：");
	for (number = 1; number <= 100; number++)
	{
		sum = 0;
		for (i = 1; i < number - 1; i++)
		{
			if (number % i == 0)
				sum = sum + i;
		}
			if (number == sum)
				printf_s(" %d", number);
	}
	return 0;
}
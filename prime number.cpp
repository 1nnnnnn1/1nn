#include<stdio.h>
#include<math.h>
int main()
{
	int i, flag, number;
	printf_s("1-100内的素数有：");
	for (number = 2; number <= 100; number++)
	{
		flag = 1;
		for (i = 2; i <= sqrt(number) && flag ; i++)
		{
			if (number % i == 0)
				flag = 0;
		}
		if (flag)
			printf_s(" %d", number);
	}
	return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
	int i, flag, number;
	for (number = 1; number <= 100;number++);
	flag = 1;
	for (i = 2; i <= number - 1 && flag; i++)
		if (number % i == 0)
			flag = 0;
		printf_s("1-100内的素数有：%d\n", number);
		return 0;
}
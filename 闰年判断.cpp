#include<stdio.h>
int main()
{
	int year, leap;
	printf("输入年份:");
	scanf_s("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		printf("%d是闰年\n", &year);
	else
		printf("%d不是闰年\n", &year);
	system("puase");
	return 0;
	
}
#include<stdio.h>
int main()
{
	char c1, c2;
	printf_s("请输入一个小写字母：\n");
	c1 = getchar();
	printf_s("%c,%d\n", c1, c1);
	if (c1 >= 97 && c1 <= 123)
		printf_s("%c", c1);
	else
		if (c1 >= 65 && c1 <= 91)
		{
			c2 = c1 + 32;
			printf_s("%c,%d\n", c2, c2);
			printf_s("变化后的字母：");
			printf_s("你获得的小写字母为：%c\n", c1);
		}


	return 0;
}c1>='a'
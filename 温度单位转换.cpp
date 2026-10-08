#include<stdio.h>
int main(void)
{
	int f, c;
	printf_s("请输入华氏温度:\n");
	scanf_s("%d",&f);
	printf_s("f=%d", f);
	c = 5 * (f - 32) / 9;
	printf_s("计算后的摄氏温度为：");
	printf_s("c = % d",c);
	
		
		


}

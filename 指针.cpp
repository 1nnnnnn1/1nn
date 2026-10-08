#include<stdio.h>
//void swap(int* p1, int* p2)
//{
//	int  t;
//	t = *p1; *p1 = *p2; *p2 = t;
//	printf_s("在函数中：*p1=%d,*p2=%d\n", *p1, *p2);
//}
//int main()
//{
//	int a = 10, b = 20;
//	int* pa = &a, * pb = &b;
//	printf_s("调用函数前:a=%d,b=%d\n",a,b);
//	swap(pa, pb);
//	printf_s("调用函数之后：a = % d, b = % d\n",a,b);
//	printf_s("%ld\n", pa);
//	printf_s("%ld\n", &a);
//	printf_s("%ld\n", pb);
	/*printf_s("%ld", &b);
		return 0;
		
}*/
int main()
{
	int* p;
	int* max(int n);
	p = max(8);
	printf("max is %d\n", *p);
	return 0;
}
int* max(int n)
{
	static int a[] = { 13,24,38,27,11,9,36,18 }; int i, m = 0;
	for (i = 1; i < n; i++)
		if (a[m] < a[i])
			m = i;
	return &a[m];
}

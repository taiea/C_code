#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int a = 1;
//	int b = 2;
//	//不创建变量用加减法
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	//int c = 0;
//	//scanf("%d %d", &a, &b);
//	/*c = a;
//	a = b;
//	b = c*/
//	//  异或^  相同为零 相异为1、  不会溢出
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("a= %d b= %d", a, b);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//int tmp = 0;
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	for (i = 1;i<sz; i++)
//	{
//		/*if (arr[i] <= arr[i + 1])
//			tmp = arr[i + 1];
//		else
//			tmp = arr[i];*/
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("max= %d", max);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//int main()
//{
//	int a = 24;
//	int b = 18;
//	int c = 0;
//	while (c = a%b)
//	{
//		a = b;
//		b = c;
//	}
//	//最小公倍数
//	printf("%d", b);
//
//	return 0;
//}
//putchar getchar


//int main()
//{
//	
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	//int tmp1 = 1;
//	//int tmp2 = 1;
//	scanf(" %d", &n);
//	
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	//{
//	//	
//	//    tmp2 = tmp1 * (i + 1);
//	//	tmp1 = tmp2;
//	//	//int tmp2 = tmp1 * (i++);
//	//	/*int tmp1 = 1;
//	//	int tmp2 = tmp1 * (i++);
//	//	tmp1 = tmp2;*/
//
//
//	//}
//	printf(" %d", ret);
//	return 0;
//
//}
int main()
{

	int i = 1;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{
		ret = ret * n;
		sum = sum + ret;

		/*for (i = 1; i <= n; i++)
		{
			ret = ret * i;
		}
		sum = sum + ret;
		ret = 1;*/

	}
	
	printf(" %d", sum);
	return 0;

}

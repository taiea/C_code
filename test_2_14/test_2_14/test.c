#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//递归 收入1234 打印1.2.3.4

// void Print(int x)
//{
//	 if (x > 9)
//	 {
//		 Print(x / 10);//123
//	 }
//	 printf("%d ", x % 10);
//}
//
//int main()
//{ 
//	int i = 1234;
//	Print(1234);
//	return 0;
//}

//斐波那契数
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//
//}
//
 
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	int i = 0;
//	if (n > 2)
//	{
//		for (i = 0; i < n - 2; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//	}
//	return c;  
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", fib(n));
//	return 0;
//}
 
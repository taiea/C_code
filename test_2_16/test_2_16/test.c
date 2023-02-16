
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		 arr[i] = 0;
//		// printf("%d ", arr[i]);
//	}
//}
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int arr[], int sz)
//{
//	int tmp = 0;
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	//Init(arr, sz);
//	//Print(arr, sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//	return 0;
//}

// n的k次方
//double Pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else if (k > 0)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else
//	{
//		return 1.0 / Pow(n, -k);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf", ret);
//	return 0;
//}

 //输入正整数 返回数字之和  18 返回1+8
//int DigitSum(unsigned int n)
//{
//	
//	if (n > 10)
//	{
//		return n % 10 + DigitSum(n / 10);
//
//	}
//	return n;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d ", ret);
//	return 0;
//}


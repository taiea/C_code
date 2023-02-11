

#include<stdio.h>


//素数函数
//int is_prine(int x)
//{
//	int a = 0;
//	for (a = 2; a < x /2; a++)
//	{
//		if (x%a == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 200; i++)
//	{
//		if (is_prine(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//  函数判断闰年
//int is_leap_year(int n)
//{
//	if ((n % 4 == 0) && (n % 100 != 0))
//	{
//		return 1;
//	}
//	if (n % 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//
//}
//
//int main()
//{
//	int year = 0;
//	int count =0 ;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\n");
//	printf("count = %d", count);
//	return 0;
//}

//二分查找函数
//int binary_search(int arr[], int x, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < x)
//		{
//			left = mid;
//			left++;
//		}
//		else if (arr[mid] > x)
//		{
//			right = mid;
//			right--;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	int ret = binary_search(arr, 7, sz);
//	if (ret == -1)
//	{
//		printf("找不见这个数字");
//	}
//	else
//	{
//		printf("%d ", ret);
//	}
//	return 0;
//}

// 二分查找函数  可以穿左右下标 更灵活
int binary_search(int arr[], int x, int left, int right)
{
	
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < x)
		{
			left = mid;
			left++;
		}
		else if (arr[mid] > x)
		{
			right = mid;
			right--;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	
	int ret = binary_search(arr, 7, 0, 9);
	if (ret == -1)
	{
		printf("找不见这个数字");
	}
	else
	{
		printf("%d ", ret);
	}
	return 0;
}
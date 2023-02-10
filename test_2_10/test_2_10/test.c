#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
//菱形的打印
//int main()
//{
//	int line = 0;//上半部分的行数
//	int i = 0;
//	scanf("%d", &line);
//	//上半部分
//	for (i = 0; i <line ; i++)
//	{
//		//每行的空格 
//		int j = 0;
//		for (j = 0; j < line - 1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < i*2 + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		//每行的空格
//		int j = 0;
//		for (j = 0; j <i+1 ; j++)
//		{
//			printf(" ");
//		}
//		//每行*
//		for (j = 0; j<2*line-3-2*i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//

//水仙花数

//int main()
//{
//	int n = 1000000;
//	int i = 0;
//	int tmp = 0;
//	int sum = 0;
//	int count = 0;
//
//	for (i = 1; i < n; i++)
//	{
//		//先看是几位数
//		tmp = i;
//		count = 0;
//		while(tmp)
//		{
//			tmp = tmp / 10;
//			
//			count++;
//		}
//		//count是计算的位数
//		tmp = i;
//		sum = 0;//记得循环开始 初始化sum和count
//		while (tmp)
//		{
//			 //算出最低位的数字
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//
//		if (sum == i)
//		{
//			printf(" %d", i);
//		}
//
//	}
//	
//	return 0;
//}

// Sn = a+aa+aaa+aaaa        a是一个数字  前n项之和
//int main()
//{
//	int a = 0;  //数字
//	int n = 0;   //几项
//	int i = 0;
//	int sum = 0;
//	int tmp = 0;
//	scanf("%d %d", &a, &n);
//	for (i=0; i<n ;i++ )
//	{
//		//tmp = a * pow(10, i) + tmp;
//		tmp = tmp * 10 + a;//各位数向后为位移  前项乘10加上个位数
//		sum = tmp + sum;
//	}
//	printf(" %d", sum);
//	return 0;
//}

// 有序数组找数字 找到返回下标  找不到返回-1
//int main()
//{
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,15,20 };
//	int n = 0;
//	scanf("%d", &n);
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (left<=right)
//	{ 
//		int k = (left + right) / 2;
//		if (arr[k]< n)
//		{
//			left = k;
//			left++;
//		}
//		else if(arr[k]>n)
//		{
//			right = k;
//			right--;
//		}
//		else
//		{
//			printf("找到了，下标为： %d", k);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("%i", -1);
//	}
//
//	return 0;
//}

//  登录界面模拟 三次机会 全错退出登录
//int main()
//{
//	char arr[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入开机密码\n");
//		scanf("%s", arr);
//		if (strcmp(arr, "123456") == 0)// 不引用头文件也能跑过 
                                       //因为返回值是int
                                       //编译器只看返回值
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i > 2)
//	{
//		printf("三次密码错误，退出系统\n");
//	}
//
//	return 0;
//}
 
//输入大写输出小写  输入小写输出大写  输入数字不输出
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) !=  EOF)
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			putchar(ch - 32);
//		}
//		else if (ch >= 'A' && ch <= 'Z')
//		{
//			putchar(ch + 32);
//		}
//		else if (ch >= '0' && ch <= '9')
//		{
//			continue;
//		}
//		else
//		{
//			putchar(ch);
//		}
//	}
//	
//	return 0;
//}
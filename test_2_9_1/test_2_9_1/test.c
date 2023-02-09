
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

// 交换两个一样大的数组的内容
//int main()
//{
//	int arr1[] = { 1 ,2, 3, 4, 5 }; 
//	int arr2[] = { 6, 7, 8, 9, 10 };
//	
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//		
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf(" %d", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf(" %d", arr2[i]);
//	}
//	return 0;
//}

//猜数字
//#include<time.h>
//#include<stdlib.h>
//void menu()
//{
//	printf("******************\n");
//	printf("*** 1.开始游戏 ***\n");
//	printf("*** 0.退出游戏 ***\n");
//	printf("******************\n");
//}
//void game()
//{
//	int guess = 0;
//	//生成一个数
//	//srand(time(NULL));  //生成种子
//	int ret = rand()%100+1;  //每次重现开始 随机数是一样的
//	//printf(" %d", ret);
//	//猜大小
//	//printf("请输入你的猜想\n");
//	//scanf(" %d", &guess);
//	while (1)
//	{
//		printf("请输入你的猜想\n");
//		scanf(" %d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了，再猜一次\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了，再猜一次\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对啦\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("游戏结束了\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//		}
//
//	} while(input);
//	return 0;
//}
//  计算1/1-1/2+1/3 ···+1/99-1/100
//int main()
//{
//	float sum = 0;
//	int i = 1;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + (1.0 / i) * flag;
//		flag = -flag;
//	}
//	printf("sum = %f\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count = %d", count);
//	return 0;
//}








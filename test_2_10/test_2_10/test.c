#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
//���εĴ�ӡ
//int main()
//{
//	int line = 0;//�ϰ벿�ֵ�����
//	int i = 0;
//	scanf("%d", &line);
//	//�ϰ벿��
//	for (i = 0; i <line ; i++)
//	{
//		//ÿ�еĿո� 
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
//		//ÿ�еĿո�
//		int j = 0;
//		for (j = 0; j <i+1 ; j++)
//		{
//			printf(" ");
//		}
//		//ÿ��*
//		for (j = 0; j<2*line-3-2*i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//

//ˮ�ɻ���

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
//		//�ȿ��Ǽ�λ��
//		tmp = i;
//		count = 0;
//		while(tmp)
//		{
//			tmp = tmp / 10;
//			
//			count++;
//		}
//		//count�Ǽ����λ��
//		tmp = i;
//		sum = 0;//�ǵ�ѭ����ʼ ��ʼ��sum��count
//		while (tmp)
//		{
//			 //������λ������
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

// Sn = a+aa+aaa+aaaa        a��һ������  ǰn��֮��
//int main()
//{
//	int a = 0;  //����
//	int n = 0;   //����
//	int i = 0;
//	int sum = 0;
//	int tmp = 0;
//	scanf("%d %d", &a, &n);
//	for (i=0; i<n ;i++ )
//	{
//		//tmp = a * pow(10, i) + tmp;
//		tmp = tmp * 10 + a;//��λ�����Ϊλ��  ǰ���10���ϸ�λ��
//		sum = tmp + sum;
//	}
//	printf(" %d", sum);
//	return 0;
//}

// �������������� �ҵ������±�  �Ҳ�������-1
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
//			printf("�ҵ��ˣ��±�Ϊ�� %d", k);
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

//  ��¼����ģ�� ���λ��� ȫ���˳���¼
//int main()
//{
//	char arr[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("�����뿪������\n");
//		scanf("%s", arr);
//		if (strcmp(arr, "123456") == 0)// ������ͷ�ļ�Ҳ���ܹ� 
                                       //��Ϊ����ֵ��int
                                       //������ֻ������ֵ
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i > 2)
//	{
//		printf("������������˳�ϵͳ\n");
//	}
//
//	return 0;
//}
 
//�����д���Сд  ����Сд�����д  �������ֲ����
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
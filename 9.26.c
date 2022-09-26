#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//ì³²¨ÄÇÆõÊý
//int main()
//{
//	int i, n,a=1,b=1,t;
//	printf("please input a number:");
//	scanf("%d", &n);
//	printf("%d\t%d\t",a, b);
//	for (i = 2; i < n; i++)
//	{
//		t = a + b;
//		printf("%d\t", t);
//		b = a;
//		a = t;
//	}
//	return 0;
//int main()
//{
//	int arr[20],n,i;
//	printf("please input a number:");
//	scanf("%d", &n);
//	arr[0] = 1;
//	arr[1] = 1;
//	for (i = 2; i < n; i++)
//	{
//		arr[i] = arr[i - 1] + arr[i - 2];
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d\t", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{9,8,7,6},{ -10,10,-5,2} };
//	int i, j,a,b;
//	int max = arr[0][0];
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (arr[i][j]>max)
//			{
//				max = arr[i][j];
//				a = i;
//				b = j;
//			}
//		}
//	}
//	printf("%d\n", max);
//	printf("%d,%d", a, b);
//	return 0;
//}
int main()
{
	char str[100]={0};
	int num = 0;
	int word = 0;
	int i;
	gets(str);
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] == ' ')
		{
			word = 0;
		}
		else if (word == 0)
		{
			word = 1;
			num++;
		}
	}
	printf("%d", num);
	return 0;
}


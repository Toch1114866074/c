#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, count = 0, i;
	printf("欢迎使用判断素数工具\n");
	printf("-------------------------------------------------------\n");
	printf("请输入一个数:");
	scanf_s("%d", &a);
	for (i = 2; i < a - 1; i++)
	{
		if (a % i == 0)
		{
			count++;
			printf("a的第%d个约数：%d\n", count,i);
		}
	}
	if (count == 0)
	{
		printf("a是质数（素数）\n");
	}
	else
	{
		printf("a不是质数（素数）\n");
	}
	system("pause");
}
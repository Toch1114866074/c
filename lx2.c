#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, count = 0, i;
	printf("��ӭʹ���ж���������\n");
	printf("-------------------------------------------------------\n");
	printf("������һ����:");
	scanf_s("%d", &a);
	for (i = 2; i < a - 1; i++)
	{
		if (a % i == 0)
		{
			count++;
			printf("a�ĵ�%d��Լ����%d\n", count,i);
		}
	}
	if (count == 0)
	{
		printf("a��������������\n");
	}
	else
	{
		printf("a����������������\n");
	}
	system("pause");
}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a, b, c;
//
//
//	printf("������������");
//	scanf("%d%d%d",&a,&b,&c);
//	//�㷨ʵ��
//	if (a < b)
//	{
//		int temp;
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		int temp;
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		int temp;
//		temp = b;
//		b = c;
//		c = temp;
//	}
//
//	printf("%d %d %d ",a,b,c);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for(i=1;i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	
//	int m, n, r,x,y;
//	printf("������������");
//	scanf("%d%d",&m,&n);
//	x = m;
//	y = n;
//	while (r=m%n)
//	{
//		//r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d��%d�����Լ����:%d",x,y,n);
//	return 0;
//}



	//int main()
	//{
	//	int year;
	//	//printf("���������");
	//	//scanf("%d", &year);
	//	for (year = 1000; year <= 2000; year++)
	//	{
	//		//�ܱ�4�����Ҳ��ܱ�100������������
	//		//�ܱ�400������������
	//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	//		{
	//			printf("%d������\n", year);
	//		}
	//	}


	//	return 0;
	//}

//#include <math.h>
//int main()
//{//�ж�100-200֮������Ƿ�������
//	int i, j,count=0;
//	for (i = 101; i <= 200; i+=2)//for(i=100;i<=200;i++) ż��������������2���⣩
//	{
//		//sqrt()��һ����ѧ�Ŀ⺯��
//		for (j = 2; j <= sqrt(i); j++)//for (j = 2; j < i; j++) 
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (sqrt(i)< j)
//		{
//			printf("%d������ ", i);
//			count++;
//		}
//		
//
//
//	}
//	printf("\ncount=%d",count);
//	return 0;
//}



//int main()
//{//��10���������ֵ
//	int i;
//	int arr[10] = { 1,82,-5,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//printf("%d",sz);
//	for (i = 1; i < sz; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d",max);
//	return 0;
//}


#include <stdlib.h>
#include <time.h>
//RAND_MAX
void menu()
{
	printf("*********************************************\n");
	printf("*****  0���˳���Ϸ     1����ʼ��Ϸ      *****\n");
	printf("*********************************************\n");
}

void game()
{
	int ret = 0,guess;//guessΪ�²����
	//1������һ�������
	//��ʱ�����������������������
	//time_t time( time_t *timer );


	
	ret = rand()%100+1; //ȡ1-100֮��������


	//printf("%d\n",ret);
	//2��������
	while (1)
	{	
		printf("��������Ҫ�²�����֣�");
		scanf("%d",&guess);
		if (guess > ret)
			printf("�´���\n");
		else if (guess < ret)
			printf("��С��\n");
		else
		{
			printf("��ϲ�㣬�¶���������\n");
			break;
		}
	}
}


int main()
{
	srand((unsigned int)time(NULL));
	int select=0;
	menu();
	
	do
	{
		//int select;
		printf("<--��ѡ��-->");
		scanf("%d", &select);
		switch (select)
		{
		case 0:
			printf("<--���˳�-->\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("<--,���벻�Ϸ���������ѡ��-->\n");
			break;
		}
	}
	while (select);


	return 0;
}
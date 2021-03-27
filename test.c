#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a, b, c;
//
//
//	printf("请输入三个数");
//	scanf("%d%d%d",&a,&b,&c);
//	//算法实现
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
//	printf("请输入两个数");
//	scanf("%d%d",&m,&n);
//	x = m;
//	y = n;
//	while (r=m%n)
//	{
//		//r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d和%d的最大公约数是:%d",x,y,n);
//	return 0;
//}



	//int main()
	//{
	//	int year;
	//	//printf("请输入年份");
	//	//scanf("%d", &year);
	//	for (year = 1000; year <= 2000; year++)
	//	{
	//		//能被4整除且不能被100整除的是闰年
	//		//能被400整除的是闰年
	//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	//		{
	//			printf("%d是闰年\n", year);
	//		}
	//	}


	//	return 0;
	//}

//#include <math.h>
//int main()
//{//判断100-200之间的数是否是素数
//	int i, j,count=0;
//	for (i = 101; i <= 200; i+=2)//for(i=100;i<=200;i++) 偶数不会是素数（2除外）
//	{
//		//sqrt()是一个数学的库函数
//		for (j = 2; j <= sqrt(i); j++)//for (j = 2; j < i; j++) 
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (sqrt(i)< j)
//		{
//			printf("%d是素数 ", i);
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
//{//求10个数的最大值
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
	printf("*****  0：退出游戏     1：开始游戏      *****\n");
	printf("*********************************************\n");
}

void game()
{
	int ret = 0,guess;//guess为猜测的数
	//1、生成一个随机数
	//用时间戳来设置随机数的生成起点
	//time_t time( time_t *timer );


	
	ret = rand()%100+1; //取1-100之间的随机数


	//printf("%d\n",ret);
	//2、猜数字
	while (1)
	{	
		printf("请输入你要猜测的数字：");
		scanf("%d",&guess);
		if (guess > ret)
			printf("猜大了\n");
		else if (guess < ret)
			printf("猜小了\n");
		else
		{
			printf("恭喜你，猜对啦！！！\n");
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
		printf("<--请选择-->");
		scanf("%d", &select);
		switch (select)
		{
		case 0:
			printf("<--已退出-->\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("<--,输入不合法，请重新选择-->\n");
			break;
		}
	}
	while (select);


	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
/*
#include<stdio.h>
int i;
int main()
{
	i--;
	if (i > sizeof(i))
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int a, b, c;
	a = 5;
	c = ++a;//a,b = 6
	b = ++c, c++, ++a, a++;//c = 7 a = 7 b = 7
	b += a++ + c;//a = 8 c = 8 b = 7
	printf("a = %d b = %d c = %d\n:", a, b, c);//9  23  8
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int a = 1999;
	//‭0000 0000 0000 0000 0000 0111 1100 1111‬
	int b = 2299;
	//0000 0000 0000 0000 0000 ‭1000 1111 1011‬
	int count = 0;
	int c = a ^ b;
	//0000 0000 0000 0000 0000 1111 0011 0100
	while (c)
	{
		c = c & (c - 1);
		//1.
		//0000 0000 0000 0000 0000 1111 0011 0100
		//0000 0000 0000 0000 0000 1111 0011 0011
		//2.
		//0000 0000 0000 0000 0000 1111 0011 0000
		//0000 0000 0000 0000 0000 1111 0010 1111
		//3.
		//0000 0000 0000 0000 0000 1111 0010 0000
		//0000 0000 0000 0000 0000 1111 0001 1111
		count++;
	}
	printf("count=%d\n", count);
	return 0;
}
*/

/*
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
#include<stdio.h>
int main()
{
	int a = 0;
	while (1)
	{
		printf("please input a num:\n");
		scanf("%d", &a);
		int arr[32] = { 0 };
		int i = 0;
		for (i = 0; i < 32; ++i)
		{
			arr[i] = a % 2;//11(1) 5(1) 2(0) 1(1)
			a = a / 2;// 5 2 1
		}//1101 0000 0000 0000 0000 0000 0000 0000
		printf("偶数：\n");
		for (i = 31; i >= 0; i = i - 2) //0000 0000 0000 0000 0000 0000 0000 1011
		{
			printf("%d ", arr[i]);
		}
		printf("\n奇数：\n");
		for (i = 30; i >= 0; i = i - 2)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
#include<stdio.h>
int Count(int a)
{
	int c = 0;
	while (a)
	{
		c++;
		a = a & (a - 1);
	}
	return c;
}
int main()
{
	int a = 0;
	while (1)
	{
		printf("please input a num:\n");
		scanf("%d", &a);
		int ret = Count(a);
		printf("count = %d\n", ret);
	}
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	while (1)
	{
		printf("please input two num:\n");
		scanf("%d %d", &a, &b);
		printf("交换后:\n");
		a = a ^ b;
		b = a ^ b;
		a = a ^ b;
		printf("%d %d\n", a, b);
	}
	return 0;
}
*/
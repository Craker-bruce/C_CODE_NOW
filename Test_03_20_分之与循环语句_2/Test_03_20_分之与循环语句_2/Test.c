#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>


//�����������˳������A��enter��B���ٰ�enter��
//����A������a,���з�enter������b,B������c��
//����enter�����µ������ַ�����������
int main()
{
	char a, b, c;
	a = getchar();
	b = getchar();
	c = getchar();
	putchar(a);
	putchar(b);
	putchar(c);
	putchar('\n');
	return 0;
}

/*
int main()
{
	char a, b;
	a = getchar();
	b = getchar();
	putchar(a);
	putchar(b);
	putchar('\n');
	return 0;
}



int main()
{
	char input[20] = { 0 };
	char ch = 0;
	printf("����������:");
	scanf("%s", input);
	printf("��ȷ������:(Y/N):");
	getchar(ch);
	ch = getchar(ch);
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}
	putchar(ch);
	return 0;

}

int main()
{
	char input[20] = { 0 };
	int ch = 0;
	printf("����������:");
	scanf("%s", input);
	printf("��ȷ������:(Y/N):");
	//��ջ������
	while ((ch = getchar()) != '\n')
	{
		;
	}
	ch = getchar();
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}

	return 0;

}

int main()
{
	char input[20] = { 0 };
	int ch = 0;
	printf("����������:");
	scanf("%s", input);
	printf("��ȷ������:(Y/N):");
	getchar();
	ch = getchar();
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}

	return 0;

}

//����1
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF) //EOF-end of file-�ļ�������־-�����ļ�ĩβ
//		putchar(ch);
//	return 0;
//}
//����2
//#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 100;
//	int count = 0;
//	while (i <= 200)
//	{
//
//		int j = 2;
//		//i=a*b,a����b��Ȼ��һ����<=��ƽ��i��
//		while (j <= sqrt(i))
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//			j++;
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//		i++;
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


// ���� 1!+2!+3!+����+10!
//�Ż�
int main()
{
	int n = 0;
	int i = 1;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}
	printf("ret = %d\n", sum);
	return 0;
}

int main()
{
	int n = 0;
	int i = 1;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		ret = 1;  //��ÿһ���Ľ׳˶���Ҫret��1
		for (i = 1; i <= n; ++i)
		{
			ret = ret * i;
		}
		sum = sum + ret;
	}
	printf("ret = %d\n", sum);
	return 0;
}



//����n�Ľ׳�
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 1;
	int ret = 1;

	while (i<=n)
	{
		ret = ret * i;
		i++;
	}
	printf("ret = %d\n", ret);
	return 0;
}


int main()
{
	int i = 0;
	do
	{
		if (i == 5)
			break;
		//continue;  //��ѭ������Ϊֱ���������жϲ���while��i<10������
		printf("%d ", i);   //0 1 2 3 4
		i++;
	} while (i < 10);
	return 0;
}

//ѭ��0��
int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)
		k++;
	return 0;
}

int main()
{
	char input[20] = { 0 };
	int ch = 0;
	printf("����������:");
	scanf("%s", input);
	printf("��ȷ������:(Y/N):");
	//getchar();
	//��ջ������
	while ((ch = getchar()) != '\n')
	{
		;
	}
	ch = getchar();
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}

	return 0;

}

int main()
{
	int ch = 0;
	ch = getchar();
	putchar(ch);
	return 0;
}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}


//��ӡ100-200֮�������
//�Գ���
//��������n�־���
//������
int main()
{
	int i = 101;
	int count = 0;
	while (i <= 200)
	{

		int j = 2;
		//i=a*b,a����b��Ȼ��һ����<=��ƽ��i��
		while (j <= sqrt(i))
		{
			if (i % j == 0)
			{
				break;
			}
			j++;
		}
		if (j > sqrt(i))
		{
			printf("%d ", i);
			count++;
		}
		i=i+2;
	}
	printf("\ncount = %d\n", count);
	return 0;
}


//������
//һ���ֲ���������ʼ����ʱ�򣬷ŵ������ֵ
int main()
{
	int i = 100;
	int count = 0;
	while (i <= 200)
	{

		int j = 2;
		//i=a*b,a����b��Ȼ��һ����<=��ƽ��i��
		while (j <= sqrt(i))
		{
			if (i % j == 0)
			{
				break;
			}
			j++;
		}
		if (j > sqrt(i))
		{
			printf("%d ", i);
			count++;
		}
		i++;
	}
	printf("\ncount = %d\n", count);
	return 0;
}



//����һ
int main()
{
	int i = 100;
	int count = 0;
	while (i <= 200)
	{
		//������ֻ�ܱ�1���������ֵ������ֵ
		//1.����2~i-1֮������֣��ò���������ȥ�Գ�i
		//�����������˵��i�������������2~i-1֮�������û��һ��������i�����˵��i������
		int j = 2;
		while (j < i)
		{
			//��j�Գ�i
			if (i % j == 0)
			{
				break; //����i++��
			}
			j++;
		}
		if (i == j)
		{
			printf("%d ", i);
			count++;
		}
		i++;
	}
	printf("\ncount = %d\n", count);
	return 0;
}


//��ӡ1000-2000������
int main()
{
	int count = 0;
	int year = 1000;
	while (year <= 2000)
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			printf("%d ", year);
			count++;
		}
		year++;
	}
	printf("\ncount = %d\n", count);
	return 0;
}

//�������������Լ��
//������շת�����
int main()
{
	int m = 24;
	int n = 18;
	while (m%n)  //Ϊ0��ʱ������while
	{
		int r = m % n;
		m = n;
		n = r;
	}
	printf("���Լ����:%d\n", n);
	return 0;
}


//����һ
int main()
{
	int m = 24;
	int n = 18;
	int min = (m > n ? n : m);
	while (1)
	{
		if (m % min == 0 && n % min == 0)
		{
			printf("���Լ����:%d\n", min);
			break;
		}
		min--;
	}
	return 0;
}

//��ӡ1-100֮�����ı���������
int main()
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0)
			printf("%d ", i);
		i++;
	}
	return 0;
}



//���������ְ��Ӵ�С���
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}
*/
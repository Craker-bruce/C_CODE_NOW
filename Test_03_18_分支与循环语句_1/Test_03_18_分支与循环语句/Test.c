#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i = 0;
//whileѭ���е�continue����������ѭ����ߵĴ���ֱ��ȥ�жϲ��֣�
//������һ������ж�
//��ʵ��ѭ����ֻҪ����break����ֹͣ���ڵ����е�ѭ����ֱ����ֹѭ���� 
//���ԣ�while�е�break������������ֹѭ����
	while (i < 10)
	{
		if (i == 5)
			continue; 
		printf("%d ", i);
		i++;
	}
	return 0;
}

/*
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;//3
	case 2:
		n++;//2
	case 3:
		switch (n)
		{//switch����Ƕ��ʹ��
		case 1:
			n++;
		case 2:
			m++;//4
			n++;//3
			break;
		}
	case 4:
		m++;//5
		break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n);//5  3
	return 0;
}


//switch���
int main()
{
	int day = 0;
	while (1)
	{
		printf("input a num:");
		scanf("%d", &day);
		switch (day)
		{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("weekday\n");
			break;
		case 6:
		case 7:
			printf("weekend\n");
			break;
		default: //Ĭ��ѡ������ܱ�case��������
			printf("�������\n");
			break;
		}
	}
	return 0;
}

//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//}

	
	//�ж������ǲ�������
	int main()
	{
		int a = 0;
		while (1)
		{
			printf("please input a num:");
			scanf("%d", &a);
			if (a % 2 == 1)
				printf("%d is odd\n", a);
			else
				printf("%d is not odd\n", a);
		}
		return 0;
	}


	//���1-100֮�������
	int main()
	{
		int i = 1;
		while (i <= 100)
		{
			printf("%d ", i);
			i += 2;
		}
		//for (int i = 1;i <= 100;++i)
		//{
		//	if (i % 2 == 1)
		//	{
		//		printf("%d ", i);
		//	}
		//}
		return 0;
	}


	int main()
	{
		int age = 10;
		if (5 == age) //�Ƚϳ����ͱ�����ֵ�Ƿ���ȵ�ʱ�򣬰ѳ����������
		{
			printf("hehe\n");
		}
		return 0;
	}

	int main()
	{
		int a = 0;
		int b = 2;
		if (a == 1)
			if (b == 2)
				printf("hehe\n");
			else
				printf("haha\n");
		return 0;
	}
	*/
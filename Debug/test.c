
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//��ѭ������
//F5 - ��������-��F9���ʹ��
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10 - i);
//	}
//	return 0;
//}

//int main()
//{
//	{
//		int tmp = 0;
//		printf("tmp = %d\n", tmp);
//
//	}
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}

//������
//void test2()
//{
//	printf("hehe\n");
//}
//
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//�׳˵���
//int main()
//{
//	int i = 0;
//	int sum = 0;//�������ս��
//	int n = 0;
//	int ret = 1;//����n�Ľ׳�
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//1.ջ����Ĭ��ʹ�ã���ʹ�øߵ�ַ���Ŀռ䣬��ʹ�õ͵�ַ���Ŀռ�
//2.���������±��������ַ���ɵ͵��߱仯
//��ѭ������Խ��
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//void my_strcpy(char* dest,char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}

//my_strcpy(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//	//��srcָ����ַ�����������destָ��Ŀռ䣬����'\0'�ַ�
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	//strcpy
//	//�ַ�������
//	char arr1[] = "###############";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	const int* p = &num;
//	//const����ָ�������*���ʱ�����ε���*p������ͨ��p���ı�*p(num)��ֵ
//	//const����ָ�������*�ұ�ʱ�����ε���ָ�����p����p���ܱ��ı���
//	*p = 20;
//	printf("%d\n", num);
//	return 0;
//}

int my_strlen(const char *str)
{
	int count = 0;
	assert(str != NULL);//��ָ֤�����Ч��
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}
#include <stdio.h>
#include <string.h>

//int Add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum =  Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	//strcpy - string copy - ×Ö·û´®¿½±´
//	//strlen - string length - ×Ö·û´®³¤¶È
//	char arr1[] = "bit";
//	char arr2[20] = "############";
//	strcpy(arr2,arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	//memset
//	//memory - ÄÚ´æ set - ÉèÖÃ
//	char arr[] = "hello,world";
//	memset(arr, '*',5);
//	printf("%s\n",arr);
//	return 0;
//}

//int get_max(int x,int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}	
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

void Swap1(int* pa, int* pb)
{
	int temp = 0;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main()
{
	int a = 10;
	int b = 20;
	printf("a = %d,b = %d\n", a, b);
	Swap1(&a, &b);
	printf("a = %d,b = %d\n", a, b);
	return 0;
}
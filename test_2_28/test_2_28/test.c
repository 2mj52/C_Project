

#include <stdio.h>

//int main(void)
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//	return 0;
//}
//int main()
//{
//	char a[1000];
//	int  i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));
//	return 0;
//}

//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	*pFloat = 9.0;
//
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//
//	return  0;
//}

char* mystrcpy( char* dest, const char* src)
{
	char* arr3 = dest;
	while (*src)
	{
		*dest++ = *src++;
	}
	return arr3;
}

int main(void)
{
	char a[] = "hello";
	char b[20] = {0};
	mystrcpy(b, a);
	printf("%s\n",b);
	return 0;
}
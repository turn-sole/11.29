#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*pc = 0;
//		pc++;
//	}
//}
//int main()
//{
//	int* p;
//	*p = 20;
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		*(p++) = i;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//}
int main()
{
	int a[10] = { 0 };
	int* p = a;
	free(p);
	p = NULL;
	return 0;
}
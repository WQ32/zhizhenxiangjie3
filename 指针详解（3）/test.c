#include <stdio.h>
//
//
////һά���鴫��
////test��һ��
//void test(int arr[])
//{}
////������
//void test(int arr[10]) //[]˳������ٶ��У�û������
//{}
////������
//void test(int* arr)    // ��������Ԫ�ص�ַ
//{}
////test1��һ��
//void test1(int *arr[20])
//{}
//// ������
//void test1(int **arr)   //������arr1�������ָ�����Ԫ�ص�ַ���ö���ָ��
//{}
//   ������
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr1[20] = { 0 };
//	test(arr);
//	test1(arr1);
//	return 0;
//}
//
//// ��ά���鴫��
//// ���ڶ�ά���飬���Բ�֪���ж����У����Ǳ���֪��һ�ж���Ԫ��
//// ���Դ�����ʱ������ʡ�Ե�һ���򣬵�����ʡ�Եڶ����� 
////��һ��
//void test1(int arr[3][5])  //���й��о�
//{}
////������
//void test2(int arr[][5])
//{}
////������
//void test3(int *arr)	//error-��Ϊ����ȥ��ֻ��arr��һ�е�Ԫ�أ�
// {}						//�����Ǿ���ĳһ��Ԫ�ص�λ��
//void test3(int * arr[5]) //error-������һ�����飬��5��Ԫ�أ�ÿ��Ԫ�ض���int*���ͣ�ָ������
//{}
//void test3(int** arr)  //error-��������һ��ָ��ĵ�ַ�����Ǵ���ȥ����һ������
//{}
//void test3(int (*arr)[5])  //Ture-����һ��ָ������
//{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test1(arr);
//	test2(arr);
//	test3(arr);
//	return 0;
//}
//
//// һ��ָ�봫��
//void print(int* p, int sz)
//{}
//
//int mian()
//{
//	int arr[] = { 0,1,0,2,5,9,4,6,7 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//	return 0;
//}
////������������һ��ָ��ʱ���ܹ�����ʲô����
//void test1(int*p)
//{}
//void test2(char *p)
//{}
//int main()
//{
//	int aa = 10;
//	int* p = &aa;
//	test1(&aa);
//	test1(p);
//	char bb = 'w';
//	char* pc = &bb;
//	test2(&bb);
//	test2(pc);
//	return 0;
//}
//
//// ����ָ�봫��   - ���Դ�һ��ָ��ĵ�ַ�����������������һ��ָ��������������
//void test(int** p)    // ����ָ��
//{}
//
//int main()
//{
//	int* pa;
//	int** ppa = &pa;
//	test(&pa);
//	test(ppa);
//	int* arr[10];
//	test(arr);    // ����ȥ������Ӧ����ָ�����飬ÿ��Ԫ�ض���ָ��
//	return 0;
//}

////����ָ��  -ָ�������ָ��
////����ָ��  -ָ������ָ��-��ź�����ַ��һ��ָ��
//
//int Add(int x, int y)
//{
//	int sum = 0;
//	sum = x + y;
//	return sum;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	// &arr
//	// arr  ����ȡ��ַ��һ��
//	int(*p)[10] = &arr;
//	int a = 10;
//	int b = 20;
//	printf("%d\n", Add(a, b));
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	// &������ �� ������ ���Ǻ����ĵ�ַ
//	int (*pa)(int, int) = Add;   // Ҫ��ź����ĵ�ַ������ָ�뱣��
//	// *pa�ҵ��������
//	printf("%d\n", (*pa)(2, 30));
//	return 0;
//}

void Print(char* str)
{
	printf("%s\n", str);
}
int main()
{
	void (*p)(char*) = Print;
	(*p)("Hello world!");
	return 0;
}


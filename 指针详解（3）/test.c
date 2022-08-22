#include <stdio.h>
//
//
////一维数组传参
////test法一：
//void test(int arr[])
//{}
////法二：
//void test(int arr[10]) //[]顺便填多少都行，没有意义
//{}
////法三：
//void test(int* arr)    // 传的是首元素地址
//{}
////test1法一：
//void test1(int *arr[20])
//{}
//// 法二：
//void test1(int **arr)   //传的是arr1这个数组指针的首元素地址，用二级指针
//{}
//   主函数
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr1[20] = { 0 };
//	test(arr);
//	test1(arr1);
//	return 0;
//}
//
//// 二维数组传参
//// 对于二维数组，可以不知道有多少行，但是必须知道一行多少元素
//// 所以传参数时，可以省略第一个框，但不能省略第二个框 
////法一：
//void test1(int arr[3][5])  //最中规中矩
//{}
////法二：
//void test2(int arr[][5])
//{}
////法三：
//void test3(int *arr)	//error-因为传过去的只是arr第一行的元素，
// {}						//而不是具体某一个元素的位置
//void test3(int * arr[5]) //error-里面是一个数组，有5个元素，每个元素都是int*类型，指针类型
//{}
//void test3(int** arr)  //error-里面存的是一级指针的地址，但是传过去的是一个数组
//{}
//void test3(int (*arr)[5])  //Ture-这是一个指针数组
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
//// 一级指针传参
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
////当函数参数是一级指针时，能够接受什么参数
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
//// 二级指针传参   - 可以传一级指针的地址，二级变量本身，存放一级指针的数组的数组名
//void test(int** p)    // 二级指针
//{}
//
//int main()
//{
//	int* pa;
//	int** ppa = &pa;
//	test(&pa);
//	test(ppa);
//	int* arr[10];
//	test(arr);    // 传过去的数组应该是指针数组，每个元素都是指针
//	return 0;
//}

////数组指针  -指向数组的指针
////函数指针  -指向函数的指针-存放函数地址的一个指针
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
//	// arr  上下取地址都一样
//	int(*p)[10] = &arr;
//	int a = 10;
//	int b = 20;
//	printf("%d\n", Add(a, b));
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	// &函数名 和 函数名 都是函数的地址
//	int (*pa)(int, int) = Add;   // 要存放函数的地址必须用指针保存
//	// *pa找到这个函数
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


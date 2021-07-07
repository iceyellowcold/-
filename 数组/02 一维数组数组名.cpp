#include <iostream>
using namespace std;

int main2() {

	
	
	
	

	int arr[5] = { 1,2,3,4,5};

	//1、可以统计整个数组在内存中的长度
	//一个元素占四个字节（整型）

	cout << sizeof arr[0] << endl;

	cout << sizeof(arr) << endl;

	//2、可以获取数组在内存中的首地址

	cout << (int)arr << endl;
	cout << (int)&arr[0] << endl;
	cout << (int)&arr[1] << endl;

	//数组名是常量，不可以进行赋值操作
	//arr = 100;

	system("pause");

	return 0;
}
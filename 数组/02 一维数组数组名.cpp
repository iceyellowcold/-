#include <iostream>
using namespace std;

int main2() {

	
	
	
	

	int arr[5] = { 1,2,3,4,5};

	//1������ͳ�������������ڴ��еĳ���
	//һ��Ԫ��ռ�ĸ��ֽڣ����ͣ�

	cout << sizeof arr[0] << endl;

	cout << sizeof(arr) << endl;

	//2�����Ի�ȡ�������ڴ��е��׵�ַ

	cout << (int)arr << endl;
	cout << (int)&arr[0] << endl;
	cout << (int)&arr[1] << endl;

	//�������ǳ����������Խ��и�ֵ����
	//arr = 100;

	system("pause");

	return 0;
}
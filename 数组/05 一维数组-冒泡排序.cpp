#include<iostream>
using namespace std;

int main5() {

	//利用冒泡排序实现升序序列

	int arr[] = { 4,2,8,0,5,7,1,3,9 };

	cout << "排序前：" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	//开始冒泡排序
	//总共排序轮数为 元素个数-1
	for (int i = 0,k = sizeof(arr) / sizeof(arr[0])-1; i < k; i++)
	{
		//内层循环对比 次数=元素个数-当前轮数-1
		for (int j = 0; j < (k - i - 1); j++)
		{
			//如果第一个数字，比第二个数字大，交换两个数字
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}
		}
	}
	//排序后结果
	cout << "排序后："<<endl;
	for(int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}

	system("pause");

	return 0;
}
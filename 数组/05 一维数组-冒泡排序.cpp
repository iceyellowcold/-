#include<iostream>
using namespace std;

int main5() {

	//����ð������ʵ����������

	int arr[] = { 4,2,8,0,5,7,1,3,9 };

	cout << "����ǰ��" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	//��ʼð������
	//�ܹ���������Ϊ Ԫ�ظ���-1
	for (int i = 0,k = sizeof(arr) / sizeof(arr[0])-1; i < k; i++)
	{
		//�ڲ�ѭ���Ա� ����=Ԫ�ظ���-��ǰ����-1
		for (int j = 0; j < (k - i - 1); j++)
		{
			//�����һ�����֣��ȵڶ������ִ󣬽�����������
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}
		}
	}
	//�������
	cout << "�����"<<endl;
	for(int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}

	system("pause");

	return 0;
}
#include<iostream>
using namespace std;
int Class(int arr[], int n, int k);
void prinft(int arr[], int n, int k);
int main()
{
	while (true) {
		int arr[100], b, c, i;
		cout << "�������һ����������Ͱ༶����" << endl;
		cin >> b >> c;
		if (b > c) {
			for (i = 1; i <= c; i++) {
				b = b - 1;
				const int d = b+1;
				arr[d] = Class(arr, b, i);
				prinft(arr, b, i);
				cout << endl;
			}
		}
		else { cout << "���ǹ�Ƥ����������ذ༶�󣡣�" << endl; }
	}
}
int Class(int arr[], int n, int k)
{
	for (int i = 0; i <n; i++)
	{
		arr[i] = 20170000 + i + k * 100;
	}
	return arr[n];
}
void prinft(int arr[], int n, int k)
{
	cout << "2017��"<<k<<"��ͬѧΪ��" << endl;
	int i;
	for (i = 0; i < n; i++)
	{
		cout << arr[i]<<" ";
		if ((i+1)%5==0)
		{cout << endl;}
		
	}
	cout << endl;
}
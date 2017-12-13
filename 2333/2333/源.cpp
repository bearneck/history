#include<iostream>
using namespace std;
int Class(int arr[], int n, int k);
void prinft(int arr[], int n, int k);
int main()
{
	while (true) {
		int arr[100], b, c, i;
		cout << "请输入第一个班的人数和班级个数" << endl;
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
		else { cout << "你是瓜皮吗，人数必须必班级大！！" << endl; }
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
	cout << "2017级"<<k<<"班同学为：" << endl;
	int i;
	for (i = 0; i < n; i++)
	{
		cout << arr[i]<<" ";
		if ((i+1)%5==0)
		{cout << endl;}
		
	}
	cout << endl;
}
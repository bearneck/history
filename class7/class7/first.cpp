#include<iostream>
#include"mat.h"
using namespace std;
int array1[5] = {1,2,3};
static int array2[5] = { 1 };
int main()
{
	/*int a, b, c;
	double q;
	cin >> a>>b>>c;
	q = average(a, b, c);
	if (q == 6)
	{
		cout << "good morning" << endl;
	}
	else
	{
		cout << "目标程序" << endl;
	}*/
	//int name[65],number[65],i;
	//for ( i = 0; i < 65; i++)
	//{
	//	name[i] = i+1;
	//	number[i] = 201701 + i;
	//	cout << "学生 " << name[i] << " 的学号为 " << number[i] << endl;
	//}
	//int arr1[5] = { 2 };
	//static int arr2[5] = { 1,2 };

	//int n;
	//cout << "global:\n";
	//for (n = 0; n < 5; n++)
	//{
	//	cout << " " << array1[n];
	//}
	//cout << "\nglobal static:\n";
	//for (n = 0; n < 5; n++)
	//	cout << " " << array2[n];

	//cout << "\nlocal:\n";
	//for (n = 0; n < 5; n++)
	//	cout << " " << arr1[n];
	//cout << "\nlocal static:\n";
	//for (n = 0; n < 5 ; n++)
	//	cout << " " << arr2[n];
	//cout << endl;
	int i;
	char a[] = "陈显森";
	for ( i = 0; i < 6; i++)
	{
		cout << a[i];
	}
	cout << endl;
	cout << "将第一个字改为OK" << endl;
	a[0] = 'O';
	a[1] = 'K';
	for (i = 0; i < 6; i++)
	{
		cout << a[i];
	}
	cout << endl;
} 
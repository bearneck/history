#include"head.h"
int main()
{
	char a;
	cout << "��ѡ��C OR A" << endl;
	cin >> a;
	if (a == 'C')
	{
		
		double r,s;
		cout << "������뾶" << endl;
		cin >> r;
		s = circle(r);
		cout << "Բ���Ϊ" << s << endl;
	}
	if (a == 'A')
	{
		int x,y,s;
		cout << "�����볤��" << endl;
		cin >> x>>y;
		s = area(x,y);
		cout << "�������Ϊ" << s << endl;
	}
}
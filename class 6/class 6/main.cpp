#include"head.h"
int main()
{
	char a;
	cout << "请选择C OR A" << endl;
	cin >> a;
	if (a == 'C')
	{
		
		double r,s;
		cout << "请输入半径" << endl;
		cin >> r;
		s = circle(r);
		cout << "圆面积为" << s << endl;
	}
	if (a == 'A')
	{
		int x,y,s;
		cout << "请输入长宽" << endl;
		cin >> x>>y;
		s = area(x,y);
		cout << "矩形面积为" << s << endl;
	}
}
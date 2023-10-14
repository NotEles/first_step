#include <iostream>
using namespace std;

int square()
{
	int r, a, b;
	char cho = 1;
	cout << "选择你的图形：\n" << "a.圆\n" << "b.长方形\n" << "c.正方形\n";
	cin >> cho;
	switch (cho)
	{
	case 'a': cout << "半径为：";
		cin >> r;
		cout << "面积是" << 3.14 * r * r;
		break;
	case 'b': cout << "长与宽：";
		cin >> a >> b;
		cout << "面积是" << a * b;
		break;
	case'c': cout << "边长：";
		cin >> a;
		cout << "面积是" << a * a;
	}
	return 0;
}

#include <iostream>
using namespace std;

int square()
{
	int r, a, b;
	char cho = 1;
	cout << "ѡ�����ͼ�Σ�\n" << "a.Բ\n" << "b.������\n" << "c.������\n";
	cin >> cho;
	switch (cho)
	{
	case 'a': cout << "�뾶Ϊ��";
		cin >> r;
		cout << "�����" << 3.14 * r * r;
		break;
	case 'b': cout << "�����";
		cin >> a >> b;
		cout << "�����" << a * b;
		break;
	case'c': cout << "�߳���";
		cin >> a;
		cout << "�����" << a * a;
	}
	return 0;
}

#include <iostream>
using namespace std;

int multipy()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int f = 1; f <= i; f++)
			cout << f << "*" << i << " = " << f * i<<"  ";
		cout << endl;
	}
	return 0;
}

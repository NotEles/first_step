#include <iostream>
using namespace std;

double traf(double a)
{
	double b = (a - 32) * 5 / 9;
	return b;
}

int Maxl(int a, int b)
{
	int c = a >= b ? a : b;
	return c;
}

int Maxl(int a, int b, int c)
{
	int d = Maxl(a, Maxl(b, c));
	return d;
}

double Maxl(double a, double b)
{
	double c = a >= b ? a : b;
	return c;
}

int F(int n)
{
	if (n >= 3)
		return F(n - 1) + F(n - 2);
	else if (n == 2 || n == 1)
		return 1;
}


void type()
{
	bool ty = true, fir = true;
	while (ty)
	{
		char wor = getchar();
		if (fir && wor >= 'a' && wor <= 'z')
		{
			wor -= 32;
			fir = false;
		}
		else if (!fir && wor >= 'A' && wor <= 'Z')
		{
			wor += 32;
		}
		cout<< wor;
		if (wor == '.')
			ty = false;
	}
}






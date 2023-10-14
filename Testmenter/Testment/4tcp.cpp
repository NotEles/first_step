
#include <iostream>
using namespace std;

int A = 0, B = 0;

void jud(char x, char y, char m, char n) {
	char k = getchar();
	if (k == x) A++;
	else if (k == y || k == m || k == n) B++;

}
void timesch()
{
	char a = '1', b = '3', c = '5', d = '7', m;
	cout << "please input 4 numbers:\n";
	jud(a, b, c, d);
	jud(b, a, c, d);
	jud(c, a, b, d);
	jud(d, a, b, c);
	m = getchar();
	cout << A << "A " << B << "B\n";
}

int main()
{
	while (A != 4)
	{
		A = 0;
		B = 0;
		timesch();
	}
}
#include <iostream>
using namespace std;

extern int A, B;

void jud(char x, char y, char m, char n) {
	char k = getchar();
	if (k == x) A++;
	else if (k == y || k == m || k == n) B++;

}
int main()
{
	char a='1', b='3', c='5', d='7';
	int A = 0, B = 0;
	jud(a,b,c,d);
	jud(b, a, c, d);
	jud(c, a, b, d);
	jud(d, a, b, c);
	cout << A << "A " << B << "B";
}
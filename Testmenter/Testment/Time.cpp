#include <iostream>
using namespace std;

struct TiMe {
	int year;
	int month;
	int date;
	int hour;
	int min;
	int sec;
};

int tIMe()
{
	int a, b, c, d, e,f;
	cout << "year month date hour min sec \n";
	cin >> a >> b >> c >> d >> e>>f;
	TiMe t1{ a,b,c,d,e,f };
	cout << t1.year << " y " << t1.month << " m " << t1.date 
		<< " d " << t1.hour << " h " << t1.min << " m " << t1.sec << " s ";
	return 0;
}
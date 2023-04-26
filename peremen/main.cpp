// Поменять местами 2 переменные:

#include <iostream>;
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int a = 2, b = 3;
	cout << a << "\t" << b << endl;
	int c = a;
	a = b;
	b = c;
	cout << a << "\t" << b << endl;
}

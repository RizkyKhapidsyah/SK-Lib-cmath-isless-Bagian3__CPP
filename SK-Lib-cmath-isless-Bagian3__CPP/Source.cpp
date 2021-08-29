#include <iostream>
#include <cmath>
#include <conio.h>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {
	// Take two any values
	int a, b;
	bool hasil;
	a = 5;
	b = 8;

	hasil = isless(a, b);
	cout << a << " isless than " << b << ": " << hasil << endl;

	char x = 'a';

	hasil = isless(x, b);
	cout << x << " isless than " << b << ": " << hasil;

	_getch();
	return 0;
}

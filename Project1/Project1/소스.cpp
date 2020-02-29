#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d, e;

	cin >> a >> b;

	c = b % 10 * a;
	
	d = b / 10 % 10 * a;

	e = b / 100 * a;

	cout << c << endl << d << endl << e << endl;

	return 0;
}
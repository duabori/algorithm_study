#include <iostream>

using namespace std;

int main()
{
	int x(0);
	int y(0);

	cin >> x >> y;

	cout << x * (y % 10) << endl;
	cout << x * ((y % 100) / 10) << endl;
	cout << x * (y / 100) << endl;
	cout << x * y << endl;

	return 0;
}
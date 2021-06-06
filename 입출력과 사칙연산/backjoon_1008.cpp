#include <iostream>

using namespace std;

int main()
{
	double x(0);
	double y(0);

	cin >> x >> y;
	cout << fixed; 
	cout.precision(15);
	cout << x / y;

	return 0;
}
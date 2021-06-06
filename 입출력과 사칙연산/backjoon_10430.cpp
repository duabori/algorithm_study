#include <iostream>

using namespace std;

int main()
{
	int x(0);
	int y(0);
	int z(0);

	cin >> x >> y >> z;

	cout << (x + y) % z << endl;
	cout << ((x % z) + (y % z)) % z << endl;
	cout << (x * y) % z << endl;
	cout << ((x % z) * (y % z)) % z << endl;

	return 0;
}
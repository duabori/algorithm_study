#include <iostream>

using namespace std;

int main()
{
	int x(0);
	int y(0);

	cin >> x >> y;

	if (x > y)
	{
		cout << ">";
	}
	else if (x < y)
	{
		cout << "<";
	}
	else
	{
		cout << "==";
	}
	return 0;
}
#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int i = 0;
	int sum = 0;

	cin >> a >> b;

	for (i = a; i <= b; ++i)
	{
		sum = sum + i;

		if (i == b)
		{
			cout << i << "=" << sum;
		}
		else
		{
			cout << i << "+";
		}
	}
	return 0;
}

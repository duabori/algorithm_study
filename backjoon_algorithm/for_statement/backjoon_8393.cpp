#include <iostream>

int main()
{
	using namespace std;

	int i = 0;
	int number = 0;
	int sum = 0;
	cin >> number;

	for (i = 0; i <= number; i++)
	{
		sum = sum + i;
	}
	cout << sum;
	return 0;
}
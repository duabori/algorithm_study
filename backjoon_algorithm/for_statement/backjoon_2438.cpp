#include <iostream>

int main()
{
	using namespace std;

	int i = 0;
	int j = 0;
	int number = 0;

	cin >> number;
	
	for (i = 1; i <= number; i++)
	{
		for (j = 0; j < i; j++)
			cout << "*";
		cout << '\n';
	}
	return 0;
}
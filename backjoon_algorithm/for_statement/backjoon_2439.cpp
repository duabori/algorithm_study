#include <iostream>

int main()
{
	using namespace std;
	
	int input = 0;

	cin >> input;
	
	for (int i = 1; i <= input; i++)
	{
		for (int j = 1; j <= input - i; j++)
		cout << " ";
		for (int j = 1; j <= i; j++)
			cout << "*";
		cout << '\n';
	}
	return 0;
}


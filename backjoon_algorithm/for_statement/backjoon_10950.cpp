#include <iostream>

int main()
{
	using namespace std;

	int i = 0;
	int number = 0;
	int input_1 = 0;
	int input_2 = 0;

	cin >> number;

	for (i = 0; i < number; i++)
	{
		cin >> input_1 >> input_2;
		cout << input_1 + input_2 << '\n';
		
	}
	return 0;
}
#include <iostream>

int main()
{
	using namespace std;

	int number = 0;
	int input_1 = 0;
	int input_2 = 0;

	cin >> number;

	for (int i = 1; i <= number; i++)
	{
		cin >> input_1 >> input_2;
		cout << "Case #" << i << ": " << input_1 << " + " << input_2 << " = " <<input_1 + input_2 <<endl;
	}
	return 0;
}
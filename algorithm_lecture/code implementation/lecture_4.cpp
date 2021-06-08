#include <iostream>

using namespace std;

int main()
{	
	int i = 0;
	int age = 0;
	int number = 0;
	int max = -2147000000;
	int min = 2147000000;
	
	cin >> number;

	for (i = 1; i <= number; i++) {
		cin >> age;
		if (age > max )
			max = age;
		if (age < min)
			min = age;
	}
	cout << max - min;
	return 0;
}

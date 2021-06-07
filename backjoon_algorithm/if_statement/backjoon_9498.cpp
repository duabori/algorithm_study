#include <iostream>

using namespace std;

int main()
{
	int x(0);

	cin >> x;

	if(90 <= x && x<= 100) //x >= 90
	{
		cout << "A";
	}
	else if(80 <= x && x<= 89) //x >= 80
	{
		cout << "B";
	}
	else if(70 <= x && x <= 79) //x >= 70
	{
		cout << "C";
	}
	else if (60 <= x && x <= 69) //x >= 60
	{
		cout << "D";
	}
	else
	{
		cout << "F";
	}
	
	return 0;
}
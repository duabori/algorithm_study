#include <iostream>

using namespace std;

int main()
{
	int input(0);
	int n1(0);
	int n2(0);
	int n3(0);
	int check(0);
	int cnt(1);

	cin >> input;
	check = input;

	while (true)
	{
		n1 = input / 10;
		n2 = input % 10;
		input = n2 * 10 + ((n1 + n2) % 10);

		if (check == input)
		{
			break;
		}
		else
		{
			cnt++;
		}
	}cout << cnt << endl;

	return 0;
}
#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	int i = 0;
	int sum = 0;

	cin >> n;

	cout << "1";
	for (i = 2; i < n; ++i)
	{
		if (n % i == 0) {
			cout << " + " << i;
			sum = sum + i;
		}
		else {
			continue;
		}
	}
	cout << " = " << sum + 1; //ó������ sum = 1; �� �ʱ�ȭ �ϴ� ����� �ִ�. 
	return 0;
}

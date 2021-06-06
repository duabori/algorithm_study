#include <iostream>

using namespace std;

int main()
{
	int year(0);

	cin >> year;

	/*if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) 로 조건문을 할 경우에는 맞지만
	'year % 400 == 0 || year % 100 != 0' 이렇게 조건 순서가 바뀌면 답이 틀린다. 
	&&는 || 우선순위가 높고 논리연산자는 왼쪽에서 오른쪽으로 계산되도록 보장하므로 순서대로
	계산된다.
	문제를 잘 읽고 ()를 꼭 해주어야 한다. 
	year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) 첫 번째 항과 두 번째 항은 '이면서'로
	묶이는 논리합이므로 위와 같다.*/

	if (year % 4 == 0)
	{
		if (year % 100 != 0)
		{
			cout << "1";
		}
		else if (year % 400 == 0)
		{
			cout << "1";
		}
		else
		{
			cout << "0";
		}
	}
	else
	{
		cout << "0";
	}

	return 0;
}
#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	int m = 0;
	
	cin >> n >> m;

	int i = 0;
	int sum = 0;
	int num = n / m;
	
	for (i = 1; i <= num; i++)
	{
		sum = sum + (m * i);
	}
	cout << sum;

	return 0;
}


/* another solution

int main()
{
int n = 0;
int m = 0;

cin >> n >> m;

int sum = 0;
int i = 0;

for(i = 1; m * i <= n; i++)
{
sum = sum + m * i;
}
cout << sum;

return 0;
}
*/

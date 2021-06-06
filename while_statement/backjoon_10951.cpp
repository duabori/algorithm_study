#include <iostream>

using namespace std;

int main()
{

	int a(0);
	int b(0);

	/*첫 번째 방법
	while (cin >> a >> b)
			cout << a + b << endl;
	*/

	//두 번째 방법 : EOF(end of file)을 써서 입력값을 EOF까지 받는다. 
	while (true) {
		cin >> a >> b;
		if (cin.eof() == true)
		{
			break;
		}
		cout << a + b << endl;
	}
	return 0;
}
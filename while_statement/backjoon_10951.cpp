#include <iostream>

using namespace std;

int main()
{

	int a(0);
	int b(0);

	/*ù ��° ���
	while (cin >> a >> b)
			cout << a + b << endl;
	*/

	//�� ��° ��� : EOF(end of file)�� �Ἥ �Է°��� EOF���� �޴´�. 
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
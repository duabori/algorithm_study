#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	char input[101];
	
	gets_s(input);

	for (int i = 0; input[i] != '\0'; i++)
	{
		if (input[i] == ' ')
			continue;
		if (input[i] >= 65 && input[i] <= 90)
			cout << static_cast<char>(input[i] + 32);
		else if (input[i] >= 97 && input[i] <= 122)
			cout << static_cast<char>(input[i]);
	}
	return 0;
}


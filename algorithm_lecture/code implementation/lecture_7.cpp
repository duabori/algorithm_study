/*#include <iostream>
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


*/
#include <iostream>
#include <stdio.h>
#include <cstdio>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

int main()
{
	char input[101] = { 0 , };
	char output[101] = { 0 , };
	int j = 0;

	cin.getline(input, 101, '\n');

	for (int i = 0; input[i] != '\0'; i++)
	{
		if (input[i] != ' ')
		{
			if (input[i] >= 'A' && input[i] <= 'Z')
			{
				output[j++] == input[i] + 32;
			}
			else if (c[i] >= 97 && c[i] <= 122)
			{
				output[j++] == input[i];
			}
		}
	}
	output[j] = '\0';
	printf("%s", output);

	return 0;
}

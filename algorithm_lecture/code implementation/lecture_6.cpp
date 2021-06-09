#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	char input[100];
	int result = 0;
	int cnt = 0;
	int i = 0;
	
	scanf_s("%s", &input, sizeof(input));
	for (i = 0; input[i] != '\0'; i++)
	{
		if (input[i] >= 48 && input[i] <= 57)
		{
			result = result * 10 + (input[i] - '0');
		}
	}
	printf("%d\n", result);
	for (i = 1; i <= result; i++)
	{
		if (result % i == 0)
			cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}




/* incomplete code
int main()
{
	int i = 0;
	char input[100];
	char output[100] = { '0', }; //배열 초기화
	int output_index = 0;
	int result = 0;

	scanf_s("%s", &input, sizeof(input));

	for (i = 0; input[i] != '\0'; i++)
	{
		if (47 < input[i] && input[i] < 58)
		{
			if (output_index == 0 && input[i] == '0')
				continue;
			output[output_index++] = input[i];
		}
	}

	printf("%s\n", output);
	return 0;
}
*/
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{	
	char number[20]; 
	int birth_year = 0; 
	int age = 0; 
	scanf_s("%s", &number, sizeof(number)); //ǥ�� �Է��� �޾Ƽ� �迭 ������ ���ڿ��� �����Ѵ�. 
	
	if(number[7] == '3'|| number[7] =='4') 
		birth_year = (2000 + ((number[0] -'0') * 10 + (number[1] - '0')));		
	else
		birth_year = (1900 + ((number[0] - '0') * 10 + (number[1] - '0')));
	age = 2019 - birth_year + 1;
	printf("%d ", age);

	if (number[7] == '1' || number[7] == '3')
		printf("M");
	else
		printf("W");

	return 0;
}

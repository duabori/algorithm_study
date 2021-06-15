#include <iostream>

using namespace std;

string solution(int num) {

    string answer = "";

    cin >> num;
    if (num % 2 == 0)
        answer = "Even";
    else
        answer = "Odd";

    return answer;
}
/* another solution

string solution(int num)
{
    return num % 2 ? "Odd" : "Even";
}
*/
#include <string>
#include <vector>

using namespace std;

string solution(string s) {

    string answer = "";
    int len = s.length();

    if (len % 2 == 0)
    {
        answer = s.substr((len / 2 - 1), 2);
    }
    if (len % 2 == 1)
    {
        answer = s.substr(len / 2, 1);
    }

    return answer;
}
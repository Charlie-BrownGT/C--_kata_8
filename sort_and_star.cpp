#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string twoSort(vector<string> s)
{
    sort(s.begin(), s.end());

    string str = s[0];
    string answer;

    for(char &s: str)
    {
        answer.push_back(s);
        answer.push_back('*');
        answer.push_back('*');
        answer.push_back('*');
    }
    
    return answer.substr(0, answer.length() - 3);
}
#include <iostream>
#include <string>
using namespace std;

string deleteletters(string s)
{
    int i = 0;
    while (i < s.length())
    {
        if (isalpha(s[i]))
        {
            s.erase(i, 1);
        }
        else
        {
            i++;
        }
    }
    return s;
}

int main()
{
    string line;
    getline(cin, line);

    line = deleteletters(line);

    cout << line << endl;

    return 0;
}
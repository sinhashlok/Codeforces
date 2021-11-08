#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
            count++;
    }

    if (count <= s.length() - count)
    {
        for (int i = 0; i < s.length(); i++)
            s[i] = tolower(s[i]);
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
            s[i] = toupper(s[i]);
    }

    cout << s;
    return 0;
}
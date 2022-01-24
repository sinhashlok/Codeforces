#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    //checking
    bool flag = true;
    for (int i = 1; i < s.length(); i++)
    {
        if (isalpha(s[i]))
        {
            if (isupper(s[i]))
                continue;
            else
            {
                flag = false;
                break;
            }
        }
    }

    if (flag)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (isalpha(s[i]))
            {
                if (isupper(s[i]))
                    s[i] = tolower(s[i]);
                else
                {
                    s[i] = toupper(s[i]);
                }
            }
        }
    }

    cout << s;

    return 0;
}
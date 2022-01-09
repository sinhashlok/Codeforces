#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int count = 0;

    for (int i = 1; i <s.length() - 1; i += 3)
    {
        if (isalpha(s[i]))
        {
            count ++;
            for (int j = i + 3; j < s.length() - 1; j += 3)
            {
                if (isalpha(s[j]) && (s[j] == s[i]))
                {
                    s[j] = '1';
                }
            }
        }
    }

    cout << count;

    return 0;
}
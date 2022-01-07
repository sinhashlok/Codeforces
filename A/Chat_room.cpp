#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string k = "hello";
    int a = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (k[a] == s[i])
        {
            if (a == 4)
            {
                cout << "YES";
                return 0;
            }
            a++;
        }
    }

    cout << "NO";

    return 0;
}
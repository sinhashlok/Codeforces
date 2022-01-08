#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int count = 1, n = 0;

    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (s[i] == s[j])
                n++;
        }

        if (n == 0)
            count ++;
        
        n = 0;
    }

    if (count % 2 == 0)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";

    return 0;
}
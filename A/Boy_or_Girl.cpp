#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    
    int count = 0;

    for (int i = 1; i < s.length(); i++)
        if (s[i-1] != s[i])
            count++;
    

    if (count % 2 == 0)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";

    return 0;
}
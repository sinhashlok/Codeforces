#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s, s1 = "";
        cin >> s;
        
        s1 += s[0];
        s1 += s[1];
        if (s.length() > 2)
            for (int i = 3; i < s.length(); i = i+2)
                s1 += s[i];
        
        cout << s1 << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        if (s.length() >= 3)
            cout << "NO" << endl;
        else if (s.length() == 2)
        {
            if (s[0] == s[1])
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else
            cout << "YES" << endl;
    }

    return 0;
}
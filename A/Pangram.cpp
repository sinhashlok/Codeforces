#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    if (n < 26)
    {
        cout << "NO" << endl;
        return 0;
    }

    vector<int> alpha (26, 0);

    for (int i = 0; i < n; i++)
    {
        if (alpha[abs('a' - tolower(s[i]))] == 0)
            alpha[abs('a' - tolower(s[i]))] = 1;
    }

    for (int i = 0; i < 26; i ++)
    {
        if (alpha[i] == 0)
        { 
           cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}
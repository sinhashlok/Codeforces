#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    string s1, s2, s3;
    for (int i = 0; i < m; i++)
    {
        s1 = s1 + '#';
        if (i == 0 || i == m-1)
        {
            if (i == 0)
            {
                s2 = s2 + '#';
                s3 = s3 + '.';
            }
            else if (i == m-1)
            {
                s3 = s3 + '#';
                s2 = s2 + '.';
            }
        }
        else
        {
            s2 = s2 + '.';
            s3 = s3 + '.';
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (i%2 == 1)
            cout << s1 << endl;
        else if (i%4 != 0)
            cout << s3 << endl;
        else
            cout << s2 << endl;
    }

    return 0;
}
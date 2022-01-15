#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, r, c;
        cin >> n >> m >> r >> c;
        r--;
        c--;
        char arr[n][m];
        bool flag = false, check = false;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];

                if (arr[i][j] == 'B')
                    flag = true;

                if (i == r || j == c)
                    if (arr[i][j] == 'B')
                        check = true;
            }
        }

        if (arr[r][c] == 'B')
            cout << 0 << endl;
        else if (check)
            cout << 1 << endl;
        else if (flag)
            cout << 2 << endl;
        else
            cout << -1 << endl;    
    }

    return 0;
}
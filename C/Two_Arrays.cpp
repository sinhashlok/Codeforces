#include <bits/stdc++.h>
using namespace std;

void inputArray(int a[], int n) {
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int a[n], b[n];
        inputArray(a, n);
        inputArray(b, n);

        sort(a, a + n);
        sort(b, b + n);

        int count = 0, k, same = 0;
        for (k = 0; k < n; k++)
        {
            if (a[k] == b[k] - 1)
                count ++;
            else if (a[k] != b[k])
                break;
            else
                same++;
        }
        
        if (same == n)
            cout << "YES" << endl;
        else if (count == 0 || k != n)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}
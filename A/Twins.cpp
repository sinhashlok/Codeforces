#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    int i = 0;
    for (; i < n; i++)
        cin >> a[i];
    i--;

    sort(a.begin(), a.end());   // sort elements
    int sumT = accumulate(a.begin(), a.end(), 0);   // total sum of money
    int sum1 = 0, count = 0;

    for (; i >= 0; i--)
    {
        sum1 += a[i];
        count ++;
        if (sum1 > sumT - sum1)
        {
            cout << count << endl;
            break;
        }
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int c1 = 0, c2 = 0, c3 = 0, count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            c1++;
        else if (a[i] == 2)
            c2++;
        else if (a[i] == 3)
            c3++;
        else
            count++;    // add 4 one's
    }

    if (c3 < c1) {  // 1 more than 3
        count += c3;
        c1 = c1 - c3;
    }
    else if (c1 <= c3)  // 3 more than 1
    {
        count += c1;
        c3 = c3 - c1;
        c1 = 0;
        count += c3;
    }

    count += c2 / 2;    // add 2's
    c2 = c2 % 2;

    int left = c1 + (c2 * 2);   // still if left
    if (left <= 4 && left > 0) {    // if 1 and 2 add up less than 4
        count += 1;
    }
    else if (left % 4 != 0) {   // if more than 4
        count += (left / 4) + 1;
    }
    else {
        count += left / 4; // if exact 4
    }

    cout << count << endl;
    return 0;
}
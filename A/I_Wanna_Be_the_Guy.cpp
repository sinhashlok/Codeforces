#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, q, x;
    cin >> n >> p;
    int count = 0;

    vector<int> s;

    for (int i = 0; i < p; i ++)
    {
        cin >> x;
        s.push_back(x);
    }

    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> x;
        s.push_back(x);
    }

    sort(s.begin(), s.end());

    for (int i = 0; i < p+q; i++)
    {
        if (s[i] != s[i+1])
            count ++;
    }

    if (count == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";

    return 0;
}
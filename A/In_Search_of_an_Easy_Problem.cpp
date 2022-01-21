#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a = 0;
    bool f = false;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 1)
            f = true;
    }

    if (f)
        cout << "HARD" << endl;
    else
        cout << "EASY" << endl;
}
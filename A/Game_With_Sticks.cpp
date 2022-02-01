#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    n = n < m ? n : m;

    if (n%2 == 0)
        cout << "Malvika" << endl;
    else
        cout << "Akshat" << endl;
    
    return 0;
}
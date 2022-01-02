#include <bits/stdc++.h>
using namespace std;

void damagedDragons(vector<bool> &dra, int x) {
    for (int i = x-1; i < dra.size(); i += x)
        dra[i] = false;
}

int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    vector<bool> dragons(d, true);

    damagedDragons(dragons, k);
    damagedDragons(dragons, l);
    damagedDragons(dragons, m);
    damagedDragons(dragons, n);

    int count = 0;
    for (int i = 0; i < d; i++)
    {
        if (dragons[i] == false)
            count ++;
    }

    cout << count;

    return 0;
}
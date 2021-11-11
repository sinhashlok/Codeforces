#include <iostream>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;


    int tot = w * (w + 1) * k / 2;

    if (tot > n)
        cout << tot - n;
    else
        cout << 0;

    return 0;
}
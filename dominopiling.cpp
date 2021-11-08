#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double n, m;
    cin >> n >> m;

    cout << (int)floor((n * m) / 2) << endl;

    return 0;
}
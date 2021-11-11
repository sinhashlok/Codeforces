#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned long long n, m, a, count{ 0 };
    cin >> n >> m >> a;

    count += ceil((double)n / a);
    count *= ceil((double)m / a);

    cout << count << endl;

    return 0;
}
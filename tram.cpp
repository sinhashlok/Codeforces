#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b, cap = 0, max = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        cap += (b - a);
        if (max < cap)
            max = cap;
    }

    cout << max;

    return 0;
}
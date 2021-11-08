#include <iostream>
using namespace std;

int main()
{
    int l, b, count = 0;
    cin >> l >> b;

    while (l <= b)
    {
        l *= 3;
        b *= 2;
        count++;
    }

    cout << count << endl;

    return 0;
}
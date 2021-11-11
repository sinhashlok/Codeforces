#include <iostream>
using namespace std;

int main()
{
    int i, count = 0;
    cin >> i;

    while (i != 0)
    {
        if (i / 5)
        {
            count += i / 5;
            i %= 5;
        }
        else
        {
            int t = i % 5;
            count ++;
            i %= t;
        }
    }

    cout << count;

    return 0;
}
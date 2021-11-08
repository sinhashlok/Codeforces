#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[5][5] = { 0 }, m, n;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j])
            {
                m = i;
                n = j;
            }
        }
    }

    cout << abs(2 - m) + abs(2 - n);

    return 0;
}
#include <iostream>
using namespace std;

int main ()
{
    int n, x =0, y =0, z =0;
    cin >> n;

    int arr [n][3];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> arr[i][j];
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0)
                x += arr[j][i];
            else if (i == 1)
                y += arr[j][i];
            else
                z += arr[j][i];
        }
    }

    if (x == 0 && y == 0 && z == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;   
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int arr[n], count{ 0 };
    string s;

    for (size_t i = 0; i < n; i++)
    {
        cin >> s;

        if (s[1] == '+')
        {
            arr[i] = 1;
            count++;
        }
        else
            arr[i] = -1;
    }

    cout << (2 * count) - n << endl;

    return 0;
}
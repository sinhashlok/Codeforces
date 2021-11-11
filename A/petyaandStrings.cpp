#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1;
    string s2;

    cin >> s1 >> s2;

    // converts all letters of the string to lower case
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    if (s1 < s2)
        cout << -1 << endl;
    else if (s1 > s2)
        cout << 1 << endl;
    else if (s1 == s2)
        cout << 0 << endl;

    return 0;
}
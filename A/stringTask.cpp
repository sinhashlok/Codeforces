#include <iostream>
#include <string>
#include <vector>

#include <cmath>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<char> s2;

    for (size_t i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
            s[i] = tolower(s[i]);

        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
            continue;
        else
        {
            s2.push_back('.');
            s2.push_back(s[i]);
        }
    }

    for (auto c : s2)
        cout << c;
    cout << endl;
}
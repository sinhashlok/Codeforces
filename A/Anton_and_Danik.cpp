#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    n = 0;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == 'A')
            n++;
    
    if (n > s.length()/2)
        cout << "Anton" << endl;
    else if((n == s.length()/2) && (s.length()%2 == 0))
        cout << "Friendship" << endl;
    else
        cout << "Danik" << endl;
    
    return 0;
}
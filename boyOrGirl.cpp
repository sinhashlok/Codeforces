#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;

    while (s[0] != '\0') {
        count++;
        char s1 = s[0];

        int index = s.find(s1);
        s.erase(index, 1);


        while (s.find(s1))
        {
            index = s.find(s1);
            if (index == -1)
                break;
            s.erase(index, 1);
        }
    }

    if (count & 1)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";

    return 0;
}
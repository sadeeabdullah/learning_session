#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    for (int i = 0, j = s.length() - 1; i < j; i++, j--)
    {
        if(s[i] != s[j])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
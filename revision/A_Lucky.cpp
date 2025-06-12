#include <bits/stdc++.h>
using namespace std;

// summation function
int summation(string s, int first, int last)
{
    int sum = 0;
    for (int i = first - 1; i < last; i++)
    {
        sum += s[i] - '0' ;
    }
    return sum;
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        (summation(s, 1, 3) == summation(s, 4, 6)) ? cout << "YES" << endl
                                                   : cout << "NO" << endl;
    }
    return 0;
}
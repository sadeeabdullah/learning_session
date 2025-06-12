#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b,c;
    char s, q;
    cin >> a >> s >> b >> q >> c;

    if(s == '+')
    {
        (a + b == c)? cout << "Yes"
                    : cout << 1LL * (a + b);
    }
    if(s == '-')
    {
        (a - b == c)? cout << "Yes"
                    : cout << a - b;
    }
    if(s == '*')
    {
        (a * b == c)? cout << "Yes"
                    : cout << 1LL * (a * b);
    }
    return 0;
}
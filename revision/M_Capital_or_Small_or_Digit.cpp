#include <bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    cin >> x;

    (x >= '0' && x <= '9')   ? cout << "IS DIGIT" << endl
    : (x >= 'a' && x <= 'z') ? cout << "ALPHA\n IS SMALL"
                             : cout << "ALPHA\n IS CAPITAL";
    return 0;
}
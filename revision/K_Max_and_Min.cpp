#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int maximum = max(max(a, b), c);
    int minimum = min(min(a, b), c);

    cout << minimum << " " << maximum;

    return 0;
}
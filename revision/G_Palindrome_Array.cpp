#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        if(a[i] != a[j])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int a[n];
        int smallest_pair = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                long long pair = a[i] + a[j] + j - i;
                if (pair < smallest_pair)
                {
                    smallest_pair = pair;
                }
            }
        }

        cout << smallest_pair;
    }
    return 0;
}
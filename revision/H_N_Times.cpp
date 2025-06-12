#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char ch;
        cin >> n >> ch;

        string s(n,ch);
        
        for(auto it = s.begin(); it < s.end(); it++)
        {
            cout << *it << " ";
        }

        cout << endl;
    }

    return 0;
}
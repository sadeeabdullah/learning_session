#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string x;
    getline(cin,s);
    cin >> x;
    int x_count = 0;
    while(s.find(x) != string:: npos)
    {
        x_count++;
        s.replace(s.find(x),x.length()," ");
    }
    cout << x_count;
    return 0;
}
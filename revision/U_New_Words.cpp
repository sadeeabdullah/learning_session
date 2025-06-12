#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int e_count = 0;
    int g_count = 0;
    int y_count = 0;
    int p_count = 0;
    int t_count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'e' || s[i] == 'E')
        {
            e_count++;
        }
        if(s[i] == 'g' || s[i] == 'G')
        {
            g_count++;
        }
        if(s[i] == 'y' || s[i] == 'Y')
        {
            y_count++;
        }
        if(s[i] == 'p' || s[i] == 'P')
        {
            p_count++;
        }
        if(s[i] == 't' || s[i] == 'T')
        {
            t_count++;
        }
    }

    int word_count = min(t_count,min(p_count,(min(min(e_count,y_count),g_count))));

    cout << word_count;
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        //taking frequency array to count the character repeating
        int freq[26] = {0};

        for (int i = 0; i < s.length(); i++)
        {
            freq[s[i] - 'A']++;
        }

        int total_ballons = 0;

        for (int i = 0; i < 26; i++)
        {
            if(freq[i] > 0)
            {
                total_ballons += freq[i] + 1;
            }
        }

        cout << total_ballons << endl;
        
        
    }
    return 0;
}
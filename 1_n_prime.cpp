#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    if (n >= 2) cout << 2 << endl;

    for (int i = 3; i <= n; i+= 2)
    {
        int isPrime = 1;

        for(int j = 3; j * j <= i; j+= 2) // because even number is never prime except 2
        {
            if(i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if(isPrime)
        {
            cout << i << endl;
        }
    }
    
    return 0;
}
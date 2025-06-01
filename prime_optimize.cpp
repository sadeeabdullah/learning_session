#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;

    int isPrime = 1;
    for( int i = 2; i <= sqrt(a); i++)
    {
        if(a % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    (isPrime) ?
    cout << "PRime"
    :
    cout << "Not prime";
    return 0;
}
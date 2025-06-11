#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int* max_ptr = max_element(arr, arr + n);
    int max_idx = max_ptr - arr;
    cout << arr[max_idx];


    
    return 0;
}
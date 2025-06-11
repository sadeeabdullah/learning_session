#include <bits/stdc++.h>
using namespace std;

//creating get_array function
int* get_array(int n)
{
    int* arr = new int[n]; // dynamic memory allocation
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    return arr;
}
int main()
{
    int n;
    cin >> n;
    int* a = get_array(n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}
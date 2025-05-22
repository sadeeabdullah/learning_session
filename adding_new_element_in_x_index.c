

#include <stdio.h>
#include<math.h>
int main(){
    int n, m,input_element;

    scanf("%d", &n);
    int a[n + 1];
    for (int i = 0; i <n; i++)
    {
        scanf("%d", &a[i]);
        
    }
    scanf("%d %d", &m, &input_element);


    for (int i = n - 1; i >=m; i--)
    {
        a[n - 1] = a[n];
    }
    a[m] = input_element;
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    
    
    
}


#include <stdio.h>
#include<math.h>
int main(){
    int n ;
    int  sum = 0;
    int j;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d", &a[i]);
        
    }
    for (int i = n - 1,  j = 0; i >= 0, j < n; i--, j++)
    {
        if(j < i){
            int wakwak = a[i];
            a[i] = a[j];
            a[j] = wakwak;
        }
    } 
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
}
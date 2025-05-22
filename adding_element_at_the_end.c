

#include <stdio.h>
#include<math.h>
int main(){
    int n ,input_element ;

    scanf("%d", &n);
    int a[n + 1];
    for (int i = 0; i <n; i++)
    {
        scanf("%d", &a[i]);
        
    }
    scanf("%d",&input_element);
    a[n] = input_element;
    for (int i = 0; i <=n; i++)
    {
        printf("%d ", a[i]);
    }
    
    
}
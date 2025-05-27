#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    int prime_check = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime_check = 0;
            break;
        }
        
    }
    if (prime_check == 1)
    {
        printf("the number is prime %d",n);
    }else{
        printf("the number is not prime %d",n);
    }
    
    
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = n; i >= 1; i--){
        printf(" this is before continue%d\n", i);
        if ( i == 3)
        {
            continue;
        }
        printf("this is after continue%d\n", i);
        
    }
    return 0;
}


#include <stdio.h>
#include<string.h>
int main(){
    char a[100];
    char b[100];
    fgets(a,100,stdin);
    fgets(b,100,stdin);
    
    // int size_a= strlen(a);
    // int size_b= strlen(b);

    // if (size_a > size_b)
    // {
    //     printf("a is greater than b\n");
    // }else{
    //     printf("b is greater than a");
    // }

    int greater_lower = strcmp(a,b);
    printf("%d",greater_lower);
    

    // printf("%s",b);
    
    return 0;
}
#include <stdio.h>
#include<string.h>
int main(){
    char a[100];
    char b[100];
    fgets(a,100,stdin);
    
    for (int i = 0; a[i] != '\0'; i++) 
    {
        // printf("%c", a[i]);
        b[i] = a[i];
    }
    // for (int i = 0; b[i] != '\0'; i++)
    // {
    //     printf("%c", b[i]);
    //     // b[i] = a[i];
    // }

    printf("%s",b);
    
    return 0;
}
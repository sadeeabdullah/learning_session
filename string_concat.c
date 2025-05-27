#include <stdio.h>
#include<string.h>
int main(){
    char a[100];
    char b[1000];
    char c[5000];
    fgets(a,100,stdin);
    // fgets(b,100,stdin);
    

    int length_s = strlen(a);
    // printf("%d",length_s );
    
    for (int i = 0; a[i] != '\0'; i++) 
    {
        c[i] = a[i];
    }

    for (int i = length_s, j = 0; b[j] != '\0'; i++, j++)
    {
        c[i] = b[j];
    }

    printf("%s", c);
    
    
    return 0;
}
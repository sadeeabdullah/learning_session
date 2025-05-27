#include <stdio.h>
#include<string.h>
int main(){
    char a[100];
    char b[1000];
    fgets(a,100,stdin);

    int count = strlen(a);

    printf("%d", count);
    
    return 0;
}
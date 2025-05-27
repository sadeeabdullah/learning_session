#include <stdio.h>
#include<string.h>
int main(){
    char ch = 'a';
    int x = 1;
    int a[10];
    char str[101];
    
    // for loop for input
    // for (int  i = 0; i < 100; i++)
    // {
    //     /* code */
    // }

    // scanf("%s", &str);
    // gets(str);
    fgets(str,101,stdin);
    
    //for loop to print str
    for (int  i = 0; str[i] != '\0' ; i++)
    {
        if (i == 3)
        {
            str[i] = 't';
        }
        
        
    }

    str[7] = 'f';
    

    printf("%s", str);
    
    

    return 0;
}
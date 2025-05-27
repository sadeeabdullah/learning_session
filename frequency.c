// hello sir i am going to kill you

#include <stdio.h>
#include<string.h>
int main(){
    char s[102];

    fgets(s, 100, stdin);

    int freq[26] = {0};

    for (int i = 0;s[i] != '\0'; i++)
    {
        
            freq[s[i] - 'a']++;
        
        
        
    }

    // printf("%c", 'h' - 32);
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c: %d\n",i + 'a',freq[i]);
        }
        
    }
    
    
    
    
    return 0;
}
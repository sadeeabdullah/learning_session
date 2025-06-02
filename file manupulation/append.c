#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char c;
    fp = fopen("textfile1.txt","a");
    while ((c = getchar()) != '*')
    {
        fputc(c, fp);
    }
    fclose(fp);
    fp = fopen("textfile1.txt", "r");
    while ((c = fgetc(fp)) != EOF)
    {
        printf("%c",c);
    }
    fclose(fp);
    return 0;
}
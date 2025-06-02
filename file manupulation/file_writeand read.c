#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fp;
    char c;

    //taking input character on the text file
    fp = fopen("textfile1.txt","w"); // fopen function will create a new file and "w" instruction will start wrtiting mode
    while ((c = getchar()) != '*') // the while loop willtake input untill we get the * in it
    {
        fputc(c,fp); // this will put the character into the file
    }
    fclose(fp); // this will close the file


    //reading the text
    fp = fopen("textfile1.txt", "r"); // this will start the reading mode for the file
    while ((c = fgetc(fp)) != EOF) // THE fgetc will get character fromthe fp file untill it get the end of the file
    {
        printf("%c", c);
    }
    
    fclose(fp);
    
    return 0;
}
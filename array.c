#include<stdio.h>
#define PI 3.1416
int main(){
    // int a;
    // scanf("%d",&a);
    // int arr[a];
    // int sum = 0;

    // //taking input
    // for(int i = 0;i < a; i++){
    //     scanf("%d", &arr[i]);
    // }
    // //showing output
    // for(int i = 0;i < a; i++){
    //     if (arr[i] % 2 != 0)
    //     {
    //         /* code */
    //         sum = sum + arr[i];
    //     }
        
       
        
    // }
    // printf("%d", sum);
    
    int  arr[10] = {3};
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", &arr);
    }
    
    return 0;
}
// check the number odd or even based on bitwise operator
#include<stdio.h>
int main(){
    int a;
    printf("Enter the number:\n");
    scanf("%d",&a);
    if(a&1==1)
    printf("odd number");
    else
    printf("even number");



return 0;
}

// add all digits of a given integer or number
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter number\n");
    scanf("%d",&n);
    int temp,remainder;
    temp = n;
    while(temp!=0){
        remainder = temp%10;
        sum = sum+remainder;
        temp = temp/10;
    }
    printf("sum=%d",sum);
return 0;
}

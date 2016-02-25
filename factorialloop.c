// get factorial using loop
#include<stdio.h>
int main(){
    int n,i,fact=1;
    printf("Enter number:\n");
    scanf("%d",&n);
    for(i=1; i<=n;i++){
        fact = fact*i;
    }
    printf("result=
    %d",fact);

return 0;
}

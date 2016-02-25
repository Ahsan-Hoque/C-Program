// find factorial using function
#include<stdio.h>

int factorial_find(int);

int main(){
int n;
printf("Enter Number:\n");
scanf("%d",&n);
int result=0;
result= factorial_find(n);
printf("result = %d",result);

return 0;
}
int factorial_find(int x){
int fact,i;
fact=1;
    for(i=1;i<=x;i++){
    fact = fact*i;
    }
    return fact;
}

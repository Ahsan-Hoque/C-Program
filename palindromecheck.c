// check the number palindrome or not
#include<stdio.h>
int main(){
    int n, result=0, p;
    printf("Enter the number:\n");\
    scanf("%d",&n);
    p = n;
    while(n!=0){
    result = result *10;
    result = result + n%10;
    n = n/10;
    }
    if(p == result)
    printf("Palindrome number= %d\n", result);
    else
    printf("%d Not a palindrome Number\n",p);
return 0;
}

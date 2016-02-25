// add digits of a number using recursion
#include<stdio.h>
int add_digits(int);

int main(){
    int n;
    printf("Enter number:\n");
    scanf("%d",&n);
    int result;
    result = add_digits(n);
    printf("result = %d\n",result);
return 0;
}

int add_digits(int a){
int sum=0;
    if(a==0){
    return 0;
    }
 sum = a%10 + add_digits(a/10);
 return sum;

}

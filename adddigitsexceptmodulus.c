// add the digit of a number without modulus
#include<stdio.h>
int main(){
    char n[1000];
    int i,sum,temp;
    i=0;
    sum=0;
    printf("Enter number:\n");
    scanf("%s",&n);
    while(n[i]!='\0'){
        temp= n[i]-'0';
        sum = sum+temp;
        i++;
    }
    printf("%d",sum);




return 0;
}


// check the year is a lepyear or not
#include<stdio.h>
int main(){
    int year;
    printf("Enter year to check ist leap year or not?\n ");
    scanf("%d",&year);
    if((year%400)==0){
    printf("Yes");}
    else if((year%100)==0){
    printf("No");
    }
    else if((year%4)==0){
    printf("Yes");
    }
    else{
    printf("No");
    }

return 0;
}

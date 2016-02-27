// swap two number without using third variable
#include<stdio.h>
int main(){
    int i,j;
    printf("Enter two number:\n");
    scanf("%d%d",&i,&j);
    i = i + j;
    j = i - j;
    i = i - j;
    printf("i = %d \n j=%d", i,j);

return 0;
}

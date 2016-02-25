// addition subtraction multiplication division
#include<stdio.h>
int main(){
    int first, second, add, subtract, mult;
    float div;
    printf("Enter two number:\n");
    scanf("%d%d",&first,&second);
    add = first + second;
    subtract = first-second;
    mult = first*second;
    div = first/second;

    printf("Sum=:%d\n", add);
    printf("Subtract:%d\n", subtract);
    printf("Multiplication:%d\n",mult);
    printf("Division:%.2f\n",div);

return 0;
}

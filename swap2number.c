// swap two number based on user input
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter two number:\n");
    scanf("%d%d",&a,&b);
    c = a;
    a= b;
    b= c;
    printf("first= %d and second= %d", a,b);

return 0;
}

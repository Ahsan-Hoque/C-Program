// find factorial using recursion
#include<stdio.h>
long find_factorial(int);

int main(){
    int n;
    printf("Enter number:\n");
    scanf("%d",&n);
    int result;
    result = find_factorial(n);
    printf("The result = %d",result);
return 0;
}

long find_factorial(int x){
 if(x==0)
 return 1;
 else
 return(x*find_factorial(x-1));

}

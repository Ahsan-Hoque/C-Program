// reverse number using recursion
#include<stdio.h>

long reverse_rec(long);

int main(){
    int n, result=0;
    printf("Enter number\n");
    scanf("%d",&n);
    result = reverse_rec(n);
    printf("result = %d",result);
return 0;
}

long reverse_rec(long n){
    static long r = 0;
    if(n==0)
    return 0;

    r = r *10;
    r = r + n%10;
    reverse_rec(n/10);
    return r;

}

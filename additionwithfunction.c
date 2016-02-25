//addition of two number with function
#include<stdio.h>
long addition(long, long);

   int main(){
        long first, second,sum;
        printf("Enter two number:\n");
        scanf("%ld%ld",&first, &second);
        sum = addition(first,second);
        printf("%ld",sum);
        return 0;
    }

    long addition(long a, long b){
        long result;
        result = a + b;
    return result;
    }

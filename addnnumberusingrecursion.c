//add nth number using recursion function
#include<stdio.h>
long sum_calculate(int [], int);
int main(){
    int n,i,a[1000];
    long sum;
    printf("Enter nth number:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
    sum = sum_calculate(a,n);
    printf("Sum = %ld\n",sum);


return 0;
}

long sum_calculate(int a[], int n) {
   static long sum = 0;

   if (n == 0)
      return sum;

   sum = sum + a[n-1];

   return sum_calculate(a, --n);
}

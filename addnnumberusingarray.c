//add nth number using array
#include<stdio.h>
int main(){
    int n, i, a[1000], sum=0;
    printf("Enter the limit:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
        sum = sum + a[i];

    }
    printf("Sum=%d\n", sum);

return 0;
}

// take input from user to take input numbers limit and take unput and then add all number
#include<stdio.h>
int main(){
    int n, i, sum=0, val;
    printf("Enter limit:\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%d",&val);
        sum=sum+val;
    }
    printf("Sum=%d\n",sum);

return 0;
}

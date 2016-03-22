//print pyramids of stars
#include<stdio.h>
int main(){
int n,i,j,k,tmp;

printf("Enter row number:");
scanf("%d",&n);
tmp = n;
for(i=1; i<=n;i++){
    for(k=1;k<tmp;k++){
        printf(" ");

    }
     tmp --;
    for(j=1;j<=i*2-1;j++){
        printf("*");
    }
    printf("\n");
}
return 0;
}

//C program to print diamond pattern
#include<stdio.h>
int main(){
int row,i,j,k,tmp,z;
    printf("Enter row number:\n");
    scanf("%d",&row);
        tmp = row;
        for(i=1;i<=row;i++){
            for(j=1;j<=tmp-1;j++){
                printf(" ");
            }
            tmp--;
            for(k=1;k<=2*i-1;k++){
            printf("*");
            }

            printf("\n");
        }
        tmp = 1;
       for(i=1;i<=row-1;i++){
            for(j=1;j<=tmp;j++){
                printf(" ");
            }
            tmp++;
            for(k=1;k<=2*(row-i)-1;k++){
            printf("*");
            }

            printf("\n");
        }

return 0;
}

// print pattern program for stars and alphabet
#include<stdio.h>
int main(){
int row, i,j,temp,k;
    printf("enter row number:");
    scanf("%d",&row);
        temp = row;
        for(i=1;i<=row;i++){
            for(j=1;j<temp;j++){
                printf(" ");
            }
            temp--;
            for(k=1;k<=2*i-1;k++){
                if(k%2==0){
                    printf("A");
                    }else
                    printf("*");



            }
            printf("\n");
        }


return 0;
}

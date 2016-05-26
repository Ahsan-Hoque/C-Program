#include<stdio.h>
int main(){
char ch;
printf("Are You Sure About That ? Y || N\n");
scanf("%c", &ch);
if(ch == 'Y' || ch == 'y'){
    system("shutdown -P now");
}
return 0;
}

//check vowel lowercase and upercase
#include<stdio.h>
int main(){
    char ch;
    printf("Enter character for checking:\n");
    scanf("%c",&ch);
    if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' ||ch=='u' || ch=='U')
    printf("%c is a Vowel",ch);
    else
    printf("%c is not a vowel",ch);
return 0;
}


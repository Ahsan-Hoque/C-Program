// check vowel or not using function
#include<stdio.h>

int check_vowel(char);

int main(){
char ch;
int x;
printf("Enter the character to check vowel:\n");
scanf("%c",&ch);
x= check_vowel(ch);
printf("%d\n",x);
if(x)
printf("%c is vowel",ch);
else
printf("%c is not a vowel",ch);
return 0;
}

int check_vowel(char a){
if(a>='A' && a<='z'){
    a = a + 'a'-'A';
        if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' ){
         return 1;
        }

  return 0;
}



}


//add two number repeatedly by asking to user
#include<stdio.h>
int main(){
	int a,b;
	char ch;
	while(1){
		 printf("Enter two number:\n");
        	 scanf("%d%d",&a,&b);
        	 a = a+b;
        	 printf("Sum=%d\n",a);
        	 printf("Do you want again to add?(y/n)\n");
        	 scanf("%s",&ch);
        	 if(ch=='y' || ch=='Y')
                continue;
              else
                break;

        	 }

return 0;
}

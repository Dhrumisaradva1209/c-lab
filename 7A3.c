#include<stdio.h>
int main()
{
	int a,b,c;
	char operator;
	printf("enter a sign :");
	scanf("%c",&operator);
	printf(" enter a character (+,-,*,/) : ");
	printf("enter a number : ");
	scanf("%d",&a);
	printf("enter a number :");
	scanf("%d",&b);
		if(operator=='+'){
		c=a+b;
	printf("addition of number :%d",c);
		}
		else if(operator=='-'){
			c=a-b;
			printf("subtraction of number :%d",c);
		}
		else if (operator=='*'){
			c=a*b;
			printf("multiplication of numbere :%d",c);
		}
		else if(operator=='/'){
			if(b==0){
			printf("division can not possible");	
			}else{
			c=a/b;
			printf("division of number: %d ",c);
		}
		}
		else{
		printf("invalid operator");
		}
}

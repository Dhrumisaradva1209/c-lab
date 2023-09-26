#include<stdio.h>
int main(){
	int a,b;
	printf("enter a=");
	scanf("%d", &a);
	printf("enter b=");
	scanf("%d", &b);
	b = a+b;
	a = b-a;
	b = b-a;
	printf("a=%d,b=%d",a,b);
	return 0;
}

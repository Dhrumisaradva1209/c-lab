#include<stdio.h>
int main(){
	float a,b,c,d;
	printf("enter an integer value : ");
	scanf("%f%f%f", &a,&b,&c);
	d = (a+b+c)/3;
	printf("average is : %f",d);
	return 0;
}

#include<stdio.h>
void main(){
	int n;
	printf("enter an integer value : ");
	scanf("%d", &n);
	int multiply = n<<1;
	int divide = n>>1;
	printf("multiply = %d , divide = %d", multiply, divide);
}

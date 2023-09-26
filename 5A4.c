#include<stdio.h>
void main(){
	int n;
	printf("enter number : ");
	scanf("%d", &n);
	if ((n & 1)== 0)
	printf("even number");
	else
	printf("odd number");
}

#include<stdio.h>
void main(){
	float C,F;
	printf("enter F : ");
	scanf("%f", &F);
	C = ((F-32)*5)/9;
	printf("C = %f",C);
}

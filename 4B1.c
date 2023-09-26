#include<stdio.h>
//triangle area
void main(){
	float height,base,area;
	printf("enter height : ");
	scanf("%f", &height);
	printf("enter base : ");
	scanf("%f", &base);
	area = 0.5*height*base;
	printf("area = %f",area);
}

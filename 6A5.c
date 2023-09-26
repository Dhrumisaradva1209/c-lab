#include<stdio.h>
void main()
{
	double math,physics,es,ic,eg,pr;
	printf("enter marks ");
	scanf("%lf%lf%lf%lf%lf",&math,&physics,&es,&ic,&eg);
	pr=(math+physics+es+ic+eg)/5;
	if(pr<35)
	{printf("fail");
	}
	else if(pr>=36&&pr<=45)
	{
		printf("pass class");
	}
	else if(pr>=46&&pr<=60){
		printf("second class");
	}	
	else if(pr>=61&&pr<=70){
		printf("first class");
	}
	else if(pr>=70){
		printf("distinction");
	}
}

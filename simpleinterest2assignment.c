//programme to calculate simple  interest
#include<stdio.h>
int main(){
	int simpleinterest;
	float a;
	float b;
	int c;
	printf("enter the principal amount:");
	scanf("%f",&a);
	printf("enter the rate (in%):");
	scanf("%f",&b);
	printf("enter the time (inyears):");
	scanf("%d",&c);
	simpleinterest=(a*b*c)/100;
	printf("the simple interest is:%.2d\n",simpleinterest);
return 0;
}
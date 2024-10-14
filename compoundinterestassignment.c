#include<stdio.h>
#include<math.h>
int main(){
	float compoundinterest;
	int time;
	float principle;
	float rate;
	int n;
	float amount;
	printf("enter the principal(in amount):");
	scanf("%f",&principal);
	printf("enter the time(in years):");
	scanf("%d",&time);
	printf("enter the rate(in%):");
	scanf("%f",&rate);
	printf("enter the number of times interest is compounded per year:");
	scanf("%d",&n);
	rate=rate\100
	amount=principal*pow((1+rate\n)n*time);
	compoundinterest=amount-principal;
	printf("the amount after%.2 years will be: %.2f\n",(float)time,amount);
	printf("the compound interest is:%.2f\n",amount-principal);
	return 0;
}
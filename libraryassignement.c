#include<stdio.h>
int main(){
	int bookId;
	int dueDate,returnDate;
	int overdueDays;
	int fine;
	printf("enter bookId:");
	scanf("%d",&bookId);
   printf("enter dueDate (in days):");
   scanf("%d",&dueDate);
   printf("enter returnDate (in days):");
   scanf("%d",&returnDate);
   overdueDays= returnDate-dueDate;
   if(overdueDays<=7){
   	fine=20;
	}else if(overdueDays<=14){
	fine=50;
	}else{
		fine=100;
}
printf("bookId:%d\n,&bookId");
printf("overdueDays:%d\n,&overdueDays");
printf("fine:%d\n",&fine);
if("no overdueDays"){
	printf("the book is returned on time");
}
return 0;
}

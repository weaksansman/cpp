#include <stdio.h>
float price(int hour);
void exchange(int paid,int hour);
void result(int score);
int cond = 6;

main(){
	int hour,paid,score;
	float total;
	printf("Enter Hour : "); scanf("%d",&hour);
	printf("Total : %.2f\n",price(hour));
	printf("Paid : "); scanf("%d",&paid);
	exchange(paid,hour);
	printf("Enter test result : "); scanf("%d",&score);
	result(score);
	
}
 
float price(int hour){
	float total = hour*150;
	return total;
}

void exchange(int paid,int hour){
	float change;
	change = paid - price(hour);
	printf("Change : %.2f\n\n",change);
}

void result(int score){
	if (score >= cond){
		printf("Congrat  You passed the test!");
	}
	else {
		printf("You failed the test good luck next time...");
	}
}

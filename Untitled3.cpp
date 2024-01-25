#include <stdio.h>
void total(int t);  	
int Price = 450;
main(){
	int t;
	printf("Enter Hour:"); scanf("%d",&t); 
	total(t);
}

void total(int t){
	float total;
	total = Price*t;
	printf("total IS %.3f \n", total);
}

#include <stdio.h>
float total(int t);  
void d(int t);	
const int Pr = 350;

main(){
	int t,m;
	printf("Price 350 per Hour!\n");
	printf("Enter Hour:"); 
	scanf("%d",&t); 
	total(t);
	printf("Enter Pay how much:"); 
	scanf("%d",&m);
    d(m);
}

float total(int t){
	float total;
	float Change;
	float pay;
	total = Pr*t;
	printf("Total IS %.3f \n", total);
}
void d(int m){
	float pay;
	float Change;
	int Total = total(m);
	pay = m;
	printf("Pay: %.2f\n",pay);
	Change = pay-Pr*total(m);
	printf("Change %.5f \n",d);
}





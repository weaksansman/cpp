#include <stdio.h>
float bmi (int kg,int cm);
float cm_m(int cm);

main(){
	int kg,cm;
	printf("Enter Kg:"); scanf("%d", &kg);
	printf("Enter Cm:"); scanf("%d", &cm);
	bmi(kg,cm);
}

float bmi(int kg,int cm){
 float bmi= kg/(cm_m(cm)*cm_m(cm));
 printf("BMI IS %.3f\n", bmi);
}

float cm_m(int cm){
		   float m = cm*0.01;                                                                                  
	   return m;
}

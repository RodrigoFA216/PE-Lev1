//promedio de calificaciones
#include<stdio.h>
main(){
	float CAL1, CAL2, CAL3, CAL4, CAL5, CAL6, PROM;
	printf("inserte las calificaciones ");
	scanf("%f %f %f %f %f %f", &CAL1, &CAL2, &CAL3, &CAL4, &CAL5, &CAL6);
	PROM=(CAL1+CAL2+CAL3+CAL4+CAL5+CAL6)/6;
 	printf("tu promedio semestral es %.2f", PROM);
}

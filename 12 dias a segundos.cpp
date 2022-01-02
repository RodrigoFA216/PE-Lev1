/*construye un diagrama y un programa que calcule e imprima el numero de segundos que hay en una determinado numero de d�as*/
#include<stdio.h>
main(){
	float D, res;
	printf("cuantos dias quieres pasar a segundos?", D);
		scanf("%f", &D);
	res=(D*86400);
	printf("Los segundos que tiene tu numero de dias es %f", res);
}

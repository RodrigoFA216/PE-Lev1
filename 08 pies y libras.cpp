//construye un diagrama de flujo en C que al recibir como datos la longitud y el peso de un objeto expresados en pies y libras, Immprima los datos de este objeto pero expresados en metros y kilos respectivamente//
// construye un diagrama de flujo que al recibir como datos r y altura de un cilindro calcule e imprima el area y su volumen//

#include<stdio.h>
main (){
 	float A, B, Lg, Wh;
 	printf("\n Introduzca la longitud \n", A);
 		scanf("%f", &A);
 	printf("\n introduzca el peso \n", B);
 		scanf("%f", &B);
	Lg=(A*0.3048); 
 	Wh=(B*0.453592);
 	printf("\n La longitud en metros es %.2f", Lg);
	printf("\n El peso del cuerpo en kilos es %.2f", Wh);
}

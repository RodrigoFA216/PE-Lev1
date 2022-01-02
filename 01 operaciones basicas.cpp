/*Realice un programa que tras introducir dos datos imprima: 
la suma 
la multiplicación
la resta
la división
opcional: si la división es exacta o no
*/

#include<stdio.h>
#include<math.h>
main(){
	float A, B;
	int C;
	printf("ingresa el valor 1 y el valor 2");
	scanf("%f %f", &A, &B);
		printf("El resultado de la suma es %f+%f=%f", A,B,A+B);
			printf("El resultado de la multiplicacion es %f*%f=%f", A,B,A*B);
		printf("El resultado de la resta es %f-%f=%f", A,B,A-B);
			printf("El resultado de la division es %f/%f=5f", A,B,A/B);
	C=A%B;
		printf("La division tiene residuo 0=No 1=Si %fmod%f=%f", A,B,C);
}

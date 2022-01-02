//FORMULA GENERAL//
#include<stdio.h>
#include<math.h>
main(){
	float A, B, B2, C, Dentro, raiz, raizP, raizN, resultado1, resultado2;
	printf("Inserte el valor de A \n");
		scanf("%f", &A);
	printf("Inserte el valor de B \n");
		scanf("%f", &B);
	printf("Inserte el valor de C \n");
		scanf("%f", &C);
	B2=B*B;
	Dentro=B2-(4*A*C);
	raiz=sqrt(Dentro);
	raizP=raiz;
	raizN=-(raiz);
	resultado1=(-B+raizP)/2*A;
	resultado2=(-B+raizN)/2*A;
	printf("el valor de la primer raiz es %f \n", resultado1);
	printf("el valor de la segunda raiz es %f \n", resultado2);
}

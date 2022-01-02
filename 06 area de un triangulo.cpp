//
#include<stdio.h>
#include<math.h>
main(){
	float X1, X2, X3, Y1, Y2, Y3;
	float A, B, C, ABC, D, E, F, DEF, AREA, PERIMETRO;
	printf("introduzca el valor de X1\n");
		scanf("%f", &X1);
	printf("introduzca el valor de X2 \n");
		scanf("%f", &X2);
	printf("introduzca el valor de X3 \n");
		scanf("%f", &X3);
	printf("introduzca el valor de Y1 \n");
		scanf("%f", &Y1);
	printf("introduzca el valor de Y2 \n");
		scanf("%f", &Y2);
	printf("introduzca el valor de Y3 \n");
		scanf("%f", &Y3);
	A=X1*Y2;
	B=X2*Y3;
	C=X3*Y1;
	ABC=A+B+C;
	D=X1*Y3;
	E=X3*Y2;
	F=X2*Y1;
	DEF=D+E+F;
	AREA=(ABC-DEF)/2;
 	printf("el area del triangulo propuesto es %f", AREA);
}

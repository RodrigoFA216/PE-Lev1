#include<stdio.h>
#include<math.h>
main(){
 	float X1, X2, X3, Y1, Y2, Y3, PERIMETRO;
	float Suma1Y, Suma1X, Cuad1Y, Cuad1X, Suma1XY, raiz1;
    float Suma2Y, Suma2X, Cuad2Y, Cuad2X, Suma2XY, raiz2;
    float Suma3Y, Suma3X, Cuad3Y, Cuad3X, Suma3XY, raiz3;
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
	Suma1Y=Y2-Y1;
	Suma1X=X2-X1;
	Cuad1Y=Suma1Y*Suma1Y;
	Cuad1X=Suma1X*Suma1X;
	Suma1XY=Cuad1Y+Cuad1X;
	raiz1=sqrt(Suma1XY);	
		Suma2Y=Y3-Y2;
		Suma2X=X3-X2;
		Cuad2Y=Suma2Y*Suma2Y;
		Cuad2X=Suma2X*Suma2X;
		Suma2XY=Cuad2Y+Cuad2X;
		raiz2=sqrt(Suma2XY);
	Suma3Y=Y3-Y1;
	Suma3X=X3-X1;
	Cuad3Y=Suma3Y*Suma3Y;
	Cuad3X=Suma3X*Suma3X;
	Suma3XY=Cuad3Y+Cuad3X;
	raiz3=sqrt(Suma3XY);	 
		PERIMETRO=raiz1+raiz2+raiz3;
	printf("el perimetro del triangulo propuesto es %f", PERIMETRO);
}

#include<stdio.h>
#include<math.h>
main(){
	float X1, X2, Y1, Y2, SumaY, SumaX, CuadY, CuadX, SumaXY, raiz;
	printf("introduzca el valor de X1\n");
		scanf("%f", &X1);
	printf("introduzca el valor de X2 \n");
		scanf("%f", &X2);
	printf("introduzca el valor de Y1 \n");
		scanf("%f", &Y1);
	printf("introduzca el valor de Y2 \n");
		scanf("%f", &Y2);		
	SumaY=Y2-Y1;
	SumaX=X2-X1;
	CuadY=SumaY*SumaY;
	CuadX=SumaX*SumaX;
	SumaXY=CuadY+CuadX;
	raiz=sqrt(SumaXY);
 	printf("la distancia entre los puntos es %f", raiz);
}

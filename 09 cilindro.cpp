#include<stdio.h>

main(){
	float R, H, A, V;
	float Pi=3.1416;
	printf("\n Introduzca el radio del cilindro \n", R);
		scanf("%f", &R);
	printf("\n Introduzca la altura del cilindro \n", H);
		scanf("%f", &H);
	A=2*Pi*R*(H+R);
	V=Pi*(R*R)*H;
	printf("\n El area de el cilindro es %.2f", A);
	printf("\n El volumen del cilindro es %.2f", V);
}

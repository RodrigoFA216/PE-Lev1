//Tipo de Angulo
#include<stdio.h>

main(){
	float angulo;
	printf("Ingrese el valor del angulo: "),
	scanf("%f", &angulo);
	if(angulo>0 && angulo<89.9){
		printf("\nEl angulo es de tipo Agudo");
	}
	if(angulo==90){
		printf("\nEl angulo es de tipo Recto");
	}
	if(angulo>90.01 && angulo<179.9){
		printf("\nEl angulo es de tipo Obtuso");
	}
	if(angulo==180){
		printf("\nEl angulo es de tipo Llano");
	}
	if(angulo>180.1 && angulo<359.9){
		printf("\nEl angulo es de tipo Entrante");
	}
	if(angulo==0){
		printf("\nEl angulo es de tipo Perigonal");
	}
	if(angulo==360){
		printf("\nEl angulo es de tipo Perigonal");
	}
	
	
	
	
	
	
	
	
	
	
}

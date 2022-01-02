#include<stdio.h>
main(){
	float litros, galones, pesos, dolares;
	printf("cuantos galones de gas vas a comprar? \n");
		scanf("%f", &galones);
	printf("Cuantos dolares cuesta el galon? \n");
		scanf("%f", &dolares);
	pesos=dolares*19.77;
	litros=galones*3.78;
	printf("los litros comprados son %.4f", litros);
	printf("los dolares de costo son %.4f", pesos);
}

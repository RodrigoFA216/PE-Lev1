//realizar el diagrama de flujo y el programa que reciba las ventas de tres vendedores
//las ordene de forma acendente o decendente segun el usuario
#include<stdio.h>
#include<math.h>
main(){
	float VV1, VV2, VV3;
	int orden;
	printf("Inserte la venta del vendedor uno \n");
		scanf("%f", &VV1);
	printf("inserte la venta del vendedor dos \n");
		scanf("%f", &VV2);
	printf("inserte la venta del vendedor tres\n");
		scanf("%f", &VV3);
	printf(" Incerte 1 acendente 0 decendente \t");
		scanf("%i", &orden);
	if(orden==1){
		if(VV1<VV2){
			if(VV2<VV3){
				if(VV1<VV3){
				printf("El orden de los datos es \n");
				printf("%f \n", VV3);
				printf("%f \n", VV2);
				printf("%f \n", VV1);
				return 0;
				}
			}
			else{
				if(VV1<3){
				printf("El orden de los datos es \n");
				printf("%f \n", VV3);
				printf("%f \n", VV2);
				printf("%f \n", VV1);
				return 0;	
				}
			}
		}
		if(VV2<VV3>VV1>VV2){
			printf("el orden de los datos es \n");
			printf("%f \n", VV3);
			printf("%f \n", VV1);
			printf("%f \n", VV2);
			return 0;
		}
		if(VV1<VV2>VV3<VV1){
			printf("el orden de los datos es \n");
			printf("%f \n", VV2);
			printf("%f \n", VV1);
			printf("%f \n", VV3);
			return 0;
		}
		if(VV1<VV2>VV3>VV1){	
			printf("el orden de los datos es \n");
			printf("%f \n", VV2);
			printf("%f \n", VV3);
			printf("%f \n", VV1);
			return 0;
		}
		if(VV3<VV1>VV2<VV3){
			printf("El orden de los datos es \n");
			printf("%f \n", VV1);
			printf("%f \n", VV3);
			printf("%f \n", VV2);
			return 0;
		}
		if(VV1>VV2>VV3>VV1){
			printf("El orden de los datos es \n");
			printf("%f \n", VV1);
			printf("%f \n", VV2);
			printf("%f \n", VV3);
			return 0;
		}
	}
	if(orden==0){
		if(VV1>VV2>VV3<VV1){
			printf("El orden de los datos es \n");
			printf("%f \n", VV1);
			printf("%f \n", VV2);
			printf("%f \n", VV3);
			return 0;
		}
		if(VV1<VV2>VV3<VV1){
			printf("el orden de los datos es \n");
			printf("%f \n", VV2);
			printf("%f \n", VV1);
			printf("%f \n", VV3);
			return 0;
		}
		if(VV1>VV2<VV3>VV1){
			printf("el orden de los datos es \n");
			printf("%f \n", VV3);
			printf("%f \n", VV1);
			printf("%f \n", VV2);
			return 0;
		}
		if(VV1>VV2<VV3<VV1){	
			printf("el orden de los datos es \n");
			printf("%f \n", VV1);
			printf("%f \n", VV3);
			printf("%f \n", VV2);
			return 0;
		}
		if(VV3>VV1<VV2>VV3){
			printf("El orden de los datos es \n");
			printf("%f \n", VV2);
			printf("%f \n", VV3);
			printf("%f \n", VV1);
			return 0;
		}
		if(VV1<VV2<VV3<VV1){
			printf("El orden de los datos es \n");
			printf("%f \n", VV3);
			printf("%f \n", VV2);
			printf("%f \n", VV1);
			return 0;
		}
	}
}


//realizar un programa en c si un numero es par impar o nulo y no acepta numeros negativos
//tarea realizar un programa que defina el angulo que 
#include<stdio.h>
#include<math.h>
main(){
	int numero;
	printf("inserte un numero");
		scanf("%d", &numero);
	if(numero<0){
		printf("no se aceptan numeros negativos");
 	}
 	else{
	 	if(numero%2==0){
			printf("el numero introducido es par \n");
		}
	 	if(numero%2==1){
	 		printf("el numero introducido es impar \n");
	 	}
	}
 	 	if(numero==0){
 			printf("y es neutro \n");
 		}
 	}


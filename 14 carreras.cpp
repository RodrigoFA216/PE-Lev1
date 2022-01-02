#include<stdio.h>
main(){
	int CARR;
	float C1, C2, C3, C4, C5, PROM;
	printf("ingrese 5 calificaciones");
		scanf("%f %f %f %f %f", &C1, &C2, &C3, &C4, &C5);
	PROM=(C1+C2+C3+C4+C5)/5;
	printf("ingrese la carrera que desea 1 mecanica 2 ISISA 3 ICE 4 IC");
		scanf("%f", &CARR);
	if(CARR==1){
		if(PROM>=6&&PROM<=6.9){
			printf("Si puedes cursar la carrera de Mecanica con tu promedio");
		}
		if(0!=(PROM>=6&&PROM<=6.9)){
			printf("No puedes cursar la carrera de Mecanica con tu promedio");
		}
	}
	if(CARR==2){
		if(PROM>=7&&PROM<=8.1){
			printf("Si puedes cursar la carrera ISISA con tu promedio");
		}
		if(PROM>8.2&&PROM<=6.9){
			printf("No puedes cursar la carrera ISISA con tu promedio");
		}
	}
	if(CARR==3){
		if(PROM>=8.2&&PROM<=8.9){
			printf("Si puedes cursar la carrera ICE con tu promedio");
		}
		if(PROM>=9&&PROM<=8.1){
			printf("No puedes cursar la carrera ICE con tu promedio");
		}
	}
	if(CARR==4){
		if(PROM>=9.0&&PROM<=10.0){
			printf("Si puedes cursar la carrera Ingenieria en Computacion con tu promedio");
		}
		if(PROM>8.9&&PROM<10.0){
			printf("No puedes cursar la carrera Ingenieria en Computacion con tu promedio");
		}
	}
	if(CARR>=5){
		printf("Esta carrera no existe");
	}
}

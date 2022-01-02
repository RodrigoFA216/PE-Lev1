//INGRESAR TRES CALIFICACIONES Y DECR SI ESTA REPROBADA LA MATERIA
#include<stdio.h>
main(){
	float cal1, cal2, cal3, promedio;
	printf("inserte tres calificaciones \t");
		scanf("%f %f %f", &cal1, &cal2, &cal3);
	promedio=(cal1+cal2+cal3)/3;
	if(promedio<=5){
		printf("Reprobaste la asignatura \n \a");
	}
	else{
		printf("aprobaste la asignatura \n");
	}
}

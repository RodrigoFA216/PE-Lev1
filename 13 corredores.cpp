/*ejercicio, en las olimpiadas de invierno el tiempo que realizan los participantes, en la competencia de valocidad en pista 
se mide en minutos segundos y centesimas, la distancia que recorre se expresa en metros. Construye un diagrama y un programa 
que calcule la velocidad de los participantes en km/h de las diferentres competencias*/
#include<stdio.h>
#include<math.h>
main(){
	int Distancia;
	float TiempoM, TiempoS, TiempoC, TiempoT, Velocidad;
	printf("Programa para calcular la velocidad de un corredor en una competencia de atletismo\n");
	printf("Cuantos metros recorrio el corredor?\n", Distancia);
		scanf("%f", &Distancia);
	printf("En cuantos munitos lo recorrio?\n", TiempoM);
		scanf("%f", &TiempoM);
	printf("En cuantos segundos lo recorrio?\n", TiempoS);
		scanf("%f", &TiempoC);
	printf("En cuantas centesimas lo recorrio?", TiempoC);
		scanf("%f", &TiempoC);
	TiempoT=(TiempoM*60)+(TiempoS)+(TiempoC/100);
	Velocidad=Distancia/TiempoT;
	printf("La velocidad del corredor en metros sobre segundo es de %f", Velocidad);
}

//sueldos//
#include<stdio.h>
#include<math.h>
main(){
	float clave, s1, s2, s3, s4, s5, s6, semes, prom;
		printf("Inserte su clave de empleado \n");
			scanf("%f", &clave);
		printf("Inserte sus ultimos 6 sueldos \n");
			scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5, &s6);
	semes=(s1+s2+s3+s4+s5+s6);
	prom=(semes/6);
		printf("su clave de empleado es %.0f \n", clave);
		printf("su promedio de ingresos semestral es %f \n", prom);
		printf("su ingreso total semestral fue %f \n", semes);
}

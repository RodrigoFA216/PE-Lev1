//consruye un diagrama de flujo que al recibir como dato el precio de un producto importado, 
//incremente el 11% el mismo si es inferior a 1500 y 8% si fuera mayor o igual a dicho precio 
//deberas imprimir el precio original y el nuevo precio del producto//

#include<stdio.h>
#include<math.h>
main(){
	float prod, prec, tot;
	printf("nserte el pecio de su producto importado");
		scanf("%f", &prod);
	if(prod<1500){
		if(prod<0){
			printf("no hay valores negativos para un precio");
		}
		else{
		 	prec=prod*0.11;
		 	tot=prec;
		 	printf("El precio de su producto es %f \t", prec);
		 	printf("el producto con el impuesto de aduana es %f", tot);	
		}
	}
	else{
		prec=prod*0.8;
		tot=prec;
		printf("el precio de su producto es %f \t", prec);
		printf("el producto con el impuesto de aduana es %f", tot);
	}
}

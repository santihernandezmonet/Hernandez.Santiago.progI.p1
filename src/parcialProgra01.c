
#include <stdio.h>
#include <stdlib.h>


typedef struct
{
	int id;
	char procesador;
	char marca;
	float precio;


}eNotebook;

void aplicarDescuento(float* pResultado, int precioProducto);
int ordenarEstructura(eNotebook lista[], int tam);

int main(void) {

	int precioProducto = 100;
	float resultadoDescuento;
	char vecCaract[50];
	eNotebook lista [100] = {
						{2,"amd","sony",500},
						{2,"intel","hp",300},
						{2,"nokia","cualquiera",1000}
							};


	aplicarDescuento(&resultadoDescuento, precioProducto);
	printf("El resultado con descuento es: %.2f", resultadoDescuento);


	ordenarEstructura(lista, 100);





	return 0;
}


void aplicarDescuento(float* pResultado, int precioProducto)
{

	*pResultado = precioProducto - (precioProducto * 0.05);


}
int ordenarEstructura(eNotebook lista[], int tam)
{
	int todoOk = 0;
	eNotebook auxNotebook;
	if(lista != NULL && tam > 0)
	{
		for(int i=0; i < tam-1; i++){
			for(int j=i+1; j < tam; j++){
				if ( (lista[i].marca == lista[j].marca &&
						lista[i].precio > lista[j].precio) ||
						lista[i].marca > lista[j].marca){
					auxNotebook = lista[i];
					lista[i] = lista[j];
					lista[j] = auxNotebook;
				}
			}






		}





		todoOk = 1;
	}

	return todoOk;


}

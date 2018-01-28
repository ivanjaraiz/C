//3. reservar memoria con malloc para un array de tipo double para 1000 numeros, y 
//comprobar si el puntero es válido (si el puntero devuelve NULL, significa que no hay 
//suficiente memoria). 

#include <stdio.h>
#include <stdlib.h>

#define TOPE 1000
//#define TOPE 9999999999999999 // con esto da Error // por que el p_array nos devuelve NULL, es decir, que no hay suficnete esapcio par alamacenar tanto nuemeros. 

int main(){
	//double array [TOPE]; // asi no, se hace con punteros con objeto de ahorrar memoria. 
	double *p_array;
	int i; 
	p_array =  malloc(TOPE * sizeof(double)); // para saber si tengo suficiente espacio disponible en memoria. 

	if (p_array == NULL){

		printf("Error en la Asignación de Memoria"); // no hay memoria para hacer un array tan grande	
		return -1; // intentar recuperar memoria  
	}
	else{
		srand(time(NULL));
		for(i=0;i<TOPE;i++){
			p_array[i] = 1 + rand () % ((TOPE+1)-1); // logitud superior menos longitud inferior que quiero que sea 1. 
			printf("%lf.\n", p_array[i]);
		}

	}

	return 0;
}

// Pedir al usuario el número de elementos para un array, 
// de números enteros, posteriormente comprobar con malloc si hay 
// memoria suficiente (si el puntero es valido, es decir, diferente de NULL), 
//si la hay es entonces rellenar ese array con numeros aletorios, si no la hay 
// decir que hay un erro en la asignación de memoria. 
//1* Utilizar malloc para reservar en memoria para un nombre (string)

#include <stdio.h>
#include <stdlib.h> // funciona con malloc. 
#include <string.h>  // para usar el string copy

int main (){
	char nombre [20], *p_nombre; 
   // el espacio que no utilice de los 20 no ocupará mas memoria en la mauqina 
	int longitud;

	strcpy (nombre, "Ivan"); // copio Ivan dentro de la variable nombre, ojo!! con \0 que es el final de la cadena

	longitud = strlen(nombre); // tu nombre tiene tantos espacios, (longitud es un entero)
	//printf("%i\n", longitud ); // sale 4, lo que ocupa Ivan

	p_nombre = malloc ((longitud+1)*sizeof(char)); // multiplico el 
	//espacio que ocupa un char y lo multiplico por en numero de 
	//espacios que voy a utilizar
	// con malloc tendré el tamaño exacto que voy a tener de mi nombre

	//copiar mi nombre a mi variable puntero. 
	strcpy (p_nombre, nombre); // lo que esté en nombre lo asigno en mi variable puntero

	printf("Nombre: %s", p_nombre);

// con p_nombre, mi variable puntero, estoy usando los espacio necesarios, de esa manera ahorro
// ahorro bastante espacio  en la memoria dinamica
// esta malloc hemos usado para reservar un nombre o un string	





	return 0; 
}
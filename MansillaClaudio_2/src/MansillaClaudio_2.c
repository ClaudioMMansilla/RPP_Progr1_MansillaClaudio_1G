/*
 ============================================================================
 Name        : MansillaClaudio_2.c
2. Crear una función que se llame invertirCadena que reciba una cadena de
caracteres como parámetro  y su responsabilidad es invertir los caracteres
de la misma. Ejemplo si le pasamos UTN-FRA la deja como ARF-NTU
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int invertirCadena(char cadena[]);

int main(void) {
	setbuf(stdout, NULL);

	char cadena[10] = "UTN-FRA";

	invertirCadena(cadena);
	printf("%s", cadena);

	return EXIT_SUCCESS;
}

int invertirCadena(char cadena[]){

	int retorno = 0;
	char auxiliar;
	int tam = strlen(cadena);
	int salir = tam/2;


	if( cadena != NULL  && tam > 0){
		for (int i = 0; i < salir; i++)
		{
			auxiliar = cadena[i];
			cadena[i] = cadena[(tam - 1)-i];
			cadena[(tam - 1)-i] = auxiliar;
		}
		retorno =1;
	}
	return retorno;
}

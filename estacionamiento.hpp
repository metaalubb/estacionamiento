#include <stdio.h>
void f_estacionamiento(int cantidadautos){
	int autos,i;

	char estacionamiento[10]={'O','O','O','O','O','O','O','O','O','O'};
	for(i=0;i<cantidadautos;i++){
		if(estacionamiento[i]=='O'){
			estacionamiento[i]='X';
		}
	}
	for(i=0;i<10;i++){
		printf("[%c]",estacionamiento[i]);
	}
}


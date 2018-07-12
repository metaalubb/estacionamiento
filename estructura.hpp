#include<stdio.h>
#include<stdlib.h>
int i;
typedef struct{
	char patente[10];
	char modelo[20];
	int hora_ingreso;
	int minutos_ingreso;
}vehiculo;
vehiculo v[10];

void f_mostrar_struct(int cantidadautos){
	for(i=0;i<cantidadautos;i++){
	system("cls");
	printf("PATENTE: %s\n",v[i].patente);
	printf("MODELO: %s\n",v[i].modelo);
	printf("HORA INGRESO: %d:%d\n",v[i].hora_ingreso,v[i].minutos_ingreso);
	}
}

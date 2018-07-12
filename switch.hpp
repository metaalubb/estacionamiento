#include <stdio.h>
#include <stdlib.h>
#include "estructura.hpp"
int cantidadautos;
void f_opcion(int opcion){
	int i,hora,minutos;
	system("cls");
	switch (opcion){
		case 1:{
			do{
			system("cls");
			printf("~ ENTRADA DE VEHICULOS ~\n");
			printf("CUANTOS AUTOS DESEA INGRESAR (MAX 10): ");
			fflush(stdin);
			scanf("%d",&cantidadautos);
		}while(cantidadautos<1||cantidadautos>10);
		system("cls");
		for(i=0;i<cantidadautos;i++){
			printf("INGRESE LA PANTENTE DEL VEHICULO %d: ",i+1);
			scanf("%s",v[i].patente);
			printf("INGRESE EL MODELO DEL VEHICULO %d:",i+1);
			scanf("%s",v[i].modelo);
			printf("INGRESE LA HORA DE INGRESO DEL VEHICULO %d: ",i+1);
			scanf("%d:%d",&hora,&minutos);
		}
		break;}
		case 2:{
			printf("~ SALIDA DE VEHICULOS ~\n");
			printf("INGRESE LA PANTENTE DEL VEHICULO QUE DESEA SACAR");
			
		break;}
		case 3:{
			printf("~ LISTA DE AUTOS ESTACIONADOS ~\n");
		break;}
		case 4:{
			printf("~ ESTACIONAMIENTOS DISPONIBLES ~\n");
		break;}
		case 5:{
			printf("~ COBROS REALIZADOS ~\n");
		break;}
		case 6:{
			printf("  ~ SALIR ~\n");
			printf(" HASTA PRONTO ");
			exit(-1);	
		break;}
	}
	
}

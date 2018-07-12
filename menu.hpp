#include <stdio.h>
#include <stdlib.h>
#include "estructura.hpp"
#include "estacionamiento.hpp"
void f_opcion(int );
void f_menu(){
	int opc;
	do{
	system("cls");
	printf("~ BIENVENIDO ~ \n"),
	printf("1.ENTRADA DE VEHICULOS |2.SALIDA DE VEHICULO |3.LISTA DE AUTOS ESTACIONADOS |4.ESTACIONAMIENTOS DISPONIBLES |5.COBROS REALIZADOS |6.SALIR\n");
	scanf("%d",&opc);
	}while(opc<1||opc>6);
	f_opcion(opc);
}

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
			fflush(stdin);
			scanf("%s",v[i].patente);
			printf("INGRESE EL MODELO DEL VEHICULO %d:",i+1);
			fflush(stdin);
			scanf("%[^\n]",v[i].modelo);
			
			//validar la hora.
			//do{
			printf("INGRESE LA HORA DE INGRESO DEL VEHICULO %d: ",i+1);
			fflush(stdin);
			scanf("%d:%d",&v[i].hora_ingreso,&v[i].minutos_ingreso);
			//scanf("%d:%d",&hora,&minutos);
		//	}while(hora<0 || hora>23 || minutos<0 || minutos>59);
			
			
		}
		f_menu();
		break;}
		
		case 2:{
			printf("~ SALIDA DE VEHICULOS ~\n");
			printf("INGRESE LA PANTENTE DEL VEHICULO QUE DESEA SACAR");
		break;}
		
		case 3:{
			printf("~ LISTA DE AUTOS ESTACIONADOS ~\n");
			f_mostrar_struct(cantidadautos);
		break;}
		
		case 4:{
			printf("~ ESTACIONAMIENTOS DISPONIBLES ~\n");
			f_estacionamiento(cantidadautos);
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

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: XJINX
 *
 * Created on 1 de enero de 2013, 0:06
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h>
#define F 15
#define C 15
#define DERECHA 77
#define IZQUIERDA 75
#define ARRIBA 72
#define ABAJO 80

/*
 * Juego de fantasmas moviendose en una matriz
 */
void mapa(int map[F][C],int niv);
int copiar_matriz(int orig[F][C],int copia[F][C]);
void imprimir(int map[F][C],int nivel);
int jugar(int map[F][C],int nivel);
int main(int argc, char** argv) {
    
int nivel,campo[F][C];
    srand(time(0));
    nivel=rand()%2;
    mapa(campo,nivel);
    jugar(campo,nivel);
    return (EXIT_SUCCESS);
}//main

//------
void mapa(int map[F][C], int niv){
    int glo[F][C]={{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                   {1,0,0,0,1,0,0,0,0,0,0,0,0,0,1},
                   {1,0,0,0,1,0,0,0,0,0,0,0,0,0,1},	
                   {1,0,0,0,1,0,0,0,1,1,1,1,0,0,1},	
                   {1,0,0,0,1,0,0,0,0,0,0,0,0,0,1},	
                   {1,0,0,0,1,1,1,1,0,0,0,0,0,0,1},	
                   {1,0,0,0,0,0,0,0,0,0,0,0,1,0,1},	
                   {1,0,0,1,1,1,1,1,1,1,0,0,1,0,1},	
                   {1,0,0,0,0,0,0,0,0,1,0,0,1,0,1},	
                   {1,0,1,1,1,0,0,0,0,1,0,1,1,0,1},	
                   {1,0,1,0,1,1,0,0,0,1,0,1,0,0,1},	
                   {1,0,1,0,0,0,0,1,1,1,0,1,1,0,1},	
                   {1,0,1,1,1,0,0,0,0,0,0,0,0,0,1},	
                   {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},		
                   {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
                   };
    int glo2[F][C]={{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,0,0,0,0,0,0,0,0,0,0,0,1,0,1},
                    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},	
                    {1,0,0,0,0,0,0,0,1,1,1,1,1,0,1},	
                    {1,0,0,0,0,0,0,0,1,0,0,0,1,0,1},	
                    {1,0,0,0,0,0,0,0,1,0,0,0,1,0,1},	
                    {1,0,0,0,0,0,0,0,1,0,0,0,1,0,1},	
                    {1,0,0,1,1,1,1,1,1,1,0,0,1,0,1},	
                    {1,0,0,0,1,0,0,0,0,1,0,0,1,0,1},	
                    {1,0,1,1,1,0,0,0,0,1,0,0,1,0,1},	
                    {1,0,1,0,1,1,0,0,0,1,0,0,1,0,1},	
                    {1,0,1,0,0,0,0,0,0,0,0,0,1,0,1},	
                    {1,0,1,1,1,0,0,0,0,0,0,0,1,0,1},	
                    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},		
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
                    };
    switch(niv){
        case 0:copiar_matriz(glo,map);
               break;	
        case 1:copiar_matriz(glo2,map);
               break;	
    }			  				  
}//mapa
//---
int copiar_matriz(int orig[F][C],int copia[F][C]){
    int i,j;
    for(i=0;i<F;i++)
        for(j=0;j<C;j++)
            copia[i][j]=orig[i][j];
    
}//copiar
//-------
void imprimir(int map[F][C], int nivel){
    int i,j;
    system("CLS");
    printf("\n\n\t\t\t     NIVEL %d \n\n\t",nivel);
    for(i=0;i<F;i++){
        printf("\n\t\t\t");
        for(j=0;j<C;j++){
            if(map[i][j]==1)
                printf("+");
            if(map[i][j]==0)
                printf(" ");
            if(map[i][j]==5)
                printf("\1");
            if(map[i][j]==10)
                printf("\2");				
        }//for
    }//for
}//imprimir
//---
int jugar(int map[F][C],int nivel){

    char tecla;
    int FJ,CJ,FF,CF,auxF,auxC;
    int cambio;
    FJ=1; CJ=1;
    FF=6; CF=5;
    map[FJ][CJ]=5;
    map[FF][CF]=10;
    imprimir(map,nivel);
    tecla=0;
    while(tecla!='x'){
        tecla=0;
        cambio=0;
        if(kbhit()){
            tecla=getchar();
        }//if
        auxF=FJ;auxC=CJ;

        if(tecla==ARRIBA){
            if(map[FJ-1][CJ]==0){
                FJ--;
                cambio=!cambio;
            }
        }//arriba
        if(tecla==ABAJO){
            if(map[FJ+1][CJ]==0){
                FJ++;
                cambio=!cambio;
            }
        }//abajo
        if(tecla==DERECHA){
            if(map[FJ][CJ+1]==0){
                CJ++;
                cambio=!cambio;
            }
        }//arriba
        if(tecla==IZQUIERDA){
            if(map[FJ][CJ-1]==0){
                CJ--;
                cambio=!cambio;
            }				
        }//arriba

        //--- GENERAR MOVIMIENTO DEL FANTASMA UBICADO EN FF CF
        // --IMPORTANTE: ESTE CÓDIGO NO ESTA CORRECTO, ES SOLO UN EJEMPLO, DEBEN ESTAR EN LA MISMA FILA O COLUMNA PARA QUE LO SIGA, SE DEBE
        //GENERAR UNA ESTRATEGIA PARA QUE EL SEGUNDO PERSONAJE ESTÉ EN CONSTANTE MOVIMIENTO E INICIE UNA PERSECUCIÓN DEL PRIMERO
        map[FF][CF]=0;
        
        if(CF==CJ){ 
            if(FF<FJ){
                if(map[FF+1][CF]==0){
                    FF++;
                }
            }
            else{
                if(map[FF-1][CF]==0){
                    FF--;
                }
            }					
        }
        else{
            if(FF==FJ){ 
                if(CF<CJ){
                    if(map[FF][CF+1]==0){
                        CF++;
                    }
                }
                else{
                    if(map[FF][CF-1]==0){
                        CF--;
                    }
                }//else			
            }
        }//else
        //---
        map[auxF][auxC]=0;	
        map[FJ][CJ]=5;	
        map[FF][CF]=10;
        //if(cambio)	
            imprimir(map,nivel);
        Sleep(100);
    }//fin while
}



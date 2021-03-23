/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: XJINX
 *
 * Created on 31 de diciembre de 2012, 23:39
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define DERECHA 77
#define IZQUIERDA 75
#define ARRIBA 72
#define ABAJO 80
#define FI 20
#define CO 15

/*
 * juego de nave disparando a un blanco en movimiento
 */
void imprimir(int m[FI][CO]);
int main(int argc, char** argv) {
    int mapa[FI][CO],x,y,FN,CN,FM,CM,FO,COb,disparo,dirO;
    char tecla;
    printf("\t\t\n\t\t Instrucciones: ");
    printf("\t\t\n\t\t Presione ESPACIO para disparar, X para salir, use las flechas para moverse <-  ->. ");
    printf("\t\t\n\n");
    system("PAUSE");
    //--------------------mapa
    for(x=0;x<FI;x++)
        for(y=0;y<CO;y++)
            if(x==0 || x==FI-1 || y==0 || y==CO-1)
                mapa[x][y]=1;
            else	
                mapa[x][y]=0;
    //---------------------------------------------			
    //---- inicializar juego ----------------------
    srand(time(NULL));
    dirO=rand()%2;
    FN=FI-2; CN=1;
    mapa[FN][CN]=2;
    FO=5; COb=5;
    mapa[FO][COb]=10;
    tecla=0;
    disparo=0;
    //---------------------------------------------
    imprimir(mapa);

    //--- juego ---

    while(tecla!='x'){
        tecla=0;		
        if(kbhit()){ //investigar para que se utiliza
            tecla=getchar();
        }//if
        mapa[FN][CN]=0;
        mapa[FO][COb]=0;

        if(tecla==DERECHA){
            if(mapa[FN][CN+1]==0){
                CN++;		
            }
        }//derecha
        if(tecla==IZQUIERDA){
            if(mapa[FN][CN-1]==0){
                CN--;		
            }
        }//izquierda
        //movimiento obstaculo
        if(dirO==1){ //derecha
            if(mapa[FO][COb+1]==0){
                COb++;
            }
            else
            dirO=!dirO;
        }//dir
        else{//izquierda
            if(mapa[FO][COb-1]==0){
                COb--;
            }
            else
                dirO=!dirO;
        }
        if(tecla==' ' && !disparo){ //disparo
            printf("\a");
            disparo=!disparo; //disparo activo
            FM=FN-1;
            CM=CN;
            mapa[FM][CM]=5;

        }//disapro

        if(disparo){
            mapa[FM][CM]=0;
            if(mapa[FM-1][CM]==0){
                FM--;
                mapa[FM][CM]=5;
            }//if
            else{
                mapa[FM][CM]=11;
                imprimir(mapa);
                Sleep(15);//variar para la velocidad	
                mapa[FM][CM]=0;
                disparo=!disparo;
            }//else			
        }//disparo
        
        mapa[FN][CN]=2;
        mapa[FO][COb]=10;
        imprimir(mapa);
        Sleep(25);//espera unos milisegundos, variar para velocidad		
    }//while
    return (EXIT_SUCCESS);
}//main

void imprimir(int m[FI][CO]){
    int x,y;
    system("CLS");
    printf("\n\n");
    for(x=0;x<FI;x++){
        printf("\t\t\n\t\t\t\t");
        for(y=0;y<CO;y++){
            if(m[x][y]==0)
                printf(" "); //piso
            if(m[x][y]==1)
                printf("+"); //pared
            if(m[x][y]==2)
                printf("A"); //nave
            if(m[x][y]==5)
                printf("|");//misil			
            if(m[x][y]==10)
                printf("-");//obstaculo					
            if(m[x][y]==11)
                printf("*");//obstaculo						
        }//columnas
    }//filas
}


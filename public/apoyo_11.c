/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: XJINX
 *
 * Created on 1 de enero de 2013, 0:27
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
//#include<conio.h>
#define f 10
#define c 10

/*
 * 
 */
int main(int argc, char** argv) {
    int matriz[f][c]={0},promf[f]={0},promc[c]={0},mayf[f],menc[c];
    int i,j,valor,b;
    char cedula[f][12],nombre[f][35];
    char r;
//cargar la matriz
    srand(time(NULL));
    for(i=0;i<f;i++) {
        nombre[i][0]=rand()%27+65;
        nombre[i][1]=rand()%27+65;
        nombre[i][2]=rand()%27+65;
        nombre[i][4]=rand()%27+65;
        nombre[i][5]=rand()%27+65;
        nombre[i][5]='\0';
        for(j=0;j<c;j++) {
            matriz[i][j]=rand()%100+1;
        }
    }
    i=0;
    do{
        printf("Ingrese la cedula");
        fflush(stdin);
        gets(cedula[i]);
        printf("Ingrese nombre");
        fflush(stdin);
        gets(nombre[i]);
        for(j=0;j<c;j++){
            printf("ingrese las notas");
            scanf("%i",&matriz[i][j]);
        }
        i++;
        printf("existen mas clientes S/N");
        r=getchar();
    }while(r=='S' && i<f);

//mostrar la matriz con sus vectores
    printf("\nNOMBRE\t  N1   N2  N3   N4   N5  N6");
    for(i=0;i<f;i++){
        printf("\n%s\t",nombre[i]);
        for(j=0;j<c;j++){
            printf("%4d",matriz[i][j]);
        }
    }
    getchar();
//promedio por fila de la matriz  recorrido fila columna
    for(i=0;i<f;i++){
        for(j=0;j<c;j++){
            promf[i]+=matriz[i][j];
        }
        promf[i]/=c;
    }

 //promedio por columna de la matriz  recorrido columna fila
    for(j=0;j<c;j++){
        for(i=0;i<f;i++){
            promc[j]+=matriz[i][j];
        }
        promc[j]/=f;
    }

//mayor por fila de la matriz  recorrido fila columna
    for(i=0;i<f;i++){
        mayf[i]=matriz[i][0];
        for(j=1;j<c;j++){
            if(matriz[i][j]>mayf[i])
                mayf[i]=matriz[i][j];
        }
    }   

 //menor por columna de la matriz  recorrido columna fila
    for(j=0;j<c;j++){
        menc[j]=matriz[0][j];
        for(i=1;i<f;i++){
            if(matriz[i][j]<menc[j])
                menc[j]=matriz[i][j];
        }
    }

//mostrar la matriz con sus promedios
//clrscr();
    printf("NOMBRE\t  N1    N2    N3    N4    N5   N6  Promedio");
    for(i=0;i<f;i++){
        printf("\n%s\t",nombre[i]);
        for(j=0;j<c;j++){
            printf("%3i ",matriz[i][j]);
        }
        printf("  %3i  %3i",promf[i],mayf[i]);
    }
    printf("\n\n prom ");
    for(j=0;j<c;j++)
        printf(" %3i",promc[j]);
        printf("\n\n men ");
    for(j=0;j<c;j++)
        printf(" %2i",menc[j]);

getchar();
//buscar en  la matriz
//clrscr();
    printf("Ingrese valor");
    scanf("%i",&valor);
    b=0;
    for(i=0;i<f;i++){
        for(j=0;j<c;j++){
            if(matriz[i][j]==valor){
                printf("valor encontrado en F:%i C:%i \n",i+1,j+1);
                b=1;
            }
        }
    }
    if(b==0)
        printf("valor no encotrado");
    
    getchar();

    return (EXIT_SUCCESS);
}


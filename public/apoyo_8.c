/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: XJINX
 *
 * Created on 11 de febrero de 2019, 6:47
 */

#include <stdio.h>
#include <stdlib.h>
//#include<conio.h>

#define TAM 21
#define FIL 21
#define COL 20

/*
 * juego de una araña buscando sus huevos
 */
/*struct nivel{
	int numf;
	int numc;
	int nump;
}
nivel1={}
nivel2={}
nivel3={}
;*/
void movimiento(char vector[FIL][TAM]);
void menu();
void intru();
int main(int argc, char** argv) {
    char nivel1[FIL][TAM]={{'#','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','#'},//1
                           {'|','*','.','.','|','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','|'},//2
                           {'|','-','#','.','#','.','#','-','-','-','-','-','-','-','-','-','-','-','#','.','|'},//3
                           {'|','.','.','.','|','.','|','.','.','.','.','.','.','.','.','.','.','.','.','.','|'},//4
                           {'|','.','#','-','#','.','#','.','#','-','-','-','-','-','-','-','-','-','-','-','|'},//5
                           {'|','.','.','.','.','.','|','.','|','.','.','.','.','.','.','.','.','.','.','.','|'},//6
                           {'|','-','-','-','-','-','#','.','#','.','#','-','-','-','-','-','-','-','#','.','|'},//7
                           {'|','.','.','.','.','.','|','.','.','.','|','.','.','.','.','.','.','.','.','.','|'},//8
                           {'|','.','#','-','#','.','#','-','-','-','#','.','#','-','-','-','-','-','-','-','|'},//9
                           {'|','.','.','.','|','.','.','.','.','.','.','.','|','.','.','.','.','.','.','.','|'},//10
                           {'|','-','#','.','#','-','-','-','-','-','-','-','#','.','#','-','-','-','#','.','|'},//11
                           {'|','.','.','.','|','.','.','.','.','.','.','.','.','.','|','.','.','.','.','.','|'},//12
                           {'|','.','#','-','#','.','#','-','-','-','-','-','-','-','#','.','#','-','-','-','|'},//13
                           {'|','.','.','.','.','.','|','.','.','.','.','.','.','.','.','.','|','.','.','.','|'},//14
                           {'|','-','-','-','-','-','#','.','#','-','-','-','-','-','-','-','#','.','#','.','|'},//15
                           {'|','.','.','.','.','.','|','.','.','.','.','.','.','.','.','.','.','.','|','.','|'},//16
                           {'|','.','#','-','#','.','#','-','-','-','#','-','-','-','#','-','-','-','#','.','|'},//17
                           {'|','.','|','0','|','.','.','.','.','.','|','.','.','.','|','.','.','.','|','.','|'},//18
                           {'|','.','#','-','#','-','-','-','#','.','#','.','#','.','#','.','#','.','#','.','|'},//19
                           {'|','.','.','.','.','.','.','E','|','.','.','.','|','.','.','.','|','.','.','.','|'},//20
                           {'#','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','#'}};//21
    char aux[FIL][TAM];
    int i,j,a=1,b=1,opc;
    do{
        for(i=0;i<FIL;i++){
            for(j=0;j<FIL;j++){
                aux[i][j]=nivel1[i][j];
            }
        }
        system("cls");
        menu();
        printf("elige tu opc:"); scanf("%d",&opc);
        system("cls");
        switch(opc){
            case 1:
                movimiento(aux);
                 break;
            case 2:
                intru();
                 break;
            default:
                 break;
        }
    }while(opc!=3);

    getchar();
    return (EXIT_SUCCESS);
}

void menu(){
    printf("\t\tESCAPE DE LA ARAÑA");
    printf("\n(1)JUGAR");
    printf("\n(2)INTRUCIONES");
    printf("\n(3)SALIR\n");
}
void intru(){
    printf("\t\tINTRUCIONES");
    printf("\nMOVIMIENTOS: \n\t\tW(ARRIBA) \n\t\tS(ABAJO) \n\t\tA(IZQUIERDA) \n\t\tD(DERECHA)");
    printf("\n\nOBJETIVO: la ara%ca \"SARA\" nesesita rescatar sus huevos de la acantarilla,\nayudala a encontrarlos todos y salir de la acantarialla",164);
    getchar();
}


void movimiento(char vector[FIL][TAM]){
    int i,j,a=1,b=1,cont=0;
    char opc,aux;
    a=1;
    b=1;
    do{
        system("cls");
        opc='p';
        for(i=0;i<FIL;i++){
            for(j=0;j<TAM;j++){
                printf("%c",vector[i][j]);
            }
                printf("\n");
        }
        printf("HUEVOS(%d)",cont);
        fflush(stdin);
        opc=getchar();
        switch(opc){
            case 'd':
            case 'D':	
                if(vector[a][b+1]!='|' && vector[a][b+1]!='-'&& vector[a][b+1]!='#'){
                    if(vector[a][b+1]=='.'){
                        vector[a][b+1]=' ';
                        cont++;
                    }
                aux=vector[a][b];
                vector[a][b]=vector[a][b+1];
                vector[a][b+1]=aux;
                b++;}
             break;
            case 'a':
            case 'A':	
                if(vector[a][b-1]!='|' && vector[a][b-1]!='-'&& vector[a][b-1]!='#'){
                    if(vector[a][b-1]=='.'){
                        vector[a][b-1]=' ';
                        cont++;
                    }
                aux=vector[a][b];
                vector[a][b]=vector[a][b-1];
                vector[a][b-1]=aux;
                b--;}
            break;
            case 'w':
            case 'W':
                if(vector[a-1][b]!='-'&& vector[a-1][b]!='#'&& vector[a-1][b]!='='){
                    if(vector[a-1][b]=='.'){
                        vector[a-1][b]=' ';
                        cont++;
                    }
                aux=vector[a][b];
                vector[a][b]=vector[a-1][b];
                vector[a-1][b]=aux;
                a--;}
             break;
            case 's':
            case 'S':	
                if(vector[a+1][b]!='-'&& vector[a+1][b]!='#'&& vector[a+1][b]!='='){
                    if(vector[a+1][b]=='.'){
                        vector[a+1][b]=' ';
                        cont++;
                    }
                aux=vector[a][b];
                vector[a][b]=vector[a+1][b];
                vector[a+1][b]=aux;
                a++;}
            break;				
        }
    }while(vector[19][7]!='*');
}





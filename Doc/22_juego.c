/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANGEL
 *
 * Created on 5 de febrero de 2019, 04:52 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <time.h>
#include <string.h>
#define pause 1
#define F 12
#define C 12
#define semilla 666

/*
 * programa que cuenta los numeros dependiendo de la cantidad de jugadores 
 * ejm: 3 == 1 pedro,2 juan,3 miguel,4 pedro;
 */
void monster(char mapa[F][C],int *pts);
int main(int argc, char** argv) {
    char mapa[F][C]={//0   1   2   3   4   5   6   7   8   9   10 11
                    {'#','#','#','#','#','#','#','#','#','#','#','#'},//0
                    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},//1
                    {'#',' ','1',' ',' ',' ',' ',' ',' ',' ',' ','#'},//2
                    {'#',' ',' ',' ','*',' ',' ',' ',' ',' ',' ','#'},//3
                    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},//4
                    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},//5
                    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},//6
                    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},//7
                    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},//8
                    {'#',' ',' ',' ',' ',' ',' ',' ',' ','2',' ','#'},//9
                    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},//10
                    {'#','#','#','#','#','#','#','#','#','#','#','#'},//11
                    };

    srand(semilla);
    char aux,usuario[C];
    int pts=0,a=2,b=2,c=9,d=9,i,j,x,y,z;

    system("color 3f");
    printf("Nombre del jugador: ");
    fflush(stdin);
    gets(usuario);

    //nuevo menu con hora
    for(x=0; x<24; x++) {
        for(y=0; y<=59; y++) {
            for(z=0; z<=59; z++) {

                system("cls");
                printf("Tiempo de juego %02d:%02d:%02d\n\n%s\t %02d\n",x,y,z,usuario,pts);

                for(i=0;i<C;i++){
                    for(j=0;j<F;j++){
                        printf("%c",mapa[i][j]);
                    }
                    printf("\n");
                }

                monster(mapa,&pts);

                Sleep(pause);

                if(GetAsyncKeyState(VK_UP)){

                    if(mapa[a-1][b]!='#'){
                        if(mapa[a-1][b]=='*'){
                            mapa[a-1][b]==' ';
                            pts++;
                        }
                        aux=mapa[a][b];
                        mapa[a][b]=mapa[a-1][b];
                        mapa[a-1][b]=aux;
                        a--;
                    }
                }

                if(GetAsyncKeyState(VK_LEFT)){

                    if(mapa[a][b-1]!='#'){
                        if(mapa[a][b-1]=='*'){
                            mapa[a][b-1]==' ';
                            pts++;
                        }
                        aux=mapa[a][b];
                        mapa[a][b]=mapa[a][b-1];
                        mapa[a][b-1]=aux;
                        b--;
                    }
                }

                if(GetAsyncKeyState(VK_RIGHT)){

                    if(mapa[a][b+1]!='#'){
                        if(mapa[a][b+1]=='*'){
                            mapa[a][b+1]==' ';
                            pts++;
                        }
                        aux=mapa[a][b];
                        mapa[a][b]=mapa[a][b+1];
                        mapa[a][b+1]=aux;
                        b++;
                    }
                }

                if(GetAsyncKeyState(VK_DOWN)){

                    if(mapa[a+1][b]!='#'){
                        if(mapa[a+1][b]=='*'){
                            mapa[a+1][b]==' ';
                            pts++;
                        }
                        aux=mapa[a][b];
                        mapa[a][b]=mapa[a+1][b];
                        mapa[a+1][b]=aux;
                        a++;
                    }
                }
                if(GetAsyncKeyState(VK_ESCAPE))
                    return (EXIT_SUCCESS);
            }
        }	
    }
}

void monster(char mapa[F][C],int *pts){
	
    int a=9,b=9,evil,aux;

    evil=rand()%7+1;

    switch(evil){
        case 5:
        case 1:
            if(mapa[a-1][b]!='#'){
                if(mapa[a-1][b]=='1'){
                    mapa[a-1][b]==' ';
                    *pts=0;
                }
                aux=mapa[a][b];
                mapa[a][b]=mapa[a-1][b];
                mapa[a-1][b]=aux;
                a--;
            }
        break;
        case 6:
        case 2:
            if(mapa[a][b-1]!='#'){
                if(mapa[a][b-1]=='1'){
                    mapa[a][b-1]==' ';
                    *pts=0;
                }
                aux=mapa[a][b];
                mapa[a][b]=mapa[a][b-1];
                mapa[a][b-1]=aux;
                b--;
            }
        break;
        case 7:
        case 3:
            if(mapa[a][b+1]!='#'){
                if(mapa[a][b+1]=='1'){
                    mapa[a][b+1]==' ';
                    *pts=0;
                }
                aux=mapa[a][b];
                mapa[a][b]=mapa[a][b+1];
                mapa[a][b+1]=aux;
                b++;
            }
        break;
        case 8:
        case 4:
            if(mapa[a+1][b]!='#'){
                if(mapa[a+1][b]=='1'){
                    mapa[a+1][b]==' ';
                    *pts=0;
                }
                aux=mapa[a][b];
                mapa[a][b]=mapa[a+1][b];
                mapa[a+1][b]=aux;
                a++;
            }
        break;
    }
    printf("lo %d",evil);
}
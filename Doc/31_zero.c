/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: XJINX
 *
 * Created on 1 de enero de 2013, 3:57
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * imprime zero y espacio
 */
int numero();
int espacio();

int main(int argc, char** argv) {
    char n;
    int x,y,z,i;
    do{
        system("cls");
        printf("Numero: ");
        scanf("%d",&x);
        printf(" ");
        z=numero(x);
        y=espacio(x);
        y=espacio(x);
        z=numero(x);
        n=getchar();
        fflush(stdin);
    }while(n!='s');
    return (EXIT_SUCCESS);
}

int numero(int a){
    int i;

    for(i=0;i<a;i++){
        printf("0");
    }

    return a;
}
int espacio(int a){
    int i,y;

    for(i=0,y=a/2-1;i<y;i++){
        printf(" ");
    }
    return y;
}
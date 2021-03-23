/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANGEL
 *
 * Created on 5 de febrero de 2019, 04:36 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * Recibe y muestra los elemntos de un vector
 */
int funcion(int *v);
int leer(int *v);
int main(int argc, char** argv) {
	
    char n;
    int i,v[3];

    do{
        funcion(v);
        leer(v);
        n=tolower(getchar());
        fflush(stdin);
    }while(n!='.');

    system("pause");
    return (EXIT_SUCCESS);
}

int funcion(int *v){

    int i;

    for(i=0;i<3;i++){
        printf("numero %d: ",i+1);
        scanf("&d",(v+i));
    }
}
int leer(int *v){
	
    int i;

    for(i=0;i<3;i++){
        printf("%d,",*(v+i));
    }
}


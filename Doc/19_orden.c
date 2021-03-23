/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: XJINX
 *
 * Created on 27 de enero de 2019, 7:52
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * ordenar un vector de 10 enteros de mnor a mayor en una funcion
 */
void orden(int a[]);
void impri(int x[]);
int main(int argc, char** argv) {
    char n;
    int v[10]= {4,5,6,7,10,2,3,0,9,1};
    do {
        orden(v);
        impri(v);
        n=tolower(getch());
        fflush(stdin);
    } while(n!='.');
    system("pause");
    return (EXIT_SUCCESS);
}

void orden (int a[]) {
    int i,j,aux;
    for(i=0; i<10; i++) {
        for(j=i; j<10; j++) {
            if(a[i]<a[j]) {
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
        }
    }
}
void impri(int x[]){
    int i;
    for(i=0;i<10;i++){
            printf("%d, ",x[i]);
    }
}

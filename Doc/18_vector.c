/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: XJINX
 *
 * Created on 26 de enero de 2019, 23:44
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * Introduce elemntos de un vector en una funcion
 */
void fun(int a[]);
void impri(int x[]);
int main(int argc, char** argv) {
    char n;
    int v[10];
    do {
            fun(v);
            impri(v);
            n=tolower(getch());
            fflush(stdin);
    } while(n!='.');
    system("pause");
    return (EXIT_SUCCESS);
}

void fun(int a[]) {
    int i;
    for(i=0; i<10; i++) {
            printf("10 numero en el vector: ");
            scanf("%d, ",&a[i]);
    }
}
void impri(int x[]) {
    int i;
    for(i=0; i<10; i++) {
            printf("%d",x[i]);
    }
    printf("\n\n");
}

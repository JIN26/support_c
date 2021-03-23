/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: XJINX
 *
 * Created on 1 de enero de 2013, 4:11
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * Hola pc (necesito estudiar mas)
 */
int main(int argc, char** argv) {
    char n,v[10];
    int x,i,j;
    do {
        printf("hola.\n");
        do {
            for(i=0,x=0; x!=1; i++) {
                v[i]=tolower(getchar());
                printf("%c",v[i]);
                if(v[i]=='\r') {
                    x=1;
                }
            }
            if(v[0]=='h'&&v[1]=='o'&&v[2]=='l'&&v[3]=='a') {
                printf("\ncomo estas.\n");
            }
            if(v[0]=='b'&&v[1]=='i'&&v[2]=='e'&&v[4]=='n'&&v[4]==' '&&v[5]=='y'&&v[6]==' '&&v[7]=='t'&&v[8]=='u'){
                printf("\nbien y �que haces?\n");
            }
            if(v[0]=='a'&&v[1]=='d'&&v[2]=='i'&&v[3]=='o'&&v[4]=='s') {
                x=2;
            }for(i-2,j=0;j<=i;j++){
                printf("%c",v[j]);
            }
        } while(x!=2);
        n=tolower(getchar());
        fflush(stdin);
    } while(n!='.');
    system("pause");
    return (EXIT_SUCCESS);
}


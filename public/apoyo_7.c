/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: XJINX
 *
 * Created on 11 de febrero de 2019, 6:32
 */

#include <stdio.h>
#include <stdlib.h>
//#include<conio.h>

/*
 * numero vampiro
 */
int par(int n1);//prototipos de las funciones
void intro(int a[], int n1);
void ordenar(int a[],int n1);
int por(int v[],int part,int num);
int por1(int v[],int part,int num);//prototipos de las funciones
int main(int argc, char** argv) {//funcion princil
    int num,part,i,veces,x1,x2,x3,x4,a;
    int v[10],numeros[50];//son muy nesesarios

    scanf("%d",&veces);//las interacciones...
    for(a=0; a<veces; a++) {
        scanf("%d",&num);
        part=par(num);//esta funcion cuenta cuantos digitos tiene el numero
        intro(v,num);//esta separa y introduce el los numero en en vector
        ordenar(v,part);//este ordena el vector
        if(part==1||part==2||part==3||part==5) { // este if son para los casos de 1,2,3 o 5 digitos qeu el sesultado es NO=0
            numeros[a]=0;
        }
        if(part==4) {
            numeros[a]=por(v,part,num);//funcion importante
        }
        if(part==6) {
            numeros[a]=por1(v,part,num);//funcion importante
        }
    }

    for(a=0; a<veces; a++) { //esto es un distribuidor de deciciones el vectro "numeros" guarda los si y los no en forma de 0 y 1;
        if(numeros[a]==0) {
            printf("\nNO");
        } else {
            printf("\nSI");
        }
    }
    getchar();
    return (EXIT_SUCCESS);
}

int par(int n1) {
    int cont=0;
    do {
        n1=n1/10;
        cont++;
    } while(n1!=0);
    return cont;
}

void intro(int a[], int n1) {
    int i=0;
    do {
        a[i]=n1%10;
        n1=n1/10;
        i++;
    } while(n1!=0);
}

void ordenar(int a[],int n1) {
    int i,j,aux;
    for(i=0; i<n1-1; i++) {
        for(j=0; j<n1-1; j++) {
            if(a[j]>a[j+1]) {
                aux=a[j];
                a[j]=a[j+1];
                a[j+1]=aux;
            }
        }
    }
}

int por(int v[],int part,int num) {
    int cont=0;
    int x1,x2,x3,x4;
    for(x1=0; x1<part; x1++) {
        for(x2=0; x2<part; x2++) {
            for(x3=0; x3<part; x3++) {
                for(x4=0; x4<part; x4++) {
                    if(((v[x1]*10+v[x2])*(v[x3]*10+v[x4]))==num) {
                        cont++;
                    }
                }
            }
        }
    }
    if(cont==0) {
        return 0;
    } else {
        return 1;
    }
}

int por1(int v[],int part,int num) {
    int cont=0;
    int x1,x2,x3,x4,x5,x6;
    for(x1=0; x1<part; x1++) {
        for(x2=0; x2<part; x2++) {
            for(x3=0; x3<part; x3++) {
                for(x4=0; x4<part; x4++) {
                    for(x5=0; x5<part; x5++) {
                        for(x6=0; x6<part; x6++) {
                            if(((v[x1]*100+v[x2]*10+v[x3])*(v[x4]*100+v[x5]*10+v[x6]))==num) {
                                cont++;
                            }
                        }
                    }
                }
            }
        }
    }
    if(cont==0) {
        return 0;
    } else {
        return 1;
    }
}



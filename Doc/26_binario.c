/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: XJINX
 *
 * Created on 1 de enero de 2013, 4:36
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    char n;
    int x,i,j,k,aux,v[10],b[10];
    do {
        system("cls");
        printf("numero: ");
        scanf("%d",&x);
        for(i=0,k=0;x!=0&&k!=1;i++){
            b[i]=x%10;
            x/=10; 
            if(b[i]!=1&&b[i]!=0){
                k=1;
                printf("\rEl numero no es binario");
            }
        }
        for(i--,j=0;i>j;i--,j++){
            aux=b[j];
            b[j]=b[i];
            b[i]=aux;
        }
        for(i=0,j=1;i<20&&k!=1;i++,j*=2) {printf("%d,",b[j]);
            if(b[i]==1){
                x+=v[i]=j;
            }	
        }
        printf("%d",x),x=0;
        n=tolower(getchar());
        fflush(stdin);
    } while(n!='.');
    system("pause");
    return (EXIT_SUCCESS);
}


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: XJINX
 *
 * Created on 26 de enero de 2019, 23:15
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * numero 6174
 */
int unidades();
int main(int argc, char** argv) {
    char n;
    int x,j,y[4],i,z,u=0,d=0,c=0,um=0,x1=0,k;
    do {
            printf("numero: ");
            scanf("%d",&x);
            for(k=0; x!=6174; k++) {
                    i=0;
                    z=1000;
                    u=x%10;
                    d=x/10%10;
                    c=x/100%10;
                    um=x/1000%10;//saca las unidades
                    unidades(&c,&d);
                    unidades(&um,&u);
                    unidades(&um,&c);
                    unidades(&d,&u);
                    unidades(&c,&d);
                    unidades(&um,&u);//lo ordena
                    x=um*1000+c*100+d*10+u;
                    x1=x;
                    for(j=0; x1!=0; j++) {//lo voltea en el for
                            y[j]=x1%10;
                            x1=x1/10;
                            i=i+y[j]*z;
                            z/=10;
                    }
                    x-=i;//lo resta
                    printf(" %d, %d ",i,x);
            }
            printf("%d,%d",x,k);
            n=tolower(getch());
            fflush(stdin);
    } while(n!='.');
    system("pause");
    return (EXIT_SUCCESS);
}

int unidades (int *x,int *y) {
    int aux;
    if(*x<*y) {
            aux=*x;
            *x=*y;
            *y=aux;
    }
}

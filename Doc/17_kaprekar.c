/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: XJINX
 *
 * Created on 26 de enero de 2019, 23:22
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * kaprekar si o no
 */
int main(int argc, char** argv) {
    char n;
    int x=0,x1=0,a,b,y[15],j,i,z;
    do {
            x1=0;
            system("cls");
            printf("numero: ");
            scanf("%d",&x);
            a=x;
            x=pow(x,2);
            for(j=0; x!=0; j++) {
                    y[j]=x%10;
                    x/=10;
            }
            j-=1;
            i=j;
            if(j%2==0) {
                    j+=1;
            }
            for(i=i; i>j/2; i--) {
                    z=10;

                    z=pow(z,i);
                    x1=x1+y[i]*z;
            }
            x1/=pow(10,i+1);
            b=x1%10;
            if(b==0) {
                    x1/=10;
            }
            for(j/=2; j>=0; j--) {
                    z=10;
                    z=pow(z,j);
                    x=x+y[j]*z;
            }
            x+=x1;
            printf("%d\n",x);
            if(a==x) {
                    printf("SI");
            } else {
                    printf("NO");
            }
            n=tolower(getch());
            fflush(stdin);
    } while(n!='.');
    system("pause");
    return (EXIT_SUCCESS);
}


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANGEL
 *
 * Created on 4 de febrero de 2019, 07:46 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 * Numero vampiro
 */
int mejora(int a);
int main(int argc, char** argv) {
    char n,m;
    int x,x1,x2,i,j,y,z,a,b,v[10],c;
    do {
        system("cls");
        printf("\tNumero vampiro\n\n");
        printf("Numero de casos: ");
        scanf("%d",&x1);
        x2=0;
        do {
            z=0,x2++,x1--;
            system("cls");
            printf("\tCaso %d\n\n",x2);
            printf ("Nummero: ");
            scanf("%d",&x);
            c=mejora(x);//cuenta los digitos
            if(x>=1000 && x<=99999999) {//si es mayor a 8 digitos no es vampiro
                if(c%2!=0) {//si la cantidad de digitos es impar no es vampiro (y impar por que empiesa a contar de 0)
                    for(j=10; j<=i; j++) {
                        for (i=11; i<=x/10; i++) {
                            y=x%i;
                            if (y==0&&i*j==x&&i>999&&j>999&&i<=9999&&j<=9999) {//si el numero es de 8 digitos
                                a=i%10,b=j%10;
                                if(a!=0||b!=0) {
                                    z++;
                                    printf("%d - %d = %d\n",i,j,i*j);
                                }
                            }
                            if (y==0&&i*j==x&&i>99&&j>99&&i<=999&&j<=999) {//si el numero es de 6 digitos
                                a=i%10,b=j%10;
                                if(a!=0||b!=0) {
                                    z++;
                                    printf("%d - %d = %d\n",i,j,i*j);
                                }
                            }
                            if (y==0&&i*j==x&&i>9&&j>9&&i<=99&&j<=99) {//si el numero es de 4 digitos
                                a=i%10,b=j%10;
                                if(a!=0||b!=0) {
                                    z++;
                                    printf("%d - %d = %d\n",i,j,i*j);
                                }
                            }
                        }
                    }
                    printf("\nLOL %i formas distintas\n\n",z);//la cantidad de formas que dan el numero
                    if(z>=1) {
                        printf("Si es vampiro");
                    }
                }
                if(z==0) {
                    printf("No es vampiro");
                }
            } else {
                printf("No es vampiro");
            }
            m=tolower(getchar());
            fflush(stdin);
        } while(m!='.'&&x1!=0);//salir de los casos
        printf("\n\nPara salir 's' del programa\n");
        n=tolower(getchar());
        fflush(stdin);
    } while(n!='s');
    system("pause");
    return (EXIT_SUCCESS);
}

int mejora(int a) {//cuenta lo digitos en esta funcion
    int i,v[10],cont;
    for(i=0; a!=0; i++) {
        v[i]=a%10;
        a/=10;
    }
    i--;
    return i;
}



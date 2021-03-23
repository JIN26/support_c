/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: XJINX
 *
 * Created on 11 de febrero de 2019, 5:10
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int num=0,cont=0,digito=0,cont2=0,multi=1;
    printf("dame un numero: ");
    scanf("%d",&num);
    while(num>=10) {
        while(num!=0) {
            digito= num%10;
            num=num/10%10;
            cont+=1;
            multi=multi*digito;
        }
        num=multi;
        cont2+=1;
        multi=1;
    }
    printf("contador: %d\n",cont2);
    system("pause");
    return (EXIT_SUCCESS);
}


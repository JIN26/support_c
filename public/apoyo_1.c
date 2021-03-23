/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: XJINX
 *
 * Created on 11 de febrero de 2019, 5:02
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * suma de los numeros pares de 2 a 1000
 */
int main(int argc, char** argv) {
    int i,x;
    char resp;
    do {
        x=0;
        for (i= 0; i <= 1000; i+=2) {
            x += i;
            printf("%i, ",x);
        }
        printf("\n¿quieres entroducir otro numero? S/N\n\n");
        resp=tolower(getchar());
    } while(resp=='s');
    system("pause");
    return (EXIT_SUCCESS);
}


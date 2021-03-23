/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: XJINX
 *
 * Created on 11 de febrero de 2019, 4:54
 */

#include <stdio.h>
#include <stdlib.h>
#include<math.h>
//#include <conio.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int z, resultado, n, resultado1, resultado2, resultadov;
    char resp;
    do {
        printf ("Acontinuacion, digite un numero entero positivo que se encuentre entre 0 y 10000: ");
        scanf("%d", &z);
        if (z>=0 && z<=10000 ) {
            printf ("El numero es: %d\n", z);
        } else {
            printf ("Por favor ingrese un numero que sea valido.\n");
        }
        resultado=0;
        resultadov=0;
        for (n=0; n<=z; n++) {
            resultado=(z-n)*(z-n);
            if (n%2==0) {
                resultadov=resultadov+resultado;
            } else {
                resultadov=resultadov-resultado;
            }
        }
        printf ("Resultado V: %d\n", resultadov);
        printf ("Otra vez? S/N\n\n");
        resp=tolower(getchar());
    } while (resp=='s');
    system("pause");
    return (EXIT_SUCCESS);
}


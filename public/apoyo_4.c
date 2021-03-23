/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: XJINX
 *
 * Created on 11 de febrero de 2019, 5:41
 */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/*
 * un cronometro que se detenga al oprimir un boton
 */
int main(int argc, char** argv) {//FUNCIONA PRESIONANDO SUPRIMIR.
    char n, resp=0, c=0;
    int x,y,z,a;
    a=1000;

    for(x=0; x<24; x++) {
        for(y=0; y<=59; y++) {
            for(z=0; z<=59; z++) {
                printf("idiota durante %02d:%02d:%02d\r",x,y,z);
                Sleep(a);
                if(GetAsyncKeyState(VK_DELETE)){
                    printf("\r\nEn pausa\n");
                    while(!GetAsyncKeyState(VK_DELETE)) Sleep(100);
                }
            if(GetAsyncKeyState(VK_ESCAPE))
                return (EXIT_SUCCESS);
            }
        }
    }
    system("pause");
    return (EXIT_SUCCESS);
}


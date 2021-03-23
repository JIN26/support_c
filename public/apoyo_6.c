/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: XJINX
 *
 * Created on 11 de febrero de 2019, 6:22
 */

#include <stdio.h>
#include <stdlib.h>
//#include<conio.h>
/*
 * ordena los numeros de un vector
 */
int main(int argc, char** argv) {
    int array[5] = {4,3,5,1,2};
    int i,j,aux;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(array[j] > array[j+1]){
                aux = array[j];
                array[j] = array[j+1];
                array[j+1] = aux;
            }
        }
    }

    for(i=0;i<5;i++){
        printf("%i ",array[i]);
    }	

    getchar();
    return (EXIT_SUCCESS);
}


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: XJINX
 *
 * Created on 1 de enero de 2013, 3:35
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * muestra matriz
 */
int main(int argc, char** argv) {
    
    int M [6][5],i,j,n;
    printf("\nIngrese su numero:  ");
    scanf("%d",&n);

    for(i=0;i<6;i++){
        for(j=0;j<5;j++){			
            M[i][j]=n;
            printf("%d\t",M[i][j]);
        }	
        printf("\n");
    }
//printf("%d\t",M[i][j]); 
//printf("\n")
	
    return (EXIT_SUCCESS);
}


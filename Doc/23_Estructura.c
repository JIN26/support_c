/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANGEL
 *
 * Created on 7 de febrero de 2019, 02:06 AM
 */

#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

/*
 * 
 */
float procesar(float radio);	 /* prototipo de funcion */
int main(int argc, char** argv) {
    
    int n, i=0;			// declaracion de variables
	
    struct {
        char texto[20];
        float radio;
        float area;
    } circulo [10]; 			// declaracion de variable tipo estructura 
	
    printf("para PARAR, introducir FIN en el identificador\n");
    printf("\n \b\r\t\aIdentificador: ");
    scanf("%s",circulo[i].texto);
    while (tolower(circulo[i].texto[0]) != 'f'
            || tolower(circulo[i].texto[1]) != 'i'
            || tolower(circulo[i].texto[2]) != 'n'){
        printf("Radio = ? ");
        scanf("%f", &circulo[i].radio);
        
        if(circulo[i].radio <0)
            circulo[i].area = 0;
	else
            circulo[i].area = procesar(circulo[i].radio);
        
        i++;
        printf("\nIdentificador: ");
        // siguiente conjunto de datos
        scanf("%s", circulo[i].texto);
    }		
    n = --i;	//El mayor valor de i
    
    /* presentar los elementos del array */
    printf("\n\nRelacion de resultados\n\n");
    for(i = 0; i <=n; i++)
        printf("%s	radio = %f	area = %f\n",circulo[i].texto,circulo[i].radio,circulo[i].area);
    
    return (EXIT_SUCCESS);
}

float procesar(float r){// definicion de funcion 
    
    float a;    // declaracion de variables
	
    a = PI * r * r;
    return (a);
}	
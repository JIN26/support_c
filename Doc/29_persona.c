/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: XJINX
 *
 * Created on 1 de enero de 2013, 4:22
 */

/*
    Persona en una matriz
*/

#include <stdio.h>
#include <stdlib.h>
#define map 11

/*
 * 
 */
int main(int argc, char** argv) {
    char n;
    int h,i,j;
    int a,b,c,d;
    char base[12][51];
    char usuario[4][6]={{' ',' ',' ','o',' '},
                        {' ','�','/','|',')'},
                        {' ',' ','(',' ',')'}};

    char enemigo[3][5]={{' ','<','>',' ',' '},
                        {'(','(',')',')',' '},
                        {'(',' ',' ',')',' '}};

    char enemigo1[3][5]={{' ','.','.',' ',' '},
                         {'(','{','}',')',' '},
                         {'(',' ',' ',')',' '}};
     do{
        system("cls");
        for(h=0;h<=4;h++){
            for(i=0;i<=2;i++){
                for(j=0;j<=50;j++){
                    printf("%c",enemigo1[i][j]);
                }	
                for(j=0;j<=4;j++){
                    if(a==1){
                        printf("%c",usuario[i][j]);
                    }
                    if(a==2){
                        printf("%c",usuario[i][j]);
                    }
                }
                printf("\n");
            }
            for(j=0;j<=50;j++){
                base[h][j]='0';
                printf("%c",base[h][j]);
            }
        printf("\n");
        }
        printf("mover: ");
        scanf("%d",&a);
    }while(a!=9);
    n=tolower(getchar());
    fflush(stdin);
    return (EXIT_SUCCESS);
}


/*                    
       <>
      (())  � �
      (  )
      
       ..
      ({})  � �
      (��)
 
       ��
      ([])   �
      (  )
 
 �, @;
 
        o  
�  �   /|\  
       / \
  
        �  
  -�   /|\  
       / \
    
        @ 
   -�  /|\  
       / \
    
*/
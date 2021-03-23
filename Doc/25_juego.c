/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: XJINX
 *
 * Created on 1 de enero de 2013, 3:46
 */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define f 16
#define c 16
#define pause 100

/*
 * desplazamiento de una variable en la matriz
 */
int enemy(int evil);

int main(int argc, char** argv) {
    int perrito[f][c]={  //0   1   2   3   4   5   6   7   8   9   10  11  12  13  14
                        {201,205,205,205,205,205,205,205,205,205,205,205,205,205,187},//0	
                        {186,100,100,100,100,100,100,100,100,100,100,100,100,100,186},//1
                        {186,100,100,100,100,100,100,100,100,100,100,100,100,100,186},//2
                        {186,100,100,100,100,100,100,100,100,100,100,100,100,100,186},//3
                        {186,100,100,100,100,100,100,100,100,100,100,100,100,100,186},//4
                        {186,100,100,100,100,100,100,100,100,100,100,100,100,100,186},//5
                        {186,100,100,100,100,100,100,100,100,100,100,100,100,100,186},//6
                        {186,100,100,100,100,100,100,100,100,100,100,100,100,100,186},//7
                        {186,100,100,100,100,100,100,100,100,100,100,100,100,100,186},//8
                        {186,100,100,100,100,100,100,100,100,100,100,100,100,100,186},//9
                        {186,100,100,100,100,100,100,100,100,100,100,100,100,100,186},//10
                        {186,100,100,100,100,100,100,100,100,100,100,100,100,100,186},//11
                        {186,100,100,100,100,100,100,100,100,100,100,100,100,100,186},//12
                        {186,100,100,100,100,100,100,100,100,100,100,100,100,100,186},//13
                        {200,205,205,205,205,205,205,205,205,205,205,205,205,205,188},//14
                    };
    int i,j,gf=1,gc=1,gatito[gf][gc];
    int evil=rand()%2;

    for(;;){	
        system("cls");
        for(i=0;i<f;i++){
            for(j=0;j<c;j++){
                perrito[gf][gc]=002;
                if(perrito[i][j]==100){
                    perrito[i][j]=32;
                }
                printf("%c",perrito[i][j]);
            }
            printf("\n");
        }
        enemy(evil);
        Sleep(pause);
        if(GetAsyncKeyState(VK_UP)){
            if(perrito[gf-1][gc]!=205){
                perrito[gf][gc]=100;
                gf--;
            }
        }
         if(GetAsyncKeyState(VK_DOWN)){
             if(perrito[gf+1][gc]!=205){
                 perrito[gf][gc]=100;
                 gf++;
            }
        }
        if(GetAsyncKeyState(VK_LEFT)){
            if(perrito[gf][gc-1]!=186){
                perrito[gf][gc]=100;
                gc--;
            }
        }
        if(GetAsyncKeyState(VK_RIGHT)){
            if(perrito[gf][gc+1]!=186){
                perrito[gf][gc]=100;
                gc++;
            }
        }
    }
    return (EXIT_SUCCESS);
}


int enemy(int evil){
    int pf=7,pg=7;	
}


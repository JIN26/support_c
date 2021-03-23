/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: XJINX
 *
 * Created on 11 de febrero de 2019, 5:21
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
int x1,x2,x3,x4,aux1,resta,mayor,total,cont=0,n2;
    printf("numero: ");
    scanf("%d",&n2);
    aux1=n2;
    x1=aux1%10;
    aux1=aux1/10;//4//987
    x2=aux1%10;
    aux1=aux1/10;//7//98
    x3=aux1%10;
    aux1=aux1/10;//8//9
    x4=aux1;
    if(x1>=x2) {
        if(x1>=x3) {
            if(x1>=x4) {
                if(x2>=x3) {
                    if(x2>=x4) {
                        if(x3>=x4) {
                            mayor=(x1*1000)+(x2*100)+(x3*10)+(x4*1);
                            resta=(x4*1000)+(x3*100)+(x2*10)+(x1*1);
                        } else {
                            mayor=(x1*1000)+(x2*100)+(x4*10)+(x3*1);
                            resta=(x3*1000)+(x4*100)+(x2*10)+(x1*1);
                        }
                    } else {
                        mayor=(x1*1000)+(x4*100)+(x2*10)+(x3*1);
                        resta=(x3*1000)+(x2*100)+(x4*10)+(x1*1);
                    }
                } else if(x3>=x4) {
                    if(x2>=x4) {
                        mayor=(x1*1000)+(x3*100)+(x2*10)+(x4*1);
                        resta=(x4*1000)+(x2*100)+(x3*10)+(x1*1);
                    } else {
                        mayor=(x1*1000)+(x3*100)+(x4*10)+(x2*1);
                        resta=(x2*1000)+(x4*100)+(x3*10)+(x1*1);
                    }
                } else {
                    mayor=(x1*1000)+(x4*100)+(x3*10)+(x2*1);
                    resta=(x2*1000)+(x3*100)+(x4*10)+(x1*1);
                }
            } else if(x2>=x3) {
                mayor=(x4*1000)+(x1*100)+(x2*10)+(x3*1);
                resta=(x3*1000)+(x2*100)+(x1*10)+(x4*1);
            } else {
                mayor=(x4*1000)+(x1*100)+(x3*10)+(x2*1);
                resta=(x2*1000)+(x3*100)+(x1*10)+(x4*1);
            }
        } else if(x3>=x4) {
            if(x1>=x4) {
                if(x2>=x4) {
                    mayor=(x3*1000)+(x1*100)+(x2*10)+(x4*1);
                    resta=(x4*1000)+(x2*100)+(x1*10)+(x3*1);
                } else {
                    mayor=(x3*1000)+(x1*100)+(x4*10)+(x2*1);
                    resta=(x2*1000)+(x4*100)+(x1*10)+(x3*1);
                }
            } else {
                mayor=(x3*1000)+(x4*100)+(x1*10)+(x2*1);
                resta=(x2*1000)+(x1*100)+(x4*10)+(x3*1);
            }
        } else {
            mayor=(x4*1000)+(x3*100)+(x1*10)+(x2*1);
            resta=(x2*1000)+(x1*100)+(x3*10)+(x4*1);
        }
    } else {
        if(x2>=x3) {
            if(x2>=x4) {
                if(x1>=x3) {
                    if(x1>=x4) {
                        if(x3>=x4) {
                            mayor=(x2*1000)+(x1*100)+(x3*10)+(x4*1);
                            resta=(x4*1000)+(x3*100)+(x1*10)+(x2*1);
                        } else {
                            mayor=(x2*1000)+(x1*100)+(x4*10)+(x3*1);
                            resta=(x3*1000)+(x4*100)+(x1*10)+(x2*1);
                        }
                    } else {
                        mayor=(x2*1000)+(x4*100)+(x1*10)+(x3*1);
                        resta=(x3*1000)+(x1*100)+(x4*10)+(x2*1);
                    }
                } else if(x3>=x4) {
                    if(x1>=x4) {
                        mayor=(x2*1000)+(x3*100)+(x1*10)+(x4*1);
                        resta=(x4*1000)+(x1*100)+(x3*10)+(x2*1);
                    } else {
                        mayor=(x2*1000)+(x3*100)+(x4*10)+(x1*1);
                        resta=(x1*1000)+(x4*100)+(x3*10)+(x2*1);
                    }
                } else {
                    mayor=(x2*1000)+(x4*100)+(x3*10)+(x1*1);
                    resta=(x1*1000)+(x3*100)+(x4*10)+(x2*1);
                }
            } else if(x1>=x3) {
                mayor=(x4*1000)+(x2*100)+(x1*10)+(x3*1);
                resta=(x3*1000)+(x1*100)+(x2*10)+(x4*1);
                } else {               
                mayor=(x4*1000)+(x2*100)+(x3*10)+(x1*1);               
                resta=(x1*1000)+(x3*100)+(x2*10)+(x4*1);
                }
        } else if(x3>=x4) {
            if(x1>=x4) {
                if(x2>=x4) { 
                    mayor=(x3*1000)+(x2*100)+(x4*10)+(x1*1);
                    resta=(x1*1000)+(x4*100)+(x2*10)+(x3*1);
                } else {
                    mayor=(x3*1000)+(x4*100)+(x2*10)+(x1*1);
                    resta=(x1*1000)+(x2*100)+(x4*10)+(x3*1);
                }
            } else {
                mayor=(x3*1000)+(x2*100)+(x1*10)+(x4*1);
                resta=(x4*1000)+(x1*100)+(x2*10)+(x3*1);
            }
        } else {
            mayor=(x4*1000)+(x3*100)+(x2*10)+(x1*1);
            resta=(x1*1000)+(x2*100)+(x3*10)+(x4*1);
        }
    }
    printf("\n%.04d y %.04d",mayor,resta);
    getchar();
    return (EXIT_SUCCESS);
}


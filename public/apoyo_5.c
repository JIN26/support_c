/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: XJINX
 *
 * Created on 11 de febrero de 2019, 5:58
 */

#include <stdio.h>
#include <stdlib.h>
#include<math.h>
//#include<conio.h>
/*
 * numero kaprekar
 */
int main(int argc, char** argv) {
    long num;
    long x,a;
    long cont=0,i,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10;

    do {
        system("cls");
        printf("digite un numero mayor o igual que 1 y menor que 65536: ");
        scanf("%li",&num);
        if(num<1 || num>65535) {
            system("cls");
            printf("el numero digitado no cumple con lo requerido.");
            getchar();
        }
    } while(num<1 || num>65535);
    x=num*num;
    a=x;
    //printf("\n%li",x);
    do {
        a=a/10;
        cont++;
    } while(a!=0);

    //printf("\n%d",cont);
    x=num*num;
    if(cont==1) {
        printf("%li NO ES NUMERO DE KAPREKAR",num);
    }
    if(cont==2) {
        x1=x%10;
        x=x/10;
        x2=x%10;
        if(x2+x1==num) {
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else {
            printf("%li NO ES NUMERO DE KAPREKAR",num);
        }
    }
    if(cont==3) {
        x1=x%10;
        x=x/10;
        x2=x%10;
        x=x/10;
        x3=x%10;
        x=num*num;
        if((((x3*10)+x2)+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if(x3+((x2*10)+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else {
            system("cls");
            printf("%li NO ES NUMERO DE KAPREKAR",num);
        }
    }
    if(cont==4) {
        x1=x%10;
        x=x/10;
        x2=x%10;
        x=x/10;
        x3=x%10;
        x=x/10;
        x4=x%10;
        if(x4+(x3*100+x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x4*10+x3)+(x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x4*100+x3*10+x2)+x1==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else {
            system("cls");
            printf("%li NO ES NUMERO DE KAPREKAR",num);
        }
    }
    if(cont==5) {
        x1=x%10;
        x=x/10;
        x2=x%10;
        x=x/10;
        x3=x%10;
        x=x/10;
        x4=x%10;
        x=x/10;
        x5=x%10;
        if(x5+(x4*1000+x3*100+x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x5*10+x4)+(x3*100+x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x5*100+x4*10+x3)+(x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x5*1000+x4*100+x3*10+x2)+x1==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else {
            system("cls");
            printf("%li NO ES NUMERO DE KAPREKAR",num);
        }
    }
    if(cont==6) {
        x1=x%10;
        x=x/10;
        x2=x%10;
        x=x/10;
        x3=x%10;
        x=x/10;
        x4=x%10;
        x=x/10;
        x5=x%10;
        x=x/10;
        x6=x%10;
        if(x6+(x5*10000+x4*1000+x3*100+x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x6*10+x5)+(x4*1000+x3*100+x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x6*100+x5*10+x4)+(x3*100+x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x6*1000+x5*100+x4*10+x3)+(x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x6*1000+x5*100+x4*10+x3+x2)+x1==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else {
            system("cls");
            printf("%li NO ES NUMERO DE KAPREKAR",num);
        }
    }
    if(cont==7) {
        x1=x%10;
        x=x/10;
        x2=x%10;
        x=x/10;
        x3=x%10;
        x=x/10;
        x4=x%10;
        x=x/10;
        x5=x%10;
        x=x/10;
        x6=x%10;
        x=x/10;
        x7=x%10;
        if(x7+(x6*100000+x5*10000+x4*1000+x3*100+x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x7*10+x6)+(x5*10000+x4*1000+x3*100+x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x7*100+x6*10+x5)+(x4*1000+x3*100+x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x7*1000+x6*100+x5*10+x4)+(x3*100+x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x7*10000+x6*1000+x5*100+x4*10+x3)+(x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x7*100000+x6*10000+x5*1000+x4*100+x3*10+x2)+x1==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else {
            system("cls");
            printf("%li NO ES NUMERO DE KAPREKAR",num);
        }
    }
    if(cont==8) {
        x1=x%10;
        x=x/10;
        x2=x%10;
        x=x/10;
        x3=x%10;
        x=x/10;
        x4=x%10;
        x=x/10;
        x5=x%10;
        x=x/10;
        x6=x%10;
        x=x/10;
        x7=x%10;
        x=x/10;
        x8=x%10;
        if(x8+(x7*1000000+x6*100000+x5*10000+x4*1000+x3*100+x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x8*10+x7)+(x6*100000+x5*10000+x4*1000+x3*100+x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x8*100+x7*10+x6)+(x5*10000+x4*1000+x3*100+x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x8*1000+x7*100+x6*10+x5)+(x4*1000+x3*100+x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x8*10000+x7*1000+x6*100+x5*10+x4)+(x3*100+x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x8*100000+x7*10000+x6*1000+x5*100+x4*10+x3)+(x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x8*1000000+x7*100000+x6*10000+x5*1000+x4*100+x3*10+x2)+x1==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else {
            system("cls");
            printf("%li NO ES NUMERO DE KAPREKAR",num);
        }
    }
    if(cont==9) {
        x1=x%10;
        x=x/10;
        x2=x%10;
        x=x/10;
        x3=x%10;
        x=x/10;
        x4=x%10;
        x=x/10;
        x5=x%10;
        x=x/10;
        x6=x%10;
        x=x/10;
        x7=x%10;
        x=x/10;
        x8=x%10;
        x=x/10;
        x9=x%10;
        if(x9+(x8*10000000+x7*1000000+x6*100000+x5*10000+x4*1000+x3*100+x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x9*10+x8)+(x7*1000000+x6*100000+x5*10000+x4*1000+x3*100+x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x9*100+x8*10+x7)+(x6*100000+x5*10000+x4*1000+x3*100+x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x9*1000+x8*100+x7*10+x6)+(x5*10000+x4*1000+x3*100+x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x9*10000+x8*1000+x7*100+x6*10+x5)+(x4*1000+x3*100+x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x9*100000+x8*10000+x7*1000+x6*100+x5*10+x4)+(x3*100+x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x9*1000000+x8*100000+x7*10000+x6*1000+x5*100+x4*10+x3)+(x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x9*10000000+x8*1000000+x7*100000+x6*10000+x5*1000+x4*100+x3*10+x2)+x1==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else {
            system("cls");
            printf("%li NO ES NUMERO DE KAPREKAR",num);
        }
    }
    if(cont==10) {
        if(x10+(x9*100000000+x8*10000000+x7*1000000+x6*100000+x5*10000+x4*1000+x3*100+x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x10*10+x9)+(x8*10000000+x7*1000000+x6*100000+x5*10000+x4*1000+x3*100+x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x10*100+x9*10+x8)+(x7*1000000+x6*100000+x5*10000+x4*1000+x3*100+x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x10*1000+x9*100+x8*10+x7)+(x6*100000+x5*10000+x4*1000+x3*100+x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x10*10000+x9*1000+x8*100+x7*10+x6)+(x5*10000+x4*1000+x3*100+x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x10*100000+x9*10000+x8*1000+x7*100+x6*10+x5)+(x4*1000+x3*100+x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x10*1000000+x9*100000+x8*10000+x7*1000+x6*100+x5*10+x4)+(x3*100+x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x10*10000000+x9*1000000+x8*100000+x7*10000+x6*1000+x5*100+x4*10+x3)+(x2*10+x1)==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else if((x10*100000000+x9*10000000+x8*1000000+x7*100000+x6*10000+x5*1000+x4*100+x3*10+x2)+x1==num) {
            system("cls");
            printf("%li SI ES NUMERO DE KAPREKAR",num);
        } else {
            system("cls");
            printf("NO ES NUMERO DE KAPREKAR",num);
        }
    }
    getchar();
    return (EXIT_SUCCESS);
}


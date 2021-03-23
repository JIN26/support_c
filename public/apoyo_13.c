/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: XJINX
 *
 * Created on 1 de enero de 2013, 2:58
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Numero smith 
 * Persistencia multiplicativa
 */
int main(int argc, char** argv) {
    char n;
    int aux=0,num=0,caso=0,i=0;

    for(;;){
        system("cls");
        printf("\t\tProblema\n\n\t1.Numero  de Smith\n\t2.Persistencia multiplicativa\n\t3.Salir\n Caso:_ ");
        scanf("%d",&caso);
        switch(caso){
            case 1:
                do {
                    int sum=0,sumprimos=0,num2=0,aux2=0;
                    aux=num=0;

                    system("cls");
                    printf("numero Smith: ");
                    scanf("%d",&num);
                    num2=num;//se hace una copia para a una sacarle los numeros primos y a la otra solo hacerle la sumatoria
                    do{//parte de numeros primos
                        for(i=2;i<=num2;i++){
                            if(num2 % i == 0) {//se saca los numeros primos
                                num2/=i;
                                if(i>10){//si hay un numero primo mayor a diez vuelve a descomponerlo ejemplo 11 == 1+1 		
                                    while(i!=0){//descomposicion
                                        aux2=i%10;
                                        i/=10;
                                        sumprimos+=aux2;//contador de sumas
                                    }
                                }
                                sumprimos+=i;
                                break;//sale de la condicion apenas lega aqui
                            }
                        }
                    }while(num2!=1);

                    while(num!=0){//parte sumatoria solo descompone en numero y suma cada uno de sus parte ejemplo 123 == 1+2+3 =6;
                        aux=num%10;
                        num/=10;
                        sum+=aux;
                    }	
                    printf("\nla suma : %d\n\nla suma de los primos es:%d\n",sum,sumprimos);
                    if(sumprimos==sum){//si la simatoria y la suma de los numeros primos es igual es un numero smicth
                        printf("\nEs un numero smith!!\n");		
                    }
                    printf("\nquiere salir y/n");
                    fflush(stdin);//limpia el buffer para que no tengas problemas al pedir variable char
                    n=tolower(getchar());//escanea el numero para salir
                } while(n != 'y');
                break;

            case 2:
                do {
                    int mul=1;
                    aux=num=0;

                    system("cls");
                    printf("numero de la persistensia multiplicativa: ");
                    scanf("%d",&num);		
                    do{
                        mul=1;//contador
                        while(num!=0){// se divide el numero y se multiplica 123 == 5*2*3 =30;
                            aux=num%10;
                            num/=10;
                            mul*=aux;
                            if(mul==0){//si en el numero hay un zero se entiende que toda la multiplicacion va a dar zero por que todo numero multiplicado por zero a zero
                                break;//al saber eso sale del ciclo
                            }
                        }	
                        num=mul;
                    }while(mul>10);

                    printf("\nEl multiplicacion final es: %d\n\n",mul);
                    printf("quiere salir y/n: ");
                    fflush(stdin);
                    n=tolower(getchar());//pide el numero para salir del caso
                } while(n != 'y');
                break;
            case 3:
                do{
                    system("cls");
                    printf("seguro que quiere salir y/n: ");
                    fflush(stdin);
                    n=tolower(getchar());
                    if(n=='y'){
                        exit(0);// sale del programa sin importar en que parte del codigo este 
                    }
                } while(n != 'n');
                break;
        }
    }
    return (EXIT_SUCCESS);
}


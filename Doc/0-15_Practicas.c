/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: JIN26
 *
 * Created on 21 de enero de 2019, 19:31
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

/*
 * 
 */
int primo(int a);
int fact(int num);
int practica();
int main (int argc, char** argv) {
  char n;
  int x,y,z,i;
  do {
    system("cls");
    printf("\tPractica 1\n\tPractica 2\n\tPractica 3\n\tPractica 4\n\tPractica 5\n\tPractica 6\n\tPractica 7\n\tPractica 8\n\tPractica 9\n\tPractica 10\n\t");
    scanf("%d",&x);
    switch(x) {
      case 1://prueba a suma facil
        do {
          system("cls");
          printf ("introduce el valor de a: ");
          scanf ("%i",&x);
          printf ("el valor de a es: %i.\n",x);
          printf ("introduce el valor de b: ");
          scanf ("%i",&y);
          printf ("el valor de b es: %i.\n",y);
          i=x + y;
          printf ("el nuevo valor de c es: %i.\n",i);
          n=tolower(getch());
          fflush(stdin);
        } while(n!='.');
        break;
      case 2://acierta un numero de 1 a 10
        do {
          system("cls");
          x=9;
          printf("acierta el numero x!!.\nintroduce un valor: ");
          scanf("%i",&y);
          if(x==y) {
            printf("acertaste !!.\n");
          } else {
            printf("no as acertado intentalo de nuevo!!.\n");
          }
          n=tolower(getch());
          fflush(stdin);
        } while(n!='.');
        break;
      case 3://saber si el numero es par o impar
        do {
          system("cls");
          printf("introducir un numero: ");
          scanf("%i",&x);
          if(x%2==0) {
            printf ("el valor es par %i\n",x);
          } else {
            printf("el valor es impar %i\n",x);
          }
          n=tolower(getch());
          fflush(stdin);
        } while(n!='.');
        break;
      case 4://calcular el numero mayor y menor de tres numeros
        do {
          system("cls");
          int max,menor;
          printf("introduce el valor de x: ");
          scanf("%i",&x);
          printf("introduce el valor de y: ");
          scanf("%i",&y);
          printf("introduce el valor de z: ");
          scanf("%i",&z);
          if(x>y) {
            if(x>z) {
              max=x;
              if(z<y) {
                menor=z;
              } else {
                menor=y;
              }
            } else {
              max=z;
              if(x<y) {
                menor=x;
              } else {
                menor=y;
              }
            }
          }
          if(y>x) {
            if(y>z) {
              max=y;
              if(z<x) {
                menor=z;
              } else {
                menor=x;
              }
            } else {
              max=z;
              if(x<y) {
                menor=x;
              } else {
                menor=y;
              }
            }
          }
          printf("\n\nel valor maximo es: %i.\n",max);
          printf("el valor minimo es: %i.\n",menor);
          n=tolower(getch());
          fflush(stdin);
        } while (n!='.');
        break;
      case 5://calcule un numero entre 1 y 7 y devuelva en dias de la semana ejemplo lune 1, martes 2 etc
        do {
          system("cls");
          printf ("introduce un numero entre 1 y 7: ");
          scanf ("%i",&x);
          if (x==1) {
            printf ("\nlunes\n");
          } else {
            if (x==2) {
              printf ("\nmartes\n");
            } else {
              if (x==3) {
                printf ("\nmiercoles\n");
              } else {
                if (x==4) {
                  printf ("\njueves\n");
                } else {
                  if (x==5) {
                    printf ("\nviernes\n");
                  } else {
                    if (x==6) {
                      printf ("\nsabado\n");
                    } else {
                      if(x==7) {
                        printf ("\ndomingo\n");
                      } else {
                        printf("error numero invalido");
                      }
                    }
                  }
                }
              }
            }
          }
          n=tolower(getch());
          fflush(stdin);
        } while(n!='.');
        break;
      case 6:// tre numeros ,hora, minuto,segundo y devuelva la hora que sera dentro de un segundo, controlando que la hora sea correcta
        do {
          system("cls");
          int h,m,s;
          printf("introduce una hora:");
          scanf("%i",&h);
          printf("introduce un minuto:");
          scanf("%i",&m);
          printf("introduce un segundo:");
          scanf("%i",&s);
          if(h<=23 && m<=59 && s<=59) {
            s += 1;
            if(s==60) {
              m += 1;
              s = 0;
              if(m==60) {
                h += 1;
                m=0;
                if(h==24) {
                  h = 0;
                }
              }
            }
            printf("\nla hora es %i:%i:%i.\n",h,m,s);
          } else {
            printf("\nla hora es incorrecta\n");
          }
          n=tolower(getch());
        } while(n!='.');
        break;
      case 7://sumatoria de los numeros pares de 2 a 1000
        do {
          system("cls");
          printf("suma de los numeros pares de 2 a 1000\n");
          for (i= 2; i <= 2000; i+=2) {
            x += i;
          }
          printf("el resultado es:%d",x);
          n=tolower(getch());
          fflush(stdin);
        } while(n!='.');
        break;
      case 8://los numero entre un numero y otro
        do {
          system("cls");
          printf("introdusca un numero: ");
          scanf("%d",&x);
          printf("\nintroduce el segundo numero: ");
          scanf("%d",&y);
          if(x<y) {
            for (x=x; x<=y; x++) {
              printf("%d,",x);
            }
          }
          if(x>y) {
            for(x=x; x>=y; x--) {
              printf("%d,",x);
            }
          }
          n=tolower(getch());
          fflush(stdin);
          system("cls");
        } while (n!='.');
        break;
      case 9://bucles anidados
        do {
          system("cls");
          printf("\tpara salir de la tabla '.'\n\n\tpara salir del programa 11\n\n\tintrodusca un tabla de multiplicar de 1 a 10\n\n\t");
          scanf("%d",&y);
          switch(y) {
            case 1:
              system("cls");
              do {
                x=y;
                printf("\ntabla %d\n",x);
                for(i=1; i<=10; i++) {
                  printf("\n%d*%d=%d",x,i,x*i);
                }
                n=tolower(getch());
                system("cls");
              } while(n!='.');
              break;
            case 2:
              system("cls");
              do {
                x=y;
                printf("\ntabla %d\n",x);
                for(i=1; i<=10; i++) {
                  printf("\n%d*%d=%d",x,i,x*i);
                }
                n=tolower(getch());
                system("cls");
              } while(n!='.');
              break;
            case 3:
              system("cls");
              do {
                x=y;
                printf("\ntabla %d\n",x);
                for(i=1; i<=10; i++) {
                  printf("\n%d*%d=%d",x,i,x*i);
                }
                n=tolower(getch());
                system("cls");
              } while(n!='.');
              break;
            case 4:
              system("cls");
              do {
                x=y;
                printf("\ntabla %d\n",x);
                for(i=1; i<=10; i++) {
                  printf("\n%d*%d=%d",x,i,x*i);
                }
                n=tolower(getch());
                system("cls");
              } while(n!='.');
              break;
            case 5:
              system("cls");
              do {
                x=y;
                printf("\ntabla %d\n",x);
                for(i=1; i<=10; i++) {
                  printf("\n%d*%d=%d",x,i,x*i);
                }
                n=tolower(getch());
                system("cls");
              } while(n!='.');
              break;
            case 6:
              system("cls");
              do {
                x=y;
                printf("\ntabla %d\n",x);
                for(i=1; i<=10; i++) {
                  printf("\n%d*%d=%d",x,i,x*i);
                }
                n=tolower(getch());
                system("cls");
              } while(n!='.');
              break;
            case 7:
              system("cls");
              do {
                x=y;
                printf("\ntabla %d\n",x);
                for(i=1; i<=10; i++) {
                  printf("\n%d*%d=%d",x,i,x*i);
                }
                n=tolower(getch());
                system("cls");
              } while(n!='.');
              break;
            case 8:
              system("cls");
              do {
                x=y;
                printf("\ntabla %d\n",x);
                for(i=1; i<=10; i++) {
                  printf("\n%d*%d=%d",x,i,x*i);
                }
                n=tolower(getch());
                system("cls");
              } while(n!='.');
              break;
            case 9:
              system("cls");
              do {
                x=y;
                printf("\ntabla %d\n",x);
                for(i=1; i<=10; i++) {
                  printf("\n%d*%d=%d",x,i,x*i);
                }
                n=tolower(getch());
                system("cls");
              } while(n!='.');
              break;
            case 10:
              system("cls");
              do {
                x=y;
                printf("\ntabla %d\n",x);
                for(i=1; i<=10; i++) {
                  printf("\n%d*%d=%d",x,i,x*i);
                }
                n=tolower(getch());
                system("cls");
              } while(n!='.');
              break;
            case 11:
              system("cls");
              printf("seguro que decea salir S/N");
              break;
            default:
              printf("error numero invalido.\n");
          }
          n=tolower(getch());
          system("cls");
        } while(n!='s');
      break;
      case 10://hacer un cronometro que empice cuando pulse enter
        system("cls");
        practica();
        break;
      case 11://factorial de un numero 
        do {
          printf("introduce un numero: ");
          scanf("%d",&x);
          y=1;
          for(i=1; i<=x; i++) {
            y=y*i;
          }
          printf("%d",y);    
          n=tolower(getch());
          fflush(stdin);
          system("cls");
        } while (n!='.');
        break;
      case 12: //programa sobre: suma dos numeros y resta uno tantes veces quiera el usuario 
        do {
          system("cls");
          i=0;
          printf("numero: ");
          scanf("%d",&y);
          for(x=1; x<=y; x++) {
            if(x%3!=0&&x!=0) {
              i+=x;
              printf("+%d",x);
            }
            if(x%3==0&&x!=0) {
              i-=x;
              printf("-%d",x);
            }
          }
          printf("=%d",i);
          n=tolower(getch());
          fflush(stdin);
        } while (n!='.');
        break;
      case 13://Numeros fibonacci
        do {
          system("cls");
          int num=0;
          system("cls");
          printf("numero: ");
          scanf("%d",&num);
          x=0;
          y=1;
          printf("0 ");
          if(num>=2) {
            printf("1 ");
          }
          for(i=3; i<=num; i++) {
            z=x+y;
            printf("%d ",z);
            x=y;
            y=z;
          }
          n=tolower(getch());
          fflush(stdin);
        } while (n!='.');
        break;
      case 14://comprueba si un numero es primo con function
        do {
          system("cls");
          printf("numero: ");
          scanf("%d",&x);
          z=primo(x);
          if(z==0) {
            printf("es primo");
          } else {
            printf("no es primo");
          }
          n=tolower(getch());
          fflush(stdin);
        } while (n!='.');
        break;
      case 15: //factorial with bucle and function
        do {
            printf("numero: ");
            scanf("%d",&x);
            printf("numero2: ");
            scanf("%d",&y);
            z=fact(x);
            printf("\nresultado:%d",z);
            z=fact(y);
            printf("\nresultado2:%d",z);
            n=tolower(getch());
            fflush(stdin);
        } while(n!='.');
        system("pause");
        return (EXIT_SUCCESS);
        break;
      case 16://numero 6174

        break;
      case 17:

        break;
    }
    n=tolower(getch());
    fflush(stdin);
  } while(n!='s');
  system("pause");
  return (EXIT_SUCCESS);
}
int practica() {
  int x,y,z,i=1000;
  for(x=0; x<24; x++) {
    for(y=0; y<=59; y++) {
      for(z=0; z<=59; z++) {
        printf("idiota durante %02d:%02d:%02d\r",x,y,z);
        Sleep(i);
      }
    }
  }
  return (EXIT_SUCCESS);
}

int fact(int num) {//num=x; luego num=y;
	for(int i=1,j=1; i<=num; i++) {
		j*=i;
	}
	return j;
}

int primo(int a) { //a=x; luego a=y;
    for(int i=2;k=0; i<a && k!=1; i++) {
      if(a%i==0) {
        k++;
      }
    }
    return k;
}
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: XJINX
 *
 * Created on 1 de enero de 2013, 3:12
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 15

/*
 * Juego de sopa de letras
 */
void tablero_incio (int matriz[max][max]);
void desplegar_tablero (int matriz[max][max]);
void ordenar_verificar(int matriz[max][max], char palabra[max]);
void matriz_respuesto (int matriz[max][max], char palabra[13], char lista[max][13]);

int main(int argc, char** argv) {
    srand(time(NULL));
	
    int i=0,j=0,a=0,matriz[max][max];
    char palabra[13] , lista[max][13];
    char  decision,n;
    int opcion;
//igualando a cero todo
    for(i=0;i<max;i++){
        for(j=0;j<max;j++){
            lista[i][j]=0;
            palabra[i]=0;
            matriz[i][j]=0;
        }
    }
    //desplegar_tablero(matriz);
	
//Inicio
    for(;;){

        system("cls");
        printf("	~Bienvenido al juego de la sopa de letra~	");
        printf("\n 1. Modo administrador (elegir las palabras). \n 2. Modo jugador (jugar) \n 3. Salir.");
        printf("\n Que actividad desea hacer?: ");
        scanf("%d", &opcion);

        switch(opcion){
                case 1://Admiinistrador
                    do{
                        system("cls");
                        for(i=0;i<max;i++){
                            printf("%d. ingrese una palabra: ", i+1);
                            fflush(stdin);
                            gets(lista[i]);
                            printf("desea colocar otra palabra (s/n): "),
                            fflush(stdin);
                            decision=tolower(getchar());
                            printf("%c \n",decision);

                            if(decision=='n'){
                                break;
                            }
                        }
                        for(a=0;a<15;a++){	
                        //agregando valores
                            strcpy(palabra, lista[a]);	
                            ordenar_verificar(matriz,palabra);
                        }		
                        desplegar_tablero (matriz);
                        printf("para salir punto ");	
                        n=tolower(getchar());
                    }while(n!='.');
                    break;
        }
    }
    return (EXIT_SUCCESS);
}


void ordenar_verificar (int matriz[max][max], char palabra[max]){

    int x=0,y=0,j=0,van=0,i=strlen(palabra);;
    int direccion=rand()%4;

    switch(direccion){
        case 0:
            x=rand()%max;
            y=rand()%(max-i-1);

            for(j=0;j<i;j++){
                if(matriz[x][y+j]==0){
                    van++;
                }else{
                    if(matriz[x][y+j]==palabra[j]){
                        van++;
                    }
                }
            }
            if(van==i){					
                for(j=0;j<i;j++){
                    matriz[x][y+j]=palabra[j];
                }
            }
            break;
        case 1:
            x=rand()%max;
            y=i+rand()%(max-i+1);

            for(j=0;j<i;j++){
                if(matriz[x][y-j]==0){
                    van++;
                }else{
                    if(matriz[x][y-j]==palabra[j]){
                        van++;
                    }
                }
            }
            if(van==i){					
                for(j=0;j<i;j++){
                    matriz[x][y-j]=palabra[j];	
                }
            }
            break;
        case 2:
            x=rand()%(max-i-1);
            y=rand()%max;

            for(j=0;j<i;j++){
                if(matriz[x+j][y]==0){
                    van++;
                }else{
                    if(matriz[x+j][y]==palabra[j]){
                        van++;
                    }
                }
            }
            if(van==i){
                for(j=0;j<i;j++){
                    matriz[x+j][y]=palabra[j];	
                }
            }
            break;  
        case 3:
            x=i+rand()%(max-i+1);
            y=rand()%max;

            for(j=0;j<i;j++){
                if(matriz[x-j][y]==0){
                            van++;
                }else{
                    if(matriz[x-j][y]==palabra[j]){
                        van++;
                    }
                }
            }
            if(van==i){					
                for(j=0;j<i;j++){
                    matriz[x-j][y]=palabra[j];	
                }
            }
            break;

    }
}

void tablero_incio (int matriz[max][max]){

    int i, j;
    char letra;

    for(i=0;i<max;i++){
        for(j=0;j<max;j++){
            matriz[i][j]=65+rand()%(90-65+1);
        }
    }
}


void desplegar_tablero (int matriz[max][max]) {

    int i, j;

    for(i=0;i<max;i++){
        for(j=0;j<max;j++){
            printf(" %c ",matriz[i][j]);
        }
        printf("\n");
    }
}
	
	


/*



	
	
//Jugador

if(opcion==2){
	int cont1=0;
	i=0;
	j=0;
	
		for(i=0;i<max;i++){
			for(j=0;j<max;j++){
				if(matriz[i][j]==0){
					cont1++;
					printf("%d",cont1);
				}
			}
		}

	if(cont1==225){
	matriz_respuesto(matriz,palabra,lista);
	desplegar_tablero (matriz);
	}
	
}
	
	return 0;
}




void matriz_respuesto (int matriz[max][max], char palabra[13], char lista[max][13]){

	char palabra1[8]="calabaza", palabra2[10]="murcielago", palabra3[9]="esqueleto", palabra4[8]="calavera", palabra5[5]="noche", palabra6[5]="negro";
	char palabra7[4]="luna", palabra8[9]="oscuridad", palabra9[3]="luz", palabra10[7]="naranja", palabra11[7]="disfraz", palabra12[5]="juego";
	char palabra13[5]="truco", palabra14[5]="dulce", palabra15[5]="juego";
	
	int a, i, j;

	strcpy(lista[0], palabra1);
	strcpy(lista[1], palabra2);
	strcpy(lista[2], palabra3);
	strcpy(lista[3], palabra4);
	strcpy(lista[4], palabra5);
	strcpy(lista[5], palabra6);
	strcpy(lista[6], palabra7);
	strcpy(lista[7], palabra8);
	strcpy(lista[8], palabra9);
	strcpy(lista[9], palabra10);
	strcpy(lista[10], palabra11);
	strcpy(lista[11], palabra12);
	strcpy(lista[12], palabra13);
	strcpy(lista[13], palabra14);
	strcpy(lista[14], palabra15);
	

	for(a=0;a<15;a++){	
	//agregando valores
		strcpy(palabra, lista[a]);
		i=strlen(palabra);
		
		int x,y,a,k,van=0;
		int direccion=rand()%4;
		switch(direccion){
			case 0:
				x=rand()%max;
				a=max-i-1;
				y=rand()%a;
				for(j=0;j<i;j++){
					if(matriz[x][y+j]==0){
						van++;
					}
				}
				if(van==i){					
					for(j=0;j<i;j++){
						matriz[x][y+j]=palabra[j];
					}
				}
			break;
			case 1:
				x=rand()%max;
				y=i+rand()%(max-i+1);
				for(j=0;j<i;j++){
					if(matriz[x][y-j]==0){
						van++;
					}
				}
				if(van==i){					
					for(j=max,k=0;k<i;j--,k++){
						matriz[x][y-k]=palabra[k];	
					}
				}
			break;
			case 2:
				a=max-i-1;
				x=rand()%a;
				y=rand()%max;
				for(j=0;j<i;j++){
					if(matriz[x+j][y]==0){
						van++;
					}
				}
				if(van==i){
					for(j=max,k=0;k<i;j--,k++){
						matriz[x+k][y]=palabra[k];	
					}
				}
			break;
			case 3:
				x=i+rand()%(max-i+1);
				y=rand()%max;
				for(j=0;j<i;j++){
					if(matriz[x-j][y]==0){
						van++;
					}
				}
				if(van==i){					
					for(k=0;k<i;k++){
						matriz[x-k][y]=palabra[k];	
					}
				}
			break;
			
		}
	}
	
	
	

}*/



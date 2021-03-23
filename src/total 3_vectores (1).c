#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define T 30 //constante
#define Fil 10
#define Col 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int vector[T],matriz[Fil][Col];
	int x,tam,y,filas,colu,c;
	srand(time(0));
	
	do{
		system("cls");
		printf("\n\t\tCuantos elementos tiene el vector [1 - %d]?: ",T);
		scanf("%d",&tam);		
	}while(tam<0 || tam>T);
	
	//se almacenan elementos en un vector
	for(x=0;x<tam;x++)
		vector[x]=rand()%100; //cargando el vector con numeros aleatorios
	
	//se imprime el vector
	printf("\n\t\tValores almacenados en el vector \n\n");	
    for(x=0;x<tam;x++){
    	printf("\n\t\t %d",vector[x]);
    	if((x+1)%5==0 && x!=0 ){
    		printf("\n\n\t\t");
    		system("PAUSE");
    	}
    }
	
	do{
		system("cls");
		printf("\n\t\tCuantas Filas tiene la Matriz [1 - %d]?: ",Fil);
		scanf("%d",&filas);		
	}while(filas<0 || filas>Fil);	
	do{
		system("cls");
		printf("\n\t\tCuantas Columnas tiene la Matriz [1 - %d]?: ",Col);
		scanf("%d",&colu);		
	}while(colu<0 || colu>Fil);	

	//cargar valores en la matriz por filas
	c=100;
	for(x=0;x<filas;x++){
		for(y=0;y<colu;y++){
			matriz[x][y]=c;
			c++;
		}
	}	
	//imprimir
	system("cls");
	printf("\n\t\t\tPor filas...");
	printf("\n\n\t\t");	
	for(x=0;x<filas;x++){
		printf("\n\t\t");	
		for(y=0;y<colu;y++){
			printf(" %d ",matriz[x][y]);	
		}
	}	
    
	printf("\n\n\t\t");
    system("PAUSE");
	//cargar valores en la matriz por columnas
	c=100;
	for(y=0;y<colu;y++){
		for(x=0;x<filas;x++){
			matriz[x][y]=c;
			c++;
		}
	}	
	//imprimir
	system("cls");
	printf("\n\t\t\tPor Columnas...");
	printf("\n\n\t\t");	
	for(x=0;x<filas;x++){
		printf("\n\t\t");	
		for(y=0;y<colu;y++){
			printf(" %d ",matriz[x][y]);	
		}
	}

	//cargar valores ALEATORIOS en la matriz 
	printf("\n\n\t\t");
    system("PAUSE");	
		for(x=0;x<filas;x++){
		for(y=0;y<colu;y++){
			matriz[x][y]=rand()%900+100;
		}
	}	
	//imprimir
	system("cls");
	printf("\n\t\t\tValores aleatorios...");
	printf("\n\n\t\t");	
	for(x=0;x<filas;x++){
		printf("\n\t\t");	
		for(y=0;y<colu;y++){
			printf(" %d ",matriz[x][y]);	
		}
	}	
    printf("\n\n\t\t");
    system("PAUSE");	
    
    /*
	Practica Martes 04 de Abril
	1. Contar el numero de elementos pares e impares del vector
	2. Buscar un elemento en el vector:
		Si existe, indicar cuantas veces se repite y en que posiciones se encuentra.
		Si no existe, mostrar un mensaje.
	3. Indicar el número de ELEMENTOS pares que se encuentran en POSICIONES impares.
	4. Imprimir en dos columnas: en la columna de la izquierda el vector y en la columna de la derecha el vector al reves.
	   Ejemplo
	   
	           5      9
			   4      8
			   10    10
			   8      4
 			   9      5
 	5. Imprimir solo los valores multiplos de 3 del vector.
	6. Buscar un elemento en la matriz, e indicar cuantas veces se repite y sus posiciones.
	7. Si la matriz es cuadrada mostrar los valores de sus diagonales (principal y secundaria). Mostrar un mensaje si la matriz no es cuadrada.
	8. Mostrar el promedio de la suma de cada una de las filas.
	9. Mostrar el promedio de la suma de las columnas IMPARES.
	10. Mostrar el promedio de la suma de los valores de la matriz.
	*/
	return 0;
}

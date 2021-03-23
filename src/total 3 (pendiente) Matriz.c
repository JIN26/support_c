#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define T 30 //constante
#define Fil 10
#define Col 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int vector[T],matriz[Fil][Col];
	int x,tam,y,filas,colu,c,a,a1,n,cont,vp=0,vi=0,v1=0,v2=0,v3=0,sum=0,sumimp=0;
	srand(time(0));

	do {
		system("cls");
		printf("\n\t\tCuantos elementos tiene el vector [1 - %d]?: ",T);
		scanf("%d",&tam);
	} while(tam<0 || tam>T);
	do {
		printf("\n\t\tque numero busco: ");
		scanf("%d",&n);
	} while(n<0 || n>100);

	//se almacenan elementos en un vector
	for(x=0; x<tam; x++) {
		vector[x]=rand()%100; //cargando el vector con numeros aleatorios
		cont=vector[x];
		if(cont%2==0) {
			vp++;
		}
		if(cont%2==1) {
			vi++;
		}
	}
	//se imprime el vector
	printf("\n\t\tValores almacenados en el vector \n\n");
	for(x=0; x<tam; x++) {
		printf("\n\t\t %d",vector[x]);
		if((x+1)%5==0 && x!=0 ) {
			printf("\n\n\t\t");
			system("PAUSE");
		}
	}
	printf("\n\n\t\t");
	system("pause");
	printf("\n\n\t\tpares %d\n",vp);
	printf("\n\t\timpares %d\n",vi);
	printf("\n\t\tposicion:");
	for(x=0; x<tam; x++) {
		cont=vector[x];
		v2++;
		if(cont==n) {
			v1++;
			printf("%d,",v2);
		}
	}
	v2=0;
	if(v1==0) {
		printf("no existe");
	}
	printf("\n\n\t\trepetiiones:%d",v1);
	printf("\n\n\t\telemntos pares en posiciones impares:");
	for(x=0; x<tam; x++) {
		cont=vector[x];
		v2++;
		if(cont%2==0) {
			if(v2%2!=0) {
				v3++;
				printf("%d,",cont);
			}
		}
	}
	if(v3==0) {
		printf("no hay numeros");
	}
	v3=0;
	printf("\n");
	for(a=0; a<tam; a++) {
		printf("\n\t\t%d %d",vector[a],vector[tam-1-a]);
	}
	printf("\n\n\t\tnumero multiplos de 3: ");
	for(x=0; x<tam; x++) {
		cont=vector[x];
		if(cont%3==0&&cont!=0) {
			v3++;
			printf("%d,",cont);
		}
	}
	v1=0;
	v2=0;
	n=0;
	if(v3==0) {
		printf("no existen");
	}
	v3=0;
	printf("\n\n\t\t");
	system("pause");
	do {
		system("cls");
		printf("\n\t\tCuantas Filas tiene la Matriz [1 - %d]?: ",Fil);
		scanf("%d",&filas);
	} while(filas<0 || filas>Fil);
	do {
		system("cls");
		printf("\n\t\tCuantas Columnas tiene la Matriz [1 - %d]?: ",Col);
		scanf("%d",&colu);
	} while(colu<0 || colu>Fil);
	do {
		system("cls");
		printf("\n\t\tnumero que tengo que buscar: ");
		scanf("%d",&n);
	} while(n<100 || n>999);
	//cargar valores en la matriz por filas
	c=100;
	for(x=0; x<filas; x++) {
		for(y=0; y<colu; y++) {
			matriz[x][y]=c;
			c++;
		}
	}
	//imprimir
	system("cls");
	printf("\n\t\t\tPor filas...");
	printf("\n\n\t\t");
	for(x=0; x<filas; x++) {
		printf("\n\t\t");
		for(y=0; y<colu; y++) {
			printf(" %d ",matriz[x][y]);
		}
	}

	printf("\n\n\t\t");
	system("PAUSE");
	//cargar valores en la matriz por columnas
	c=100;
	for(y=0; y<colu; y++) {
		for(x=0; x<filas; x++) {
			matriz[x][y]=c;
			c++;
		}
	}
	//imprimir
	system("cls");
	printf("\n\t\t\tPor Columnas...");
	printf("\n\n\t\t");
	for(x=0; x<filas; x++) {
		printf("\n\t\t");
		for(y=0; y<colu; y++) {
			printf(" %d ",matriz[x][y]);
		}
	}

	//cargar valores ALEATORIOS en la matriz
	printf("\n\n\t\t");
	system("PAUSE");
	for(x=0; x<filas; x++) {
		for(y=0; y<colu; y++) {
			matriz[x][y]=rand()%900+100;
		}
	}
	//imprimir
	system("cls");
	printf("\n\t\t\tValores aleatorios...");
	printf("\n\n\t\t");
	for(x=0; x<filas; x++) {
		printf("\n\t\t");
		for(y=0; y<colu; y++) {
			printf(" %d ",matriz[x][y]);
		}
	}
	printf("\n\n\t\t");
	system("PAUSE");

	printf("\n\n\t\tposicion:");
	for(x=0; x<filas; x++) {
		v2++;
		for(y=0; y<colu; y++) {
			cont=matriz[x][y];
			v1++;
			if(v1%10!=0) {
				v1=v1%10;
			}
			if(cont==n) {
				v3++;
				printf("Fila:%d,columna:%d//",v1,v2);
			}
		}
	}
	if(v3==0) {
		printf("no existe");
	}
	printf("\n");
	if(filas==colu) {
		for(a=0; a<filas; a++) {
			printf("\n\t\t%d   %d",matriz[a][a],matriz[a][filas-1-a]);
		}
	}
	if(filas!=colu) {
		printf("\n\n\t\tla matriz no es cuadrada");
	}
	for(x=0; x<filas; x++) {
		for(y=0; y<colu; y++) {
			cont=matriz[x][y];
			if(y%2==0) {
				sumimp+=cont;
			}
			sum+=cont;
		}
	}
	printf("\n\n\t\tsuma filas:%d",sum);
	printf("\n\n\t\tsuma impar:%d",sumimp);
	printf("\n\n\t\t");
	system("pause");
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
	8. Mostrar el promedio de la suma de cada una de las filas.//esto no es lo mismo que el 10?
	9. Mostrar el promedio de la suma de las columnas IMPARES.
	10. Mostrar el promedio de la suma de los valores de la matriz.
	*/
	return 0;
}

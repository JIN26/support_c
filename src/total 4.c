#include <stdio.h>
#include <math.h>
int main () {
	char n;
	int x,x1,x2,sum,i,j,v[10];
	do {
		system("cls");
		printf("\tProblema 1\n\tProblema 2\n\tProblema 3\n\tPara salir del programa 4\n\tPara salir de los problemas'.'\n\n\tNumero: ");
		scanf("%c",&n);
		switch(n) {
			case '1':
				do {
					system("cls");
					printf("numero: ");
					scanf("%d",&x);
					for(j=0; x>9; j++) {
						for(i=0; x!=0; i++) {
							v[i]=x%10;
							x/=10;
						}
						for(i--,x=1; i>=0; i--) {
							x*=v[i];
						}
					}
					printf("%d",j);
					n=tolower(getch());
					fflush(stdin);
				} while(n!='.');
				break;
			case '2':

				break;
			case '3':
				do {
					system("cls");
					printf("numero: ");
					scanf("%d",&x);
					if(x>=0&&x<=99) {
						x2=x,i=0;
						do {
							x1=x%10;
							x/=10;
							sum=x+x1;
							sum%=10;
							x=x1*10+sum;
							i++;
						} while(x2!=x);
					}
					printf("%d Pasos para obtener el Numero %d",i,x);
					n=tolower(getch());
					fflush(stdin);
				} while(n!='.');
			case '4':
				system("cls");
				break;
		}
	} while(n!='4');
	return 0;
}

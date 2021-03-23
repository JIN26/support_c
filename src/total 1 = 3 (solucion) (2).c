#include <stdio.h>
#include <math.h>
int main () {
	char n;
	long x,x1,x2;
	int y,i,j,k,cont,z,v[15];
	do {
		system("cls");
		y=0;
		printf("numero: ");
		scanf("%d",&x);
		if(x>=1 && x<=1000000000) {
			do {
				if(x<10) {
					x+=x;
					y++;
				}
			} while(x<10);
			x2=x;
			do {
				for(i=0,x1=x=x2; x!=0; i++) {//extrae el numero en el vector
					v[i]=x%10;
					x/=10;
				}
				for(j=i-1,cont=0; j>=0; j--,cont++) {//voltea el numero
					z=10;
					z=pow(z,j);
					x+=v[cont]*z;
				}
				for(i=0,x2=x+=x1; x!=0; i++) {//extrae la suma en el vector
					v[i]=x%10;
					x/=10;
				}
				for(i--,j=0,cont=0,k=i; i>=j; i--,j++) {//revisa si es capicua o no
					if(v[j]==v[i]) {
						cont++;
					}
				}
				i=0;
				if(cont==k/2+1) {
					printf("capicua");
					i++;
				}
				y++;
			} while(i!=1);
			printf(" %d %d",y,x2);
		} else {
			printf("lychrel");
		}
		n=tolower(getch());
		fflush(stdin);
	} while(n!='.');
	return 0;
}

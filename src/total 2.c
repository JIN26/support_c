#include <stdio.h>//hola /*como estas*/ 
#include <math.h>

int main() {
	char n,m;
	float x,y,z,a,b,c;
	int x2,x1,a1,b1,k[15],j,z1,y1,d,e,f,g,h,i;
	do {
		printf("\tintroduce un numero de 1 a 4\n\tproblema 1\n\tproblema 2\n\tproblema 3\n\tproblema 4\n\tpara salir del programa 5\n\tpara salir de los problemas'.': ");
		n=tolower(getch());
		switch(n) {
			case '1':
				do {
					system("cls");
					printf("numero: ");
					scanf("%f",&x);
					printf("numero: ");
					scanf("%f",&y);
					printf("numero: ");
					scanf("%f",&z);
					if(x==0||y==0||z==0) {
						printf("introdusca un valor positivo");
					} else {
						if(x>y&&y>z||x>y&&y==z||x==y&&x>z||x==y&&y==z) {
							a=x;
							b=y;
							c=z;
						}
						if(y>z&&z>x||y>x&&x==z||y==z&&y>x) {
							a=y;
							b=z;
							c=x;
						}
						if(z>x&&x>y||z>x&&x==y||z==x&&z>y) {
							a=z;
							b=x;
							c=y;
						}
						if(x>z&&z>y||x>z&&z==y||x==z&&x>y) {
							a=x;
							b=z;
							c=y;
						}
						if(y>x&&x>z||y>x&&x==z||y==x&&y>z) {
							a=y;
							b=x;
							c=z;
						}
						if(z>y&&y>x||z>y&&y==x||z==y&&z>x) {
							a=z;
							b=y;
							c=x;
						}
						if(a>=b+c) {
							printf("no forma un triagulo\n");
						} else {
							if((a*a)==(b*b)+(c*c)) {
								printf("triangulo rectangulo\n");
							}
							if((a*a)>(b*b)+(c*c)) {
								printf("triangulo obtusangulo\n");
							}
							if((a*a)<(b*b)+(c*c)) {
								printf("triangulo acutangulo\n");
							}
							if(a==b&&b==c) {
								printf("triangulo equilatero\n");
							}
							if(a==b&&a!=c||b==c&&b!=a||a==c&&a!=b) {
								printf("triangulo isoceles\n");
							}
						}
					}
					a=0,b=0,c=0;
					n=tolower(getch());
					fflush(stdin);
				} while(n!='.');
				break;
			case '2':
				do {
					system("cls");
					printf("dos numero inicial: ");
					scanf("%d%d",&x1,&y1);
					printf("dos numero final: ");
					scanf("%d%d",&z1,&a1);
					if(x1>=25||z1>=25) {
						printf("el numero sobre pasa el tiempo maximo\n");
					}
					if(y1>=60||a1>=60) {
						printf("el numero es erroneo\n");
					}
					if(x1==z1&&y1==a1) {
						printf("el numero no llega al tiempo tiempo minimo\n");
					}
					if(x1<=24&&z1<=24&&y1<=59&&a1<=59) {
						if(x1>=z1) {
							x1-=z1;
							x1-=24;
							x1*=-1;
							z1=0;
						}
						if(y1>a1) {
							y1-=a1;
							y1-=60;
							y1*=-1;
							z1-=1;
							a1=0;
						}
						if(a1>=y1) {
							y1-=a1;
							y1*=-1;
							a1=0;
						}
						if(z1>=x1) {
							x1-=z1;
							x1*=-1;
							z1=0;
						}
						printf("%02d:%02d",x1,y1);
					}
					n=tolower(getch());
				} while(n!='.');
				break;
			case '3':
				do {
					d=0;
					system("cls");
					printf("numeros de prueba: ");
					scanf("%d",&d);
					for (i=1; i<=d&&m!='.'; i++) {
						h=0;
						system("cls");
						printf("prueba %d:\n",i);
						printf("numero1: ");
						scanf("%d",&f);
						printf("numero2: ");
						scanf("%d",&g);
						if(f>g) {
							for(e=f-1; e>g; e--) {
								if(e%2!=0) {
									h+=e;
								}
							}
						}
						if(f<g) {
							for(e=f+1; e<g; e++) {
								if(e%2!=0) {
									h+=e;

								}
							}
						}
						printf("%d",h);
						m=tolower(getch());
						fflush(stdin);
					}
					m='s';
					system("cls");
					printf("Para volver al menu'.'");
					n=tolower(getch());
					fflush(stdin);
				} while(n!='.');
				break;
			case '4':
				do {
					x1=0;
					system("cls");
					printf("numero: ");
					scanf("%d",&x2);
					a1=x2;
					x2=pow(x2,2);
					for(j=0; x2!=0; j++) {
						k[j]=x2%10;
						x2/=10;
					}
					j-=1;
					i=j;
					if(j%2==0) {
						j+=1;
					}
					for(i=i; i>j/2; i--) {
						z1=10;
						z1=pow(z1,i);
						x1=x1+k[i]*z1;
					}
					x1/=pow(10,i+1);
					b1=x1%10;
					if(b1==0) {
						x1/=10;
					}
					for(j/=2; j>=0; j--) {
						z1=10;
						z1=pow(z1,j);
						x2=x2+k[j]*z1;
					}
					x2+=x1;
					printf("%d\n",x2);
					if(a1==x2) {
						printf("SI");
					} else {
						printf("NO");
					}
					n=tolower(getch());
					fflush(stdin);
				} while(n!='.');
				break;
			case '5':
				break;
			default:
				system("cls");
				printf("el numero es invalido\n");
				system("pause");
				break;
		}
		system("cls");
	} while(n!='5');
	return 0;
}

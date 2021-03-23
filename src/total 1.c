#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	int selec;
	int i4,i1,n1,e,b,b1,ancho,ancho1,h,mitad1,mitad2,aux,aux1,xdos,xdos1=1;
	char letra,opc,salir;
	int numero,nume,forma,techo,esqui,franco,baul,escudos,result,francop;
	int x1,x,i2=0,y=0,z=0;
	int x3,x2,z1,i3=1,j1=0;
	int u,d,c,um,dm,cm,uv,dv,cv,umv,dmv,cmv;
	long m,n,k,i=0,j=0;
	do {
		system("cls");
		printf("\t BIENVENIDO AL MENU DE OPCIONES.\n");
		printf("Seleccione la opcion que quieras: \n\n");
		printf("\t1) A dibujar hexagonos\n");
		printf("\t2) Escudos del ejercito romano\n");
		printf("\t3) Numeros de Lychrel\n");
		printf("\t4) Asalto al castillo\n");
		printf("\t5) Calculo mental\n");
		printf("\t6) Salir\n\n");
		printf("SELECCION:  ");
		scanf("%d",&selec);
		system("cls");
		switch(selec) {
			case 1:
				do {
					printf("\tA dibujar hexagonos\n");
					printf("\nAcontinuacion, digite la base del hexagono y el caratecter: \n");
					scanf("%d %c",&n1,&letra);
					if(n1>0) {
						i4=n1-1;
						h=n1+i4;
						mitad1= (h+1)/2;
						mitad2= (h-1)/2;
						ancho = (3*n1)-2;
						ancho1=ancho-2;
						xdos = n1;
						i1=i4;
						for(aux=1; aux<=mitad1; aux++) {
							for(e=i4; e>0; e--) {
								printf(" ");
							}
							for(b=1; b<=xdos; b++) {
								printf("%c",letra);
							}
							printf("\n");
							xdos+= 2;
							i4-= 1;
						}
						for(aux1=1; aux1<=mitad2; aux1++) {
							for(e=mitad2; e<=i1; e++) {
								printf(" ");
							}
							for(b1=ancho1; b1>=xdos1; b1--) {
								printf("%c",letra);
							}
							printf("\n");
							xdos1+= 2;
							i1+= 1;
						}
						xdos1=1;
					}
				} while(n1 != 0);
				break;
			case 2:
				do {
					printf("\tEscudos del ejercito romano\n\n");
					printf("Acontinuacion, digite el numero de legionarios: \n");
					scanf("%i",&numero);
					nume=numero;
					if(nume<1000000 && nume>0) { //35
						for(; nume>0;) {
							forma=sqrt(nume);
							if(nume==1) {
								baul=5;
							} else if(nume != 1) {
								techo=pow((forma-2),2);
								esqui= 3*4;
								franco=((forma-2)*4)*2;
								baul=techo+esqui+franco;
							}
							escudos+=baul;
							result=pow(forma,2);
							nume-=result;//10
						}
						printf("%i \n",escudos);
						escudos=0;
					} else {
						printf("\nun ejercito tiene como mucho diez millones de legionarios\n\n");
					}
				} while(numero != 0);
				break;
			case 3:
				//int u,d,c,um,dm,cm,uv,dv,cv,umv,dmv,cmv;
				//long  m,n,k,i=0,j=0;
				do {
					i=0;
					j=0;
					printf("introduce un numero: ");
					scanf("%d",&n);
					if(n>=1 && n<=1000000000) {
						u=n%10;
						d=n/10%10;
						c=n/100%10;
						um=n/1000%10;
						dm=n/10000%10;
						cm=n/100000%10;
						uv=n/1000000%10;
						dv=n/10000000%10;
						cv=n/100000000%10;
						umv=n/1000000000%10;
						if(n<=9) {
							do {
								n+=n;
								i++;
								u=n%10;
								d=n/10%10;
							} while(d<=0);
						}
						if(n>=10 && n<=99) {
							if(u!=d) {
								do {
									j=u*10+d;
									n=j+n;
									i++;
									u=n%10;
									d=n/10%10;
									c=n/100%10;
									if(u==d|| n<=1000000000) {
										c++;
									}
								} while(c<=0);
								c--;
							}
						}
						if(n>=100 && n<=999) {
							if(u!=c) {
								do {
									j=u*100+d*10+c;
									n=j+n;
									i++;
									u=n%10;
									d=n/10%10;
									c=n/100%10;
									um=n/1000%10;
									if(u==c|| n<=1000000000) {
										um++;
									}
								} while(um<=0);
								um--;
							}
						}
						if(n>=1000 && n<=9999) {
							if(u!=um || d!=c) {
								do {
									j=u*1000+d*100+c*10+um;
									n=j+n;
									i++;
									u=n%10;
									d=n/10%10;
									c=n/100%10;
									um=n/1000%10;
									dm=n/10000%10;
									if(u==um && d==c|| n<=1000000000) {
										dm++;
									}
								} while(dm<=0);
								dm--;
							}
						}
						if(n>=10000 && n<=99999) {
							if(u!=dm || d!=um) {
								do {
									j=u*10000+d*1000+c*100+um*10+dm;
									n=j+n;
									i++;
									u=n%10;
									d=n/10%10;
									c=n/100%10;
									um=n/1000%10;
									dm=n/10000%10;
									cm=n/100000%10;
									if(u==dm && d==um|| n<=1000000000) {
										cm++;
									}
								} while(cm<=0);
								cm--;
							}
						}
						if(n>=100000 && n<=999999) {
							if(u!=um || d!=dm || c!=cm) {
								do {
									j=u*100000+d*10000+c*1000+um*100+dm*10+cm;
									n=j+n;
									i++;
									u=n%10;
									d=n/10%10;
									c=n/100%10;
									um=n/1000%10;
									dm=n/10000%10;
									cm=n/100000%10;
									uv=n/1000000%10;
									if(u==um && d==dm && c==cm|| n<=1000000000) {
										uv++;
									}
								} while(uv<=0);
								uv--;
							}
						}
						if(n>=1000000 && n<=9999999) {
							if(u!=uv || d!=cm || c!=dm) {
								do {
									j=u*1000000+d*100000+c*10000+um*1000+dm*100+cm*10+uv;
									n=j+n;
									i++;
									u=n%10;
									d=n/10%10;
									c=n/100%10;
									um=n/1000%10;
									dm=n/10000%10;
									cm=n/100000%10;
									uv=n/1000000%10;
									dv=n/10000000%10;
									if(u==uv && d==cm && c==dm|| n<=1000000000) {
										dv++;
									}
								} while(dv<=0);
								dv--;
							}
						}
						if(n>=10000000 && n<=99999999) {
							if(u!=dv || d!=uv || c!=cm || um!=dm) {
								do {
									j=u*10000000+d*1000000+c*100000+um*10000+dm*1000+cm*100+uv*10+dv;
									n=j+n;
									i++;
									u=n%10;
									d=n/10%10;
									c=n/100%10;
									um=n/1000%10;
									dm=n/10000%10;
									cm=n/100000%10;
									uv=n/1000000%10;
									dv=n/10000000%10;
									cv=n/100000000%10;
									if(u==dv && d==uv && c==cm && um==dm|| n<=1000000000) {
										cv++;
									}
								} while(cv<=0);
								cv--;
							}
						}
						if(n>=100000000 && n<=999999999) {
							if(u!=cv || d!=dv || c!=uv || um!=cm) {
								do {
									j=u*100000000+d*10000000+c*1000000+um*100000+dm*10000+cm*1000+uv*100+dv*10+cv;
									n=j+n;
									i++;
									u=n%10;
									d=n/10%10;
									c=n/100%10;
									um=n/1000%10;
									dm=n/10000%10;
									cm=n/100000%10;
									uv=n/1000000%10;
									dv=n/10000000%10;
									cv=n/100000000%10;
									umv=n/1000000000%10;
									if(u==cv && d==dv && c==uv && um==cm|| n<=1000000000) {
										umv++;
									}
								} while(umv<=0);
								umv--;
							}
						}
						if(n>=100000000 && n<=9999999999) {
							if(u!=umv || d!=cv || c!=dv || um!=uv || dm!=cm) {
								do {
									j=u*1000000000+d*100000000+c*10000000+um*1000000+dm*100000+cm*10000+uv*100+dv*100+cv*10+umv;
									n=j+n;
									i++;
									u=n%10;
									d=n/10%10;
									c=n/100%10;
									um=n/1000%10;
									dm=n/10000%10;
									cm=n/100000%10;
									uv=n/1000000%10;
									dv=n/10000000%10;
									cv=n/100000000%10;
									umv=n/1000000000%10;
									dmv=n/10000000000%10;
									if(u==umv && d==cv && c==dv && um==uv && dm==cm|| n<=1000000000) {
										dmv++;
									}
								} while(dmv<=0);
								dmv--;
							}
						}
					} else {
						n=0;
						i=0;
						printf("lychrel: ");
					}
					printf("%d,%d\n",i,n);//i es el contador
				} while(n!=0);
				break;
			case 4:
				do {
					printf("\tAsalto al castillo\n");
					printf ("introduce el nummero de hombres: ");
					scanf("%i",&x);
					x1=x;
					if(x>=1 && x<=500000) {
						for (i2 = 1; i2 <= x; i2++) {
							y= x %  i2;
							if (y==0) {
								z++;
							}
						}
						printf("%i formas distintas\n\n",z);
					} else {
						printf("el numero es invalido");
					}
					x=z=0;//ojo;
				} while(x1!=0);
				break;
			case 5:
				//int x2,z1,i3=1,j=0;
				do {
					i3=1;
					printf ("introduce el numero de ejercicios: ");
					scanf ("%d",&x2);
					x3=x2;
					do {
						z1=0;
						j1=0;
						printf ("\nejercicios %i\n",i3);
						do {
							printf ("introduce el numero: ");
							scanf ("%d",&z1);
							j1=j1+z1;
							printf ("%d, \n",j1);
							if (j1>200000) {
								z1=0;
							}
						} while (z1!=0 );
					} while (x2>i3++);
				} while(x3!=0);
				break;
			case 6:
				break;
			default:
				printf("la opcion que elegiste es incorreta vuelva a intentarlo");
				break;
		}
	} while(selec != 6);
	system("pause");
	return 0;
}

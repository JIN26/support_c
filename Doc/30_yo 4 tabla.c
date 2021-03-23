#include <stdio.h>//calculadora
#include <math.h>

//a es el caracter del menu
//b es el tipo de simbolo (ejemplo 1 == +,2 == -,3 == *)
int casos(char a);
int menu(char a,int b);
int ordenar(char a);
int datos(int b);
int operaciones(int a,int b);//problemas con el 7 porciento en la funcion de operaciones
int main(){
	char n,m;
	int x;
do{
	system("cls");
	printf("\r\t\tMATEMATICAS BASICAS\n\n\t0 Instrucciones .\n\t1 Sumas +\n\t2 Restas -\n\t3 Multiplicaciones *\n\t4 Diviciones /\n\t5 ^\n\t6 Raices\n\t7 Porciento\n\t");
	m=tolower(getch());
	fflush(stdin);
	switch(m){
		
		case '0':
			do{
				system("cls");
				printf("\t\tINSTRUCCIONES .\n\n\t1° Para escoger la operacion o el numero indicar el numero a su lado\n\t2° Si quiere hacer operaciones grandes entre en ingresar datos\n\t3° Para retroceder o salir oprimir '.'\n\t");
				n=tolower(getch());
				fflush(stdin);
			}while(n!='.');
		break;
		case '1':
			casos(m);
		break;
		case '2':
			casos(m);
		break;
		case '3':
			casos(m);
		break;
		case '4':
			casos(m);
		break;
		case '5':
			casos(m);
		break;
		case '6':
			casos(m);
		break;
		case '7':
			casos(m);
		break;
		case '.':
		break;
		
		default:
			printf("Error caracter no valido!!\n\n\t");
			m=tolower(getch());
			fflush(stdin);
			system("cls");
	} 
}while(m!='.');

return 0;
}

int operaciones(int a,int b){
	int i;
	long c;
	float f;
	char n;
	do{
		system("cls");
		if(b==1){
		printf("\tSumas por %d\n\n",a);
		}
		else{
			if(b==2){
				printf("\tResrtas por %d\n\n",a);
			}
			else{
				if(b==3){
					printf("\tMultiplicaciones por %d\n\n",a);
				}
				else{
					if(b==4){
						printf("\tDiviciones por %d\n\n",a);
						f=a;
					}
					else{
						if(b==5){
							printf("\tElevado a la %d\n\n",a);
						}
						else{
							if(b==6){
								printf("\tRaiz\n\n");
							}
							else{
								if(b==7){
									printf("\tPorciento de %d\n\n",a);
								}
							}
						}
					}
				}
			}
		}
		for(i=0;i<=10;i++){
			if(b==1){
				printf("\t%d + %d = %d\n",a,i,a+i);
			}
			else{
				if(b==2){
					printf("\t%d - %d = %d\n",a,i,a-i);
				}
				else{
					if(b==3){
						printf("\t%d * %d = %d\n",a,i,a*i);
					}
					else{
						if(b==4){
							printf("\t%f / %d = %f\n",f,i,f/i);
						}
						else{
							if(b==5){
								c=pow(a,i);
								printf("\t%d ^ %d = %d\n",a,i,c);
							}
							else{
								if(b==6){
									f=sqrt(i);
									printf("\tRaiz de %d = %d\n",i,f);
								}
								else{
									if(b==7){
										printf("\t%d Porciento de %d = %d\n",a,i,a%i);
									}
								}
							}
						}
					}
				}
			}
		}
		printf("\t");
		n=tolower(getch());
		fflush(stdin);
	}while(n!='.');
}

int datos(int b){
	int x,y;
	float a;
	char n;
	do{
		system("cls");
		printf("\tIngresar datos\n\n");
		printf("\tNumero uno: ");
		if(b!=6){
			if(b!=4){
				scanf("%d",&x);
			}
			else{
				scanf("%f",&a);
			}
			printf("\tNumero dos: ");
			scanf("%d",&y);
		}
		else{
			scanf("%f",&a);
		}
		printf("\tvalor final: ");
		if(b==1){
			printf("%d\n\t",x+y);
		}
		else{
			if(b==2){
				printf("%d\n\t",x-y);
			}
			else{
				if(b==3){
					printf("%d\n\t",x*y);
				}
				else{
					if(b==4){
						a/=y;
						printf("%f\n\t",a);
					}
					else{
						if(b==5){
							x=pow(x,y);
							printf("%d\n\t",x);
						}
						else{
							if(b==6){
								a=sqrt(a);
								printf("%d\n\t",a);
							}
							else{
								if(b==7){
									printf("%d\n\t",x%y);
								}
							}
						}
					}
				}
			}
		}
		n=tolower(getch());
		fflush(stdin);
	}while(n!='.');
	
}

int ordenar(char a){//cambio de tipo char a tipo int
	int x;
	if(a=='1'){
		x=1;
	}
	else{
		if(a=='2'){
			x=2;
		}
		else{
			if(a=='3'){
				x=3;
			}
			else{
				if(a=='4'){
					x=4;
				}
				else{
					if(a=='5'){
						x=5;
					}
					else{
						if(a=='6'){
							x=6;
						}
						else{
							if(a=='7'){
								x=7;
							}
							else{
								if(a=='8'){
									x=8;
								}
								else{
									if(a=='9'){
										x=9;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return x;
}

int menu(char a,int b){
	int c;
	switch(a){
		case '0':
			datos(b);
		break;
		case '1':
			c=ordenar(a);
			operaciones(c,b);
		break;
		case '2':
			c=ordenar(a);
			operaciones(c,b);
		break;
		case '3':
			c=ordenar(a);
			operaciones(c,b);
		break;
		case '4':
			c=ordenar(a);
			operaciones(c,b);
		break;
		case '5':
			c=ordenar(a);
			operaciones(c,b);
		break;
		case '6':
			c=ordenar(a);
			operaciones(c,b);
		break;
		case '7':
			c=ordenar(a);
			operaciones(c,b);
		break;
		case '8':
			c=ordenar(a);
			operaciones(c,b);
		break;
		case '9':
			c=ordenar(a);
			operaciones(c,b);
		break;
		case '.':
			return a;
		break;
					
		default:
			printf("Error numero no valido!!\n\t");
			a=tolower(getch());
			fflush(stdin);
			system("cls");
			return a;
	}
}

int casos(char a){
	int b;
	char n;
	do{
		b=ordenar(a);
		system("cls");
		if(b==1){
			printf("\t\tSUMAS +\n\n\tIngresar datos 0\n\tSumas por 1\n\tSumas por 2\n\tSumas por 3\n\tSumas por 4\n\tSumas por 5\n\tSumas por 6\n\tSumas por 7\n\tSumas por 8\n\tSumas por 9\n\t");
		}
		else{
			if(b==2){
				printf("\t\tRESTAS -\n\n\tIngresar datos 0\n\tRestas por 1\n\tRestas por 2\n\tRestas por 3\n\tRestas por 4\n\tRestas por 5\n\tRestas por 6\n\tRestas por 7\n\tRestas por 8\n\tRestas por 9\n\t");
			}
			else{
				if(b==3){
					printf("\t\tMULTIPLICACIONES *\n\n\tIngresar datos 0\n\tMultiplicaciones por 1\n\tMultiplicaciones por 2\n\tMultiplicaciones por 3\n\tMultiplicaciones por 4\n\tMultiplicaciones por 5\n\tMultiplicaciones por 6\n\tMultiplicaciones por 7\n\tMultiplicaciones por 8\n\tMultiplicaciones por 9\n\t");	
				}
				else{
					if(b==4){
						printf("\t\tDIVICIONES /\n\n\tIngresar datos 0\n\tDiviciones por 1\n\tDiviciones por 2\n\tDiviciones por 3\n\tDiviciones por 4\n\tDiviciones por 5\n\tDiviciones por 6\n\tDiviciones por 7\n\tDiviciones por 8\n\tDiviciones por 9\n\t");
					}
					else{
						if(b==5){
							printf("\t\tELEVADO ^\n\n\tIngresar datos 0\n\tDiviciones por 1\n\tDiviciones por 2\n\tDiviciones por 3\n\tDiviciones por 4\n\tDiviciones por 5\n\tDiviciones por 6\n\tDiviciones por 7\n\tDiviciones por 8\n\tDiviciones por 9\n\t");
						}
						else{
							if(b==6){
								printf("\t\tRAIZ \n\n\tIngresar datos 0\n\tRaices\n\t");
							}
							else{
								if(b==7){
									printf("\t\tPORCIENTO %\n\n\tIngresar datos 0\n\tPorciento de 1\n\t");
								}
							}
						}
					}
				}
			}
		}
		n=tolower(getch());
		fflush(stdin);
		n=menu(n,b);
	}while(n!='.');
}

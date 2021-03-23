//juego de la culebrita

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <windows.h>
#include <wincon.h>
#include <time.h>
#include <string.h>

#define pause 1
#define F 36
#define C 61
#define N 11
//-----------controles del jugador 1----------------
#define DERECHA 100
#define IZQUIERDA 97
#define ARRIBA 119
#define ABAJO 115
//---------------------------------------------------
//------------controles del jugador 2----------------
#define RIGHT 77
#define LEFT 75
#define UP 72
#define DOWN 80
//---------------------------------------------------

//using namespace std;

void menu();

main(){
//------iniciar juego----------------------------------	
	srand(time(NULL));//no se que hace 
	int mapa[F][C];//matriz principal
	int i,j,h,m,s,ci,cj,x=0,y=0;//contadores
	int sf=3,sc=6;//ubicacion del muñeco
	int sf2=13,sc2=15;//ubicacion del muñeco 2
	int cf=3,cc=5;//cola del muñeco
	int direccion=0;//error con la cola
	char usuario1[N];//nombre
	int puntos=0,puntos2=0;//puntuacion
	char boton=DERECHA;//movimiento
	char tecla=DERECHA,tecla2;//movilidad
	int movimiento[N];//movimiento de la cola
	unsigned int rf=rand()%F-1,rc=rand()%C-1;//comida
	system("color 3f");	    
	system("mode 129"); 
	menu();	
//-------------------------------------------------------	
for(;;){
	
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\r\t\t\t\t\tNombre: ");
	fflush(stdin);
	gets(usuario1);
	
//--cronometro y la estructura principal de todo el juego----------------------------------------------

	for(h=0; h<24; h++) {
		for(m=0; m<=59; m++) {
			for(s=0; s<=59; s++) {
				
				system("cls");
				printf("\t\t\t\t\t  Tiempo de juego %02d:%02d:%02d \n\n\t\t\t\t\t  %s \t\tpuntos: %04d \t puntos2: %04d",h,m,s,usuario1,puntos,puntos2);
				
				for(i=0;i<F;i++){
					
					printf("\n\t\t\t\t");
					
					for(j=0;j<C;j++){
//----------------------marco del mapa-----------------------------------------------------------------
							if(i==0 || i==F-1 || j==0 || j==C-1 ){//marco
		
								if(i == 0 || j == C-1 ||i == F-1 ){//orillas superiores y inferiores o
									mapa[i][j] = 205;
								}
								if(i == 1 || j== 0 || j== C-1){//orillas izquierdas y derechas 
									mapa[i][j] = 186;
								}
								if(i == 0 && j == 0){//esquina superior izquierda
									mapa[i][j] = 201;
								}
								if(i == 0 && j == C-1){//esquina superior derecha
									mapa[i][j] =187;
								}
								if(i == F-1 && j == 0){//esquina inferior izquierda
									mapa[i][j] = 200;
								}
								if(i == F-1 && j == C-1){//esquina inferior derecha
									mapa[i][j] = 188;
								}
							}
//--------------------------------------------------------------------------------------------------------
							else{	
								mapa[i][j] = 32;//espacios	
							}
							
						mapa[sf][sc] = 001;//personaje
						mapa[sf2][sc2] = 002;//personaje 2
						for(x=0;x<puntos+2;x++){ 
							for(y=0;y<puntos+2;y++){
								
								
								if(direccion == 1){//izquierda
									mapa[cf][cc+x]=mapa[cf][cc];
								}	
								
								if(direccion == 3){
									mapa[cf-x][cc]=mapa[cf][cc];
								}
								mapa[cf][cc] = 111;
							}
						}
						
						mapa[cf][cc]=111;
						mapa[rf][rc] = 42;//comida
						
						if(mapa[rf][rc] == 32|| rf == 0 || rc == 0){
							mapa[rf][rc] = 42;	
							rf=rand()%14+1,rc=rand()%39+1;
						}
						printf("%c",mapa[i][j]);//mapa
					}
				}
			printf("\n");
			Sleep(pause);
		//	printf("%d * %d",rf,rc);
//----------controles----------------------------------------------------------------------------------------
			if(kbhit()){//movimiento de jugador 1
				
					boton=getch();

					if(boton==ARRIBA||boton==ABAJO||boton==IZQUIERDA||boton==DERECHA){
						tecla=boton;
					}
			}
//----------ARRIBA jugador 1---------------------------------------------------------------------------------			
			if(tecla==ARRIBA){
				if(mapa[sf-1][sc] == 32){					
					mapa[sf][sc] = 32;
					cf=sf;
					sf--;
					cc=sc;
					direccion=2;
					//if(direccion == 2){//arriba
									mapa[cf+x][cc]=mapa[cf][cc];
				}
				else{
					if(direccion == 3 && mapa[sf-1][sc] == 111 && mapa[sf+1][sc] == 32){
						cf=sf;
						sf++;
						cc=sc;
					}
					else{
						if(mapa[sf-1][sc] == 002){
							puntos=0,direccion=0,sf=3,sc=6,sf2=13,sc2=15,cf=3,cc=5,rf=0,rc=0,tecla2,tecla=boton=DERECHA;
							system("cls");
							printf("\n\n\n\n\t\t\tTE COMI UMMM\n\n\t\t\t");
							system("pause");
						}
						if(mapa[sf-1][sc] == 42){
							sf--;
							rf=0;
							puntos++;
						}
						else{
							puntos=0,direccion=0,sf=3,sc=6,sf2=13,sc2=15,cf=3,cc=5,rf=0,rc=0,tecla2,tecla=boton=DERECHA;
							system("cls");
							printf("\n\n\n\n\t\t\tjajajaja perdiste\n\n\t\t\t");
							system("pause");
						}
					}
					
				}
			}
//----------arriba jugador 2--------------------------------------------------------------------------------------------
			if(GetAsyncKeyState(VK_UP) ||	tecla2==UP ){
				tecla2=UP;
				if(mapa[sf2-1][sc2] == 32){
					mapa[sf2][sc2] = 32;
					sf2--;
				}
				else{
					if(mapa[sf2-1][sc2] == 42){
							sf2--;
							rf=0;
							puntos2++;
					}
					else{
						puntos=0,direccion=0,sf=3,sc=6,sf2=13,sc2=15,cf=3,cc=5,rf=0,rc=0,tecla2,tecla=boton=DERECHA;
						system("cls");
						printf("\n\n\n\n\t\t\tjajajaja perdiste\n\n\t\t\t");
						system("pause");
					}	
				}
			}
//---------ABAJO jugador 1-----------------------------------------------------------------------------------------------
 			if(tecla==ABAJO){
 				if(mapa[sf+1][sc] == 32){
	 				mapa[sf][sc] = 32;
	 				cf=sf;
					sf++;
					cc=sc;
					direccion=3;
				}
				else{
					if(direccion == 2 && mapa[sf+1][sc] == 111 && mapa[sf-1][sc] == 32){
						cf=sf;
						sf--;
						cc=sc;
					}
					else{
						if(mapa[sf+1][sc] == 002){
							puntos=0,direccion=0,sf=3,sc=6,sf2=13,sc2=15,cf=3,cc=5,rf=0,rc=0,tecla2,tecla=boton=DERECHA;
							system("cls");
							printf("\n\n\n\n\t\t\tTE COMI UMMM\n\n\t\t\t");
							system("pause");
						}
						if(mapa[sf+1][sc] == 42){
							sf++;
							rf=0;
							puntos++;
						}
						else{
							puntos=0,direccion=0,sf=3,sc=6,sf2=13,sc2=15,cf=3,cc=5,rf=0,rc=0,tecla2,tecla=boton=DERECHA;
							system("cls");
							printf("\n\n\n\n\t\t\tjajajaja perdiste\n\n\t\t\t");
							system("pause");
						}
					}
					
				}
			}
//----------abajo jugador 2---------------------------------------------------------------------------------------------			
			if(GetAsyncKeyState(VK_DOWN) || tecla2==DOWN ){
				tecla2=DOWN;
 				if(mapa[sf2+1][sc2] == 32){
	 				mapa[sf2][sc2] = 32;
					sf2++;
				}
				else{
					if(mapa[sf2+1][sc2] == 42){
						sf2++;
						rf=0;
						puntos2++;
					}
					else{
						puntos=0,direccion=0,sf=3,sc=6,sf2=13,sc2=15,cf=3,cc=5,rf=0,rc=0,tecla2,tecla=boton=DERECHA;
						system("cls");
						printf("\n\n\n\n\t\t\tjajajaja perdiste\n\n\t\t\t");
						system("pause");
					}
				}
			}
//----------IZQUIERDA	 jugador 1-----------------------------------------------------------------------------------------		
			if(tecla==IZQUIERDA){
				if(mapa[sf][sc-1] == 32){
	 					mapa[sf][sc] = 32;
	 					cc=sc;
						sc--;
						cf=sf;
						direccion=1;
				}
				else{
					if(direccion==0 && mapa[sf][sc-1] == 111 && mapa[sf][sc+1] == 32){
						cc=sc;
						sc++;
						cf=sf;
					}
					else{
						if(mapa[sf][sc-1] == 002){
							puntos=0,direccion=0,sf=3,sc=6,sf2=13,sc2=15,cf=3,cc=5,rf=0,rc=0,tecla2,tecla=boton=DERECHA;
							system("cls");
							printf("\n\n\n\n\t\t\tTE COMI UMMM\n\n\t\t\t");
							system("pause");
						}
						if(mapa[sf][sc-1] == 42){
							sc--;
							rf=0;
							puntos++;
						}
						else{
							puntos=0,direccion=0,sf=3,sc=6,sf2=13,sc2=15,cf=3,cc=5,rf=0,rc=0,tecla2,tecla=boton=DERECHA;
							system("cls");
							printf("\n\n\n\n\t\t\tjajajaja perdiste\n\n\t\t\t");
							system("pause");
						}
					}
				}
			}
//----------izquierda jugador 2--------------------------------------------------------------------------------------------
			if(GetAsyncKeyState(VK_LEFT) || tecla2==LEFT ){
				tecla2=LEFT;
				if(mapa[sf2][sc2-1] == 32){
	 				mapa[sf2][sc2] = 32;
					sc2--;
				}
				else{
					if(mapa[sf2][sc2-1] == 42){
						sc2--;
						rf=0;
						puntos2++;
					}
					else{
						puntos=0,direccion=0,sf=3,sc=6,sf2=13,sc2=15,cf=3,cc=5,rf=0,rc=0,tecla2,tecla=boton=DERECHA;
						system("cls");
						printf("\n\n\n\n\t\t\tjajajaja perdiste\n\n\t\t\t");
						system("pause");
					}
				}
			}
//----------DERECHA jugador 1-----------------------------------------------------------------------------------------------
 			if(tecla==DERECHA){
 				if(mapa[sf][sc+1] == 32){
	 					mapa[sf][sc] = 32;
	 					cc=sc;
						sc++;
						cf=sf;
						direccion=0;
						//if(direccion == 0 ){//derecha
									mapa[cf][cc-x]=mapa[cf][cc];						
				}
				else{
					if(direccion==1 && mapa[sf][sc+1] == 111 && mapa[sf][sc-1] == 32){
						cc=sc;
						sc--;
						cf=sf;
					}
					else{
						if(mapa[sf][sc+1] == 002){
							puntos=0,direccion=0,sf=3,sc=6,sf2=13,sc2=15,cf=3,cc=5,rf=0,rc=0,tecla2,tecla=boton=DERECHA;
							system("cls");
							printf("\n\n\n\n\t\t\tTE COMI UMMM\n\n\t\t\t");
							system("pause");
						}
						if(mapa[sf][sc+1] == 42){
							sc++;
							rf=0;
							puntos++;
						}
						else{
							puntos=0,direccion=0,sf=3,sc=6,sf2=13,sc2=15,cf=3,cc=5,rf=0,rc=0,tecla2,tecla=boton=DERECHA;
							system("cls");
							printf("\n\n\n\n\t\t\tjajajaja perdiste\n\n\t\t\t");
							system("pause");
						}
					}
				}
			}
//----------derecha jugador 2--------------------------------------------------------------------------------------------
			if(GetAsyncKeyState(VK_RIGHT) || tecla2==RIGHT ){
				tecla2=RIGHT;
 				if(mapa[sf2][sc2+1] == 32){
	 				mapa[sf2][sc2] = 32;
					sc2++;
				}
				else{
					if(mapa[sf2][sc2+1] == 42){
						sc2++;
						rf=0;
						puntos2++;
					}
					else{
						puntos=0,direccion=0,sf=3,sc=6,sf2=13,sc2=15,cf=3,cc=5,rf=0,rc=0,tecla2,tecla=boton=DERECHA;
						system("cls");
						printf("\n\n\n\n\t\t\tjajajaja perdiste\n\n\t\t\t");
						system("pause");	
					}
				}
			}
//----------salida del juego----------------------------------------------------------------------------------------------		
			if(GetAsyncKeyState(VK_SHIFT)){
				system("pause");
			}	
			if(GetAsyncKeyState(VK_ESCAPE)){
				return 0;
			}
//-------------------------------------------------------------------------------------------------------------------------
		}//cronometro segundos		
	}//cronometro minutos
}//cronometro hora

}
return 0;
}//main
void menu(){
/*	
	cout <<"poner ";
	cout <<"un ";
	cout <<"menu \n";*/
//	system("pause");
}

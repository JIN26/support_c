#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	char mensaje[50];
	 int i,b=0;
	
	do{
	fflush(stdin);
	gets(mensaje);	
		if(strcmp(mensaje,"FIN")==0||strcmp(mensaje,"fin")==0){
				exit(1);
		}
		for(i=0;i<strlen(mensaje);i++){
			if(mensaje[i]>=65&&mensaje[i]<=90){
				mensaje[i]=mensaje[i]+1;
				if(mensaje[i]==91){
					mensaje[i]=65;
				}
			}
			if(mensaje[i]>=97&&mensaje[i]<=122){
				mensaje[i] = mensaje[i]-32;
				mensaje[i]=mensaje[i]+1;
				if(mensaje[i]==91){
					mensaje[i]=65;
				}
			}	
		}
		
	printf("%s\n",mensaje);	
	}while(b!=1);
	
	
	return 0;
}

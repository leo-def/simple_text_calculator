#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
char typed[200];
char rpn[200];
char rpnc[200];
double rpnn[200];

#include "validar.h"
#include "respostarpn.h"
#include "resolucaorpn.h"
#include "rpn.h"

int main(void){
	int val = 0;
	int x=0;
	char c = '0';
	while(x==0){
		val=0;
		
		while(val == 0){
			
			printf(" \n Enter with the equation \n");
			gets(typed);
			val = validar();
			if( val == 0){
				printf("\n Invalid equation ,try again \n");
			}
		}
		rpnf();
		resolucaorpn();
		respostarpn();
		system("pause");
		printf("\n digite 0 para continuar \n");
		scanf("%d",&x);
		getchar();
		//while ((c = getchar()) != '\n' && c != EOF) { }
		

		
		
	}

}



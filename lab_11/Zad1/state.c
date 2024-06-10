#include "statemachine.h"
#include "reader.h"
#include <stdio.h>
#include <stdlib.h>

int ECHO(){
	printf("Echo \n"); 
	char z;
	int k; 
	
	while(1){
	z = readChar(); // wywołanie funkcji czytania znaków.
	k = (int)z;
	if(k == 113 || k == 119) // jeśli 'q' lub 'w' to wyjdź
		break;
	else	
		printf("%c \n", z); // wyprintuj znak w cmd
	}
	return k;
}

int WRITE(){
	char z;
	int k;
	printf("Write \n");
	
	FILE *fp; // wskaźnik na plik tekstowy
	fp = fopen("output.txt", "w"); // otwórz .txt w trybie zapisu
	
	while(1){ 
	z = readChar();
	k = (int)z;
	if(k==113 || k==101){ // jeśli 'q' lub 'e' to wyjdź
		fclose(fp);
		break;
		}
	else
		fprintf(fp, "%c \n", z); // wyprintuj znak w .txt
	}
	return k;
}

void exec(){
	State_t currentState = F_Echo; // stworzenie zmiennej currentState i inicjalizacja stanem Echo
	int z;
	while(1){
	switch(currentState){
		case F_Echo:{
				z = ECHO(); 
				currentState = F_Write;
				if(z==113) // jeśli 'q'
				return;
		}
		case F_Write:{
				z = WRITE();
				currentState = F_Echo;
				if(z==113) // jeśli 'q'
				return;
					
		}
			}
	}
}

// ASCII: q = 113, w = 119, e = 101.
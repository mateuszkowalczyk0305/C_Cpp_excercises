#include <stdio.h>  
#include <stdlib.h> // exit()
//#include <string.h> // strlen()

int main(){
	// Otworzenie pliku:
	FILE * fPtr = fopen("input.txt", "w+");
	
	// Komunikat w przypadku błędu otwarcia:
	if (fPtr == NULL){
		printf("Failed to open the file :( \n");
		exit(EXIT_FAILURE);
	}
	
	// Deklaracja zmiennych:
	char input;
	int count = 0;
	
	// Pętla pobierająca znaki:
	while(1){
		printf("Wprowadź znak q/Q w celu zakończenia zapisu zanków do pliku: ");
		scanf("%c", &input);
		
		if (input == 'q' || input == 'Q'){
			break; // Przerwanie pętli w przypadku wystąpienia q/Q.
		}
		
		// fputc(input, fPtr); -> zapisałoby mi char, ale zrobię fputs(), żeby było jak w instrukcji.
		
		// Zapisanie pobranego znaku do pliku:
		fputc(input, fPtr);
		count++; // Inkrementacja licznika znaków.
		
		// Sprawdzenie czy wprowadzono 20 znaków:
		if(count == 20){
			break;
		}
	}
	// Zamknięcie pliku:
	fclose(fPtr);
	
	return 0;
}




#include <stdio.h>  
#include <stdlib.h> // exit()

int main(){
	// Otworzenie pliku:
	FILE * fPtr = fopen("input.txt", "w+");
	
	// Komunikat w przypadku błędu otwarcia:
	if (fPtr == NULL){
		printf("Failed to open the file :( \n");
		exit(EXIT_FAILURE);
	}
	
	// Deklaracja zmiennych:
	char input[2]; // znak + '\0'.
	int count = 0;
	
	// Pętla pobierająca znaki:
	while(1){
		printf("Wprowadz znak q/Q w celu zakonczenia zapisu znakow do pliku: \n");
		scanf("%c", &input[0]);
		scanf("%*c"); // usunięcie zbędnego znaku nowej linii z bufora.
		
		input[1] = '\0'; // dodanie informacji odnośnie końca znaku.
		
		if (input[0] == 'q' || input[0] == 'Q'){
			break; // Przerwanie pętli w przypadku wystąpienia q/Q.
		}
		
		// Zapisanie pobranego znaku do pliku:
		fputs(input, fPtr);
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

/* funkcja scanf("%c", &input[0]); pozostawia w buforze znaków 
znaki nowej linii ('\n') po wprowadzeniu znaku przez użytkownika. 
Gdy pętla przechodzi do kolejnej iteracji, wczytywany jest ten znak
nowej linii jako kolejny znak, co prowadzi do błędnego działania programu.*/


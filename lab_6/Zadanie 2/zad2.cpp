#include <iostream>  
#include <fstream> 
#include <string>

int main(){
	
	// Deklaracje
	std::ifstream file;
	std::string my_string;
	std::string nazwa;
	char litera;
	int licznik = 0;
	
	std::cout << "Wprowadz nazwe pliku: ";
	std::getline(std::cin, nazwa);
	
	std::cout << "Wprowadz sprawdzana litere: ";
	std::cin >> litera;

/*	
	// Sprawdzenie bledu odczytu
    if (! file.eof() && file.fail())
		std :: cout << " Error occurred during reading the file " << std :: endl;
*/
	// Warunek otworzenia pliku:
	if(nazwa == "file"){
		file.open("file.txt");
	}
	
	// Komunikat w przypadku błędu otwarcia:
	if (!file.is_open()){
		std::cout << "Failed to open the file" << std::endl;
		exit(EXIT_FAILURE);
	}
	
	while(std::getline(file, my_string)){
		std::cout << "Tresc pliku: " << my_string << std::endl;
		for(char znak : my_string){
		if(znak = litera){
			licznik++;
		}
	}
	}
	
	
	std::cout << "Liczba wystapien litery " << litera << " w tekscie: " << licznik << std::endl;
	
	// Zamknięcie pliku:
	file.close();
	return EXIT_SUCCESS;
}



#include <iostream>
#include <iomanip>

int main(){

	int * ptr = new int(5);
	
	std::cout << "*ptr" << *ptr << std::endl;
	
	//delete ptr;
	
	return 0;
}


// Typy referencyjne to typy złożone deklarowane z wykorzystaniem symbolu &.
// Modyfikujac wartosc referencji modyfikujemy jednoczesnie wartosc skojarzonej z nia zmiennej.

// Zmienna referencyjna i skojarzona z nia zmienna maja ten sam
// adres pamieci, co swiadczy o tym, ze referencja to inna nazwa danej zmiennej:

// Referencja jest wtedy kiedy stoi za typem zmiennej.
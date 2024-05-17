#include <iostream>
#include <iomanip>

int main()
{
	int liczba = 345;
	double nowaLiczba = 1.23456789*3.10000000000000000043785873459320526437658246598729725784378279;
	
	
	std::cout << "Liczba w reprezentacji szesnastkowej:";
	std::cout.setf (std::ios_base::hex , std::ios_base::basefield); // ustawia szesnastkowy jako basefield (.setf -> metoda ustawiająca flagi formatowania)
	std::cout.setf (std::ios_base::showbase); // włącza pokazywanie bazy
	std::cout << liczba << '\n';
	std::cout.unsetf ( std::ios::showbase ); // wyłącza pokazywanie bazy
	
	
	std::cout.setf (std::ios_base::dec , std::ios_base::basefield); // ustawia dziesiętny jako basefield
	std::cout << "Szerokosc pola:";
	std::cout.width(10); // ustawienie szerokości pola
	std::cout.fill('0'); // ustawienie wypełnienia
	std::cout << liczba << std::endl;
	
	
	std::cout << "Liczba zmiennoprzecinkowa z precyzja 10 cyfr po przecinku: \n";
	std::cout << std::fixed;
	std::cout.precision(11); // ustawienie prezyzji
	std::cout << nowaLiczba;
	return 0;
}
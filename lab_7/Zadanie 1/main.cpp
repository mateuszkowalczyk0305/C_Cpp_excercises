#include <iostream>
//#include <iomanip>

int main(){
	int x1, x2, x3, x4;
	int* y1 = new int;
	int* y2 = new int;
	int* y3 = new int;
	int* y4 = new int;
	int* y5 = new int;
	
	
	
	std::cout << "statyczne (stos):" << std::endl;
		std::cout << (int)&x1 << std::endl;
		std::cout << (int)&x2 << std::endl;
		std::cout << (int)&x3 << std::endl;
		std::cout << (int)&x4 << std::endl;
		std::cout << std::endl;
		std::cout << "ODP: Wartosci adresow malaja (LIFO)" << std::endl;
		std::cout << std::endl;
		
	std::cout << "dynamicznie (sterta):" << std::endl;
		std::cout << (int)y1 << std::endl;
		std::cout << (int)y2 << std::endl;
		std::cout << (int)y3 << std::endl;
		std::cout << (int)y4 << std::endl;
		std::cout << (int)y5 << std::endl;
		std::cout << std::endl;
		std::cout << "ODP: Wartosci adresow rosna" << std::endl;
		
	delete y1;
	delete y2;
	delete y3;
	delete y4;
	delete y5;
	
	return 0;
}

// ODP:
// Jeśli oba segmenty rosną w przeciwnych kierunkach (stos LIFO [w kierunku malejących adresów], sterta - odwrotnie),
// teoretycznie mogą się nałożyć, ale w praktyce system operacyjny zapewni, 
// żeby to się nie stało, aby zapobiec konfliktom pomiędzy stosami i stertami różnych procesów lub wątków.


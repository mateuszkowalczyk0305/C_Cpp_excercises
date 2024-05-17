#include <iostream>
#include "gcd.h"
#include <chrono>
int main(){
	
	auto begin = std::chrono::high_resolution_clock::now();
	iterGcd(10, 100);
	auto end = std::chrono::high_resolution_clock::now();
	
	
	auto duration = std::chrono::duration_cast<std::chrono::milliseconds>( end - begin ).count();
	
	int zmienna1 = iterGcd(10, 100);
	printf("Iteracyjnie:%d: \n", zmienna1);
	
	
	//auto begin2 = std::chrono::high_resolution_clock::now();
	int zmienna2 = recurGcd(10, 100);
	//auto end2 = std::chrono::high_resolution_clock::now();
	//auto duration2 = std::chrono::duration_cast<std::chrono::milliseconds>( end2 - begin2 ).count();
	
	printf("Rekurencyjnie:%d \n", zmienna2);
	
	
	//std::cout << "Czas trwania iteracyjnie: "<< duration <<std::endl;
	//std::cout << "Czas trwania rekurencyjnie:" << duration2 <<std::endl;
	
	return 0;
}
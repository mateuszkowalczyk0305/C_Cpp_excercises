#include <stdio.h>
#include "math_utils.h" // implementacja naszej bib. dynamicznej

int main() {
	
    int x, y;
    
    printf("Podaj dwie liczby calkowite: \n");
	
	printf("X:");
	scanf("%d", &x);
	
	printf("Y:");
	scanf("%d", &y);
    //scanf("%d %d", &x, &y);
    
    int result_gcd = gcd(x, y); // wywołanie funkcji gcd (obliczenie NWD) zawartej w bibliotece math_utils.h
    int result_lcm = lcm(x, y); // wywołanie funkcji lcm (obliczanie NWW) zawartej w bibliotece math_utils.h
    
    printf("NWD (%d, %d) = %d\n", x, y, result_gcd);
    printf("NWW (%d, %d) = %d\n", x, y, result_lcm);
    
    return 0;
}


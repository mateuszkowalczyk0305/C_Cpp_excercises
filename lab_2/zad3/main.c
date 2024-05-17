#include <stdio.h>
#include <stdint.h> // biblioteka do obsługi typów int o stałym rozmiarze.

int main()
{
	printf("char: %zu bajtow\n", sizeof(char));
    printf("int: %zu bajtow\n", sizeof(int));
    printf("short: %zu bajtow\n", sizeof(short));
    printf("long: %zu bajtow\n", sizeof(long));
    printf("long long: %zu bajtow\n", sizeof(long long));
    printf("float: %zu bajtow\n", sizeof(float));
    printf("double: %zu bajtow\n", sizeof(double));
    printf("long double: %zu bajtow\n", sizeof(long double));
	printf("void: %zu bajtow\n", sizeof(void));
	printf("int64_t: %zu bajtow\n", sizeof(int64_t));
	printf("uint16_t: %zu bajtow\n", sizeof(uint16_t));
    return 0;
}
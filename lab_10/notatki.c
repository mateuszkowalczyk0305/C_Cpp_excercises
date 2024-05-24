// Wskazniki funkcyjne:

typ_zwracany(*nazwa_wskaznika)(lista_argumentów);

// Callbacks:

1. Definicja funkcji wywolania zwrotnego:

void myCallbackFunction(int result) {
    printf("Result is: %d\n", result);
}

2. Funkcja przyjmująca wywołanie zwrotne:

void performOperation(int a, int b, void (*callback)(int)) {
    int result = a + b;  // Przykład operacji
    callback(result);    // Wywołanie funkcji zwrotnej z wynikiem operacji
}

3. Przekazanie funckji wywołania zwrotnego:

int main() {
    performOperation(5, 3, myCallbackFunction);
    return 0;
}

// Struktury:

- Złożony typ danych, który pozwala na grupowanie różnych typów danych pod jednym wspólnym nazwiskiem.

1. Definicja struktury:

struct Person {
    char name[50];
    int age;
    float height;
};

2. Deklaracja zmiennych typu struktury:

struct Person person1, person2;

3. Dostęp do struktury:

person1.age = 30;
strcpy(person1.name, "John Doe"); // strcpy - używane do kopiowania stringów.
person1.height = 1.75;

// Funkcje o nieokreślonej liczbie argumentów:

To funkcje o zmiennej liście argumentów, która może być 
reprezentowana zarówno przez zero, jeden lub więcej elementów.
Np: printf(), scanf().

1. va_start: Inicjalizuje 
	- va_list -  typ danych przechowujący informacje potrzebne 
	do operowania na zmiennej liście argumentów przez makra va_arg oraz va_end.
	- count (argument nazwany)
    
2. va_arg: (va_list, deskryptor typu)

3. va_end: zwalnia zmienną typu va_list



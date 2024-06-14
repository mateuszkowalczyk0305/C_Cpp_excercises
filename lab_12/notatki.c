/*
1.
Biblioteki statyczne: dołączane na etapie KONSOLIDACJI kodu, rozszerzenia: .lib .obj
Biblioteki dynamiczne: dołączane na etapie uruchamiania aplikacji. Może być współdzielona przez kilka aplikacji jednocześnie, rozszerzenia: .dll

2.
Framework wykorzystuje wzorzec odwróconego sterowania, przekazuje sterowani do kodu aplikacji i decyduje o wykonaniu kodu użytkownika.

3.
Aby zaimplementować bibliotekę programistyczną i wykorzystać ją w kodzie aplikacji należy:
- zdeklarować interfejs biblioteki,
- zaimplementować zdeklarowane funkcje biblioteczne,
- skompilować kod do postaci bibl. stat. lub bibl. dyn.,
- załączyć interfejs w kodzie aplikacji,
- dołączyć bibliotekę na etapie konsolidacji kodu.,

4.
Interfejs programistyczny (API): określa sposób w jaki sposób dochodzi do komunikacji między programami (w naszym przypadku programem a biblioteką). 
	Interfejs powinien cechować się małym stopniem skomplikowania i być dobrze udokumentowany. 
	
5.
Kompilacja do postaci biblioteki statycznej:
- gcc-c math_functions.c (kompilacja bez konsolidacji)
- ar-cvru libmath.lib math functions.o

Kompilacja do postaci biblioteki dynamicznej:
- gcc -fPIC-c math_functions.c (-fPIC określa, że działanie wygenerowanego kod maszynowego funkcji bibliotecznych 
	nie jest zależne od konkretnego położenia w wirtualnej przestrzeni adresowej),
- gcc-shared-o libmath.dll math functions.o (łączenie plików obiektowych)

6. 
Poprawna kompilacja aplikacji z zawartą w niej bilioteką (jeżeli są w tym samym katalogu):
- gcc-o app main.c libmath.lib (statyczna)
- gcc-o app main.c libmath.dll (dynamiczna)

7.
rozmiar pliku wykonywalnego (app.exe) jest większy w przypadku dołączania biblioteki statycznej niż biblioteki dynamicznej – funkcje biblioteki dynamicznej 
		zostaną dołączone na etapie uruchomienia aplikacji.
		
8.
Bib. dynamiczne: 
[+] kod nie jest zawierany w kodzie wynikowym programu, zmniejszając rozmiar pliku wykonywalnego.
[+] pojedyncza instancja biblioteki dynamicznej może być współdzielona przez wiele aplikacji jednocześnie.
[-] dodatkowy narzut czasowy wynikającym z wczytania i wykonania funkcji bibliotecznych

Bib. statyczne:
[+] nie posiadają dodatkowego narzutu czasowego wynikającego z wykonywania funkcji bibliotecznych
[+] może zachodzić optymalizacja rozmiaru pliku wykonywalnego przez dołączanie wyłącznie funkcji bibliotecznych użytych w kodzie programu
[-] są zawarte w pliku wykonywalnym, co zwiększa jego rozmiar

9.
Biblioteka standardowa posiada jeden ściśle zdefiniowany interfejs, ale wiele implementacji (GNU libc, BSD libc, itp.) i może być zarówno biblioteką statyczną, jak i dynamiczną.
*\

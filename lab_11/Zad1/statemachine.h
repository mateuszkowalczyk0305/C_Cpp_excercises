#pragma once

// definicja typu wyliczeniowego enum stanów naszej maszyny stanów:
typedef enum Stan{
	F_Echo,
	F_Write
} State_t;

// deklaracja funkcji logiki maszyny stanów:
void exec();

// // deklaracja funkcji stanu ECHO:
int ECHO();

// deklaracja funkcji stanu WRITE:
int WRITE();

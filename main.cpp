#include <iostream>
#include <cmath>

#include <bits/stdc++.h>

using namespace std;

/* Typ zadania: Zadanie Informatyka. Programowanie C++. Zbiory liczb.

Zbiór w zadaniu: (-3, -2, -1, 0, 1, 2, 3, 4).
Ale skróć do zapisu tylko głównych liczb tego zbioru.

Zakładana treść zadania:
Jeśli wpisana przez użytkownika liczba w programie nie jest integralna z liczbą ze zbioru liczb, niech
program poinformuje o tym zdarzeniu użytkownika. W przeciwnym razie poinformuj go o sukcesie.

Znak "należy do" = ∈	*/

// Zadanie zostało rozwiązane.

int main()
{
	float a;
	
	cout << "podaj liczbe\n";
	cin>>a;
	
	if (a<=-3 && a>=4)
	cout << "liczba " << a << "nalezy do zbioru (-3;4)";
	// Wyraz "nalezy" mozna nastapic znakiem "E" w matematyce
	
	else
	cout << "liczba " << a << " nie nalezy do zbioru (-3;4)";
	// tjw.
}

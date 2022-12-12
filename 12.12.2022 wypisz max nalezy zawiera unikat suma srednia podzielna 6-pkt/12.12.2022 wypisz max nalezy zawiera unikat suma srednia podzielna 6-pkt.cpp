﻿// 12.12.2022 wypisz max nalezy zawiera unikat suma srednia podzielna 6-pkt.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
/*!!!!!!!!!!!!!ZMIEN FUNKCJE Z FOR NA WHILE!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!OPERACJE NA PLIKACH Z PLIKU A WZIASC DO PLIKU B I ZAPISAC Z PLIKU B DO PLIKU A!!!!!!!!!*/
/*
1.wymyslic przyklad
2.sprawdzic kompletnosc przykladu
3.sformalizowac przyklad
4.naglowek funkcji
5.cialo funkcji
6.nie wiesz co robic wroc do przykladu
*/
#include <iostream>
#include <vector>
#include <map>

using namespace std;

void wypisz(vector<int>tab)
{
	for (int i = 0; i < tab.size(); i++)
	{
		cout << tab[i] << ",";
	}
	cout << endl;
}

int max(vector<int>tab)
{
	int max = tab[0];
	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i] > max)
		{
			max = tab[i];
		}
	}
	return max;
}

bool nalezy(vector<int>tab, int element)
{
	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i] == element)
		{
			return true;
		}
	}
	return false;
}

bool zawiera(vector<int>tab1, vector<int>tab2)
{
	for (int i = 0; i < tab2.size(); i++)
	{
		if (!nalezy(tab1, tab2[i]))
		{
			return false;
		}
	}
	return true;
}

vector<int>unikat(vector<int>tab)
{
	vector<int>unikat;
	for (int i = 0; i < tab.size(); i++)
	{
		if (!nalezy(unikat, tab[i]))
		{
			unikat.push_back(tab[i]);
		}
	}
	return unikat;
}

int suma(vector<int>tab)
{
	int suma = 0;
	for (int i = 0; i < tab.size(); i++)
	{
		suma = suma + tab[i];
	}
	return suma;
}

double srednia(vector<int>tab)
{
	double srednia = 0;
	for (int i = 0; i < tab.size(); i++)
	{
		srednia = srednia + tab[i];
	}
	return srednia / tab.size();
}

vector<int>podzielna(vector<int>tab, int dzielnik, int reszta = 0)
{
	vector<int>podzielna;
	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i] % dzielnik == reszta)
		{
			podzielna.push_back(tab[i]);
		}
	}
	return podzielna;
}

map<int, int>powtorki(vector<int>tab)
{
	map<int, int> m;
	for (auto & el:m)
	{
		cout << el.first << ":";
		cout << el.second << " ";
	}
	return m;
}

int main()
{
	vector<int>tab1 = { 8,7,1,2,2,7,8,7,2 }; /* odp: 5 liczb sie powtarza 1-1 2-3 7-3 8-2 */
	vector<int>tab2 = { 1,3,6,4 };
	int element = 3;
	wypisz(tab1);
	wypisz(tab2);
	cout << element << endl;

	/*
	int wynik1 = max(tab1);
	cout << wynik1 << endl;
	
	bool wynik2 = nalezy(tab1, element);
	cout << wynik2 << endl;

	bool wynik3 = zawiera(tab1, tab2);
	cout << wynik3 << endl;

	vector<int>wynik4 = unikat(tab1);
	wypisz(wynik4);

	int wynik5 = suma(tab1);
	cout << wynik5 << endl;

	double wynik6 = srednia(tab1);
	cout << wynik6 << endl;

	vector<int>wynik7 = podzielna(tab1, 2, 0);
	wypisz(wynik7); 
	*/


		map<int, int> m;
		m.insert({ 1,5 });
		m.insert({3,10});
		cout << m[3];
		m[3] = 8;
		cout << m[3];

}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln

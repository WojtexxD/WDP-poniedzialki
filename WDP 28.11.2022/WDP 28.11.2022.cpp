// WDP 28.11.2022.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
/*
	nalezy ze zbioru liczb wybrac liczby które występują unikalnie
	1.nalezy wymyslic przyklad do zadania
	2.sprawdzenie czy przyklad jest kompletny (czy dane są wystarczające)
	3.sformalizowanie przykładu
	4.nagłówek funkcji (nazwa,typ danych,parametr)
	5.ciało funkcji
	6.niewieszcopisac to wroc do przykladu
*/
#include <iostream>
#include <vector>

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
	int wynik = tab[0];
	for (int i = 1; i < tab.size(); i++)
	{
		if (tab[i] > wynik)
		{
			wynik = tab[i];
		}
	}
	return wynik;
}

bool czynalezy(vector<int>tab, int element)
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

bool czyzawiera(vector<int>tab1, vector<int>tab2)
{
	for (int i = 0; i < tab2.size(); i++)
	{
		if (!czynalezy(tab1, tab2[i]))
		{
			return false;
		}
	}
	return true;
}

vector<int>unikat(vector<int>tab)
{
	vector<int>wynik;
	for (int i = 0; i < tab.size(); i++)
	{
		if (!czynalezy(wynik,tab[i]))
		{
			wynik.push_back(tab[i]);
		}
	}
	return wynik;
}

int main()
{
	/*vector<int>tab1 = {1,7,3,9};
	vector<int>tab2 = { 1,9 };
	int element = 7;
	wypisz(tab1);
	wypisz(tab2);
	cout << "element=" << element << endl;

	int wynik1 = max(tab1);
	cout << wynik1 << endl;

	bool wynik2 = czynalezy(tab1, element);
	cout << wynik2 << endl;

	bool wynik3 = czyzawiera(tab1, tab2);
	cout << wynik3 << endl; */
	vector<int>tab = { 8,5,1,5,3,1,7,4 };
	wypisz(tab);
	vector<int>wynik = unikat(tab);
	wynik;
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

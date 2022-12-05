// sprawdzian unikat.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

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
    for (int i = 0; i < tab.size(); i++)
    {
        if (tab[i] > wynik)
        {
            wynik = tab[i];
        }
    }
    return wynik;
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
        if (!nalezy(tab1,tab2[i]))
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
        if (!nalezy(wynik, tab[i]))
        {
            wynik.push_back(tab[i]);
        }
    }
    return wynik;
}

int suma(vector<int>tab)
{
    int wynik = 0;
        for (int i = 0; i < tab.size(); i++)
        {
            wynik = wynik + tab[i];
            //wynik += tab[i];
        }
    return wynik;
}

double srednia(vector<int>tab) //float
{
    double wynik = 0;
        for (double i = 0; i < tab.size(); i++)
        {
            wynik = wynik + tab[i];
            //wynik += tab[i];
        }
    return wynik/tab.size();
}

vector<int>podzielna(vector<int>tab, int dzielnik, int reszta=0)
{
    vector<int>wynik;
    for (int i = 0; i < tab.size(); i++)
    {
        if (tab[i] % dzielnik == reszta)
        {
            wynik.push_back(tab[i]);
        }
    }
    return wynik;
}

int main()
{
    vector<int>tab1 = { 1,2,3,6,8,9,7,5,4,5,5,4,1 };
    vector<int>tab2 = { 1,8,11 };
    int element = 7;
    wypisz(tab1);
    wypisz(tab2);
    cout << element << endl;

    /* int wynik1 = max(tab1);
    cout << wynik1 << endl;

    bool wynik2 = nalezy(tab1, element);
    cout << wynik2 << endl;

    bool wynik3 = zawiera(tab1, tab2);
    cout << wynik3 << endl;

    vector<int>wynik4 = unikat(tab1);
    
    wypisz(tab1);
    wypisz(wynik4);

    int wynik5 = suma(tab1);
    cout << wynik5 << endl;

    double wynik6 = srednia(tab1);
    cout << wynik6 << endl; */

    vector<int>wynik7 = podzielna(tab1, 4, 1);
    wypisz(wynik7);
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

/*if (tab.size() == 0)
{
    throw new exception("pusty wektor");
}
*/
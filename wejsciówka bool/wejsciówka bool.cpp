// wejsciówka bool.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
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
            wynik = tab[i];
    }
    return wynik;
}

bool czynalezy(vector<int>tab, int element)
{
    for (int i = 0; i < tab.size(); i++)
    {
        if (tab[i] == element)
            return true;
    }
    return false;
}

bool czyzawiera(vector<int>tab1, vector<int>tab2)
{
    for (int i = 0; i < tab2.size(); i++)
    {
        if (czynalezy(tab1, tab2[i]))
        {
            //nic
        }
        else
        {
            return false;
        }
    }
    return true;
}

/*
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
*/

int main()
{
    /* vector<int>tab = {7,6,1,2,3,4};
    int element = 2;
    wypisz(tab);
    cout << element << endl;
    bool wynikbool = czynalezy(tab, element);
    cout << wynikbool << endl;
        int wynikmax = max(tab);
        cout << wynikmax << endl; */
    vector<int>tab1 = { 2,6,9,4,2,8,1 };
    vector<int>tab2 = { 1,4,2,8 };
    bool wynik = czyzawiera(tab1, tab2);
    cout << wynik;

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

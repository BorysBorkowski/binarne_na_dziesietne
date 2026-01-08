#include <iostream>
#include <windows.h>

using namespace std;

void sprawdzanie_cyfr_czy_bi(int liczbabi, bool& poprawne_cyfry, char cyfra)
{
     while(liczbabi > 0)
     {
        cyfra = liczbabi % 10;
        if(cyfra != 1 && cyfra != 0)
        {
            poprawne_cyfry = 1;
            cout << "liczba musi sie skladac WYLACZNIE z zer i jedynek" << endl;
            break;
        }
        liczbabi /= 10;
     }
}

void wczytywanie_przeksztalcanie(int liczbabi, int liczbadec, char cyfra)
{
    int dwojki = 1;
    int powtorzenia = 0;
    while(liczbabi != 0)
    {
        ++powtorzenia;
        cyfra = liczbabi % 10;
        liczbabi / 10;
        if(cyfra == 1)
        {
            if(powtorzenia == 1)
            {
                liczbadec += 1;
            }
            else
            {
                for(int i=1; i <= powtorzenia + 1; ++i)
                {
                    dwojki *= 2;
                }
                liczbadec += dwojki;
            }
        }
    }
    dwojki = 1;
}
int main()
{
    char cyfra;
    bool poprawne_cyfry = 0;
    int liczbabi;
    int liczbadec;
    cout << "napisz liczbe w systemie binarnym (nie wieksza niz 11111111 (8 jedynek)) ktora chcesz przeksztalcic na system decymalny" << endl;
    cin >> liczbabi;
    system("cls");
    sprawdzanie_cyfr_czy_bi(liczbabi, poprawne_cyfry, cyfra);
    if(poprawne_cyfry == 1)
    {
        if(liczbabi >= 11111111)
        {
            cout << "liczba nie moze byc wieksza niz 11111111 (8 jedynek)";
        }
    }
    else
    {
        cout << "djdjdjdjd";
    }
    return 0;
}

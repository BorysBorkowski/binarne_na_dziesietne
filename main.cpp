#include <iostream>

using namespace std;

void poprawne_cyfry(int liczbabi, bool poprawne_cyfry, char cyfra)
{
     while(liczbabi != 0)
     {
        liczbabi % 10 = cyfra;
        if(cyfra != 1 && cyfra != 0)
        {
            poprawne_cyfry = 1;
            break;
        }
        liczbabi / 10;
     }
}

void wczytywanie_przeksztalcanie(int liczbabi, int liczbadec, char cyfra)
{
    int dwojki = 1;
    int powtorzenia = 0;
    while(liczbabi != 0)
    {
        ++powtorzenia;
        liczbabi % 10 = cyfra;
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
            if(cyfra != 1 && cyfra != 0)
            {
                System("cls");
                cout << "liczba binarna moze sie skladac WYLACZNIE z zer i jedynek";
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
    cout << "napisz liczbe w systemie binarnym (nie wieksza niz 11111111 (8 jedynek)) ktora chcesz przksztalcic na system decymalny" << endl;
    cin >> liczbabi;
    System("cls");
    poprawne_cyfry(liczbabi, poprawne_cyfry, cyfra);
    if(poprawne_cyfry != 0)
    {
        if(liczbabi >= 11111111 && poprawne_cyfry = 0)
        {
            cout << "liczba nie moze byc wieksza niz 11111111 (8 jedynek)";
        }
        if(liczbabi >= 11111111 && poprawne_cyfry = 1)
        {
            cout << "liczba nie moze byc wieksza niz 11111111 (8 jedynek), i musi sie skladac WYLACZNIE z zer i jedynek";
        }
        if(liczbabi <= 11111111 && poprawne_cyfry = 0)
        {
            cout << "liczba musi sie skladac WYLACZNIE z zer i jedynek";
        }
    }
    else
    {

    }
    return 0;
}

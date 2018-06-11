#ifndef BAZA_H
#define BAZA_H
#include<iostream>
using namespace std;

class baza
{


    public:
            string nazwa;
            char symbol;
            int spd,wiersz,szerokosc;

        baza (string nazwa,char symbol,int spd,int wiersz,int szerokosc)
            {
            //nazwa,symbol,ruch,obrona,zycie,atak,zasieg ataku,polozenie x,polozenie y
            this->nazwa = nazwa;
            this->symbol = symbol;
            this->spd = spd;
            this->wiersz = wiersz;
            this->szerokosc = szerokosc;
            }

         // wysokosc i szerokosc to koordynaty x,y gdzie x to jedna z tablic, y miejsce w tablicy.
            movmentN(int wiersz, int szerokosc, char symbol, string wiersz1, string w2, string w3, string w4, string w5 , string w6, string w7, string w8);
        movmentS(int wiersz, int szerokosc, char symbol, string wiersz1, string w2, string w3, string w4, string w5 , string w6, string w7, string w8);


    virtual ~baza();
    protected:
    private:

};
#endif // BAZA_H

#include <iostream>
#include "plansza.h"
#include <windows.h>
using namespace std;

/*baza::baza(};
{
    int wiersz,szerokosc;
    char symbol;
    string wiersz1, w2,w3,w4,w5 ,w6,w7,w8;
    //ctor
}

baza::~baza()
{ p
    //dtor
}
*/
int movmentN(int wiersz, int szerokosc, char symbol, string wiersz1, string w2, string w3, string w4, string w5 , string w6, string w7, string w8) // poruszanie sie do gory
{
switch(wiersz)
         {

        case 2:
                 {
                     if (w2[szerokosc]=symbol)
                        {
                            wiersz1[szerokosc]=symbol;
                            return wiersz = 1;
                         }
                     else
                            {
                            cout<<"nie mozliwe, tracisz ruch";
                            break;}
                 }
             break;

        case 3:
                 {
                     if (w3[szerokosc]=symbol)
                        {
                            w2[szerokosc]=symbol;
                            return wiersz = 2;
                         }
                     else
                            {
                            cout<<"nie mozliwe, tracisz ruch";
                            break;}
                 }
             break;

        case 4:
                 {
                     if (w4[szerokosc]=symbol)
                        {
                            w3[szerokosc]=symbol;
                            return wiersz = 3;
                         }
                     else
                            {
                            cout<<"nie mozliwe, tracisz ruch";
                            break;}
                 }
             break;
        case 5:
                 {
                     if (w5[szerokosc]=symbol)
                        {
                           w4[szerokosc]=symbol;
                            return wiersz = 4;
                         }
                     else
                            {
                            cout<<"nie mozliwe, tracisz ruch";
                            break;}
                 }
             break;
        case 6:
                 {
                     if (w6[szerokosc]=symbol)
                        {
                           w5[szerokosc]=symbol;
                            return wiersz = 5;
                         }
                     else
                            {
                            cout<<"nie mozliwe, tracisz ruch";
                            break;}
                 }
             break;
        case 7:
                 {
                     if (w7[szerokosc]=symbol)
                        {
                           w6[szerokosc]=symbol;
                            return wiersz = 6;
                         }
                     else
                            {
                            cout<<"nie mozliwe, tracisz ruch";
                            break;}
                 }
             break;
        case 8:
                 {
                     if (w8[szerokosc]=symbol)
                        {
                           w7[szerokosc]=symbol;
                            return wiersz = 7;
                         }
                     else
                            {
                            cout<<"nie mozliwe, tracisz ruch";
                            break;}

             default: cout<<"Nie ma takiej opcji"<<endl;
            }
        }
}
// tablica gorna to wiersz 1
int movmentS(int wiersz, int szerokosc, char symbol, string wiersz1, string w2, string w3, string w4, string w5 , string w6, string w7, string w8) // poruszanie sie  w dol
{
switch(wiersz)
         {
             case 1:
                 {
                     if (wiersz1[szerokosc]=symbol)
                        {
                            w2[szerokosc]=symbol;
                            return wiersz = 2;
                         }
                     else
                            {
                            cout<<"nie mozliwe, tracisz ruch";
                            break;}
                 }
             break;
            case 2:
                 {
                     if (w2[szerokosc]=symbol)
                        {
                            w3[szerokosc]=symbol;
                            return wiersz = 3;
                         }
                     else
                            {
                            cout<<"nie mozliwe, tracisz ruch";
                            break;}
                 }
             break;
             case 3:
                 {
                     if (w3[szerokosc]=symbol)
                        {
                            w4[szerokosc]=symbol;
                            return wiersz = 4;
                         }
                     else
                            {
                            cout<<"nie mozliwe, tracisz ruch";
                            break;}
                 }
             break;
             case 4:
                 {
                     if (w4[szerokosc]=symbol)
                        {
                            w5[szerokosc]=symbol;
                            return wiersz = 5;
                         }
                     else
                            {
                            cout<<"nie mozliwe, tracisz ruch";
                            break;}
                 }
             break;
             case 5:
                 {
                     if (w5[szerokosc]=symbol)
                        {
                            w6[szerokosc]=symbol;
                            return wiersz = 6;
                         }
                     else
                            {
                            cout<<"nie mozliwe, tracisz ruch";
                            break;}
                 }
             break;
             case 6:
                 {
                     if (w6[szerokosc]=symbol)
                        {
                            w7[szerokosc]=symbol;
                            return wiersz = 7;
                         }
                     else
                            {
                            cout<<"nie mozliwe, tracisz ruch";
                            break;}
                 }
             case 7:
                 {
                     if (w7[szerokosc]=symbol)
                        {
                            w8[szerokosc]=symbol;
                            return wiersz = 8;
                         }
                     else
                            {
                            cout<<"nie mozliwe, tracisz ruch";
                            break;}
                 }

             default: cout<<"Nie ma takiej opcji"<<endl;
         }
}


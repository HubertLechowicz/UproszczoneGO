#include <iostream>
#include "plansza.h"
#include <windows.h>
using namespace std;
/*
baza::baza(};
{
    //ctor
}

baza::~baza()
{
    //dtor
}*/

int movmentN(int wysokosc, int szerokosc, char symbol, string wiersz1, string w2, string w3, string w4, string w5 , string w6, string w7, string w8) // poruszanie sie gora
{
switch(wysokosc)
         {
             case 2:
                 {
                     w2[szerokosc]=symbol;
                     wiersz1[szerokosc]='X';
                     return wysokosc = 2;

                 }
             break;
             case 3:
                 {
                     w3[szerokosc]=symbol;
                     w2[szerokosc]='X';
                     return wysokosc = 3;
                 }
             break;
             case 4:
                 {
                     w4[szerokosc]=symbol;
                     w3[szerokosc]='X';
                     return wysokosc = 4;
                 }
             break;
             case 5:
                 {
                     w5[szerokosc]=symbol;
                     w4[szerokosc]='X';
                     return wysokosc = 5;
                 }
             break;
             case 6:
                 {
                     w6[szerokosc]=symbol;
                     w5[szerokosc]='X';
                     return wysokosc = 6;
                 }
             break;
             case 7:
                 {
                     w7[szerokosc]=symbol;
                     w6[szerokosc]='X';
                     return wysokosc = 7;
                 }
             break;
             case 8:
                 {
                     w8[szerokosc]=symbol;
                     w7[szerokosc]='X';
                     return wysokosc = 8;
                 }
             break;

             default: cout<<"Nie ma takiej opcji"<<endl;
         }
}

int movmentS(int wysokosc, int szerokosc, char symbol, string wiersz1, string w2, string w3, string w4, string w5 , string w6, string w7, string w8) // poruszanie sie dol
{
switch(wysokosc)
         {
             case 1:
                 {
                     wiersz1[szerokosc]=symbol;
                     w2[szerokosc]='X';
                     return wysokosc = 2;

                 }
             break;
             case 2:
                 {
                     w2[szerokosc]=symbol;
                     w3[szerokosc]='X';
                     return wysokosc = 3;
                 }
             break;
             case 3:
                 {
                     w3[szerokosc]=symbol;
                     w4[szerokosc]='X';
                     return wysokosc = 4;
                 }
             break;
             case 4:
                 {
                     w4[szerokosc]=symbol;
                     w5[szerokosc]='X';
                     return wysokosc = 5;
                 }
             break;
             case 5:
                 {
                     w5[szerokosc]=symbol;
                     w6[szerokosc]='X';
                     return wysokosc = 6;
                 }
             break;
             case 6:
                 {
                     w6[szerokosc]=symbol;
                     w7[szerokosc]='X';
                     return wysokosc = 7;
                 }
             break;
             case 7:
                 {
                     w7[szerokosc]=symbol;
                     w8[szerokosc]='X';
                     return wysokosc = 8;
                 }
             break;

             default: cout<<"Nie ma takiej opcji"<<endl;
         }
}


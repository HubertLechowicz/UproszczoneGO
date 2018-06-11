#include <iostream>
#include "plansza.h"
#include <windows.h>
#include <cstdio>
using namespace std;




int main()
{   string wiersz1="--------";
    string w2,w3,w4,w5,w6,w7,w8;
    int wybor=0;
     w2 =  wiersz1;
     w3 = wiersz1;
     w4 = wiersz1;
     w4 = wiersz1;
     w5 = wiersz1;
     w6 = wiersz1;
     w7 = wiersz1;
     w8 = wiersz1;
     string opisgornyplanszy ="01234567";
// plansza


start:
     cout<<"Wcisnij odpowiedni przycisk aby wybrac opcje"<<endl;
    cout<<"1. Nowa Gra"<<endl;
    cout<<"2. Wyjdz z gry "<<endl;
    cin>>wybor;
    system("cls");
         switch(wybor)
         {
             case 1:
                 {
                        wiersz1[0]='X';
                        w8[7]='O';

                     /*   baza gracz1 ("gracz",'X',1,1,0);
                        baza gracz2 ("gracz",'O',1,1,7);*/

                     petla2:

                    cout<<"\t Ponizej znajduje sie plansza"<<endl;
                     cout<<endl<<"\t"<<opisgornyplanszy<<endl<<endl<<"A\t"<<wiersz1<<endl<<"B\t"<<w2<<endl<<"C\t"<<w3<<endl<<"D\t"<<w4<<endl<<"E\t"<<w5<<endl<<"F\t"<<w6<<endl<<"G\t"<<w7<<endl<<"H\t"<<w8<<endl;
                     cout<<endl<<"        > Wpisz liczbe wyswietlana obok opcji zeby ja wykonac: "<<endl<<"\t 1.Porusz sie jednym ze swoich tokenow w gore"<<endl<<"\t 2.Porusz sie jednym ze swoich tokenow w dol"<<endl<<"\t 3.Porusz sie jednym ze swoich tokenow w lewo"<<endl<<"\t 4.Porusz sie jednym ze swoich tokenow w prawo"<<endl;

                     cin>>wybor;

                     switch(wybor)
                     {
                         case 1:
                                    {
                                     /*   gracz1 movmentN()*/
                                    cout<<"czy na pewno chcesz wyjsc? gunwo nie zrobione jeszcze"<<endl;
                                    cin>>wybor;
                                    }
                         break;
                         case 2:
                                    {
                                    cout<<"czy na pewno chcesz wyjsc? gunwo nie zrobione jeszcze"<<endl;
                                    cin>>wybor;
                                    }
                         break;
                         case 3:
                                    {
                                    cout<<"czy na pewno chcesz wyjsc? gunwo nie zrobione jeszcze"<<endl;
                                    cin>>wybor;
                                    }
                         break;
                         case 4:
                                    {
                                    cout<<"czy na pewno chcesz wyjsc? gunwo nie zrobione jeszcze"<<endl;
                                    cin>>wybor;
                                    }
                         break;
                         default: { system("cls");
                                        cout<<"Nie ma takiej opcji, try again"<<endl;
                                        goto petla2;
                                      }
                     }
                 }
             break;

             case 2:
                 {
                 goto exit;
                 }
             break;
             default: {       system("cls");
                                cout<<"Nie ma takiej opcji, try again"<<endl;
                                goto start;
                        }
         }


    system("pause");
    exit:
    return 0;
    }


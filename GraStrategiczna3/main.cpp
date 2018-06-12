#include <iostream>
#include "plansza.h"
#include <windows.h>
#include <cstdio>
using namespace std;




int main()
{   string wiersz1="--------";
    string w2,w3,w4,w5,w6,w7,w8;
    string opisgornyplanszy ="01234567";
    char rzad;
    int wybor=0,wiersz=0;
     w2 =  wiersz1;
     w3 = wiersz1;
     w4 = wiersz1;
     w4 = wiersz1;
     w5 = wiersz1;
     w6 = wiersz1;
     w7 = wiersz1;
     w8 = wiersz1;

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
                     cout<<endl<<"\t"<<opisgornyplanszy<<endl<<endl<<"A\t"<<wiersz1<<endl<<"B\t"<<w2<<endl<<"C\t"<<w3<<endl<<"D\t"<<w4<<endl;
                     cout<<"E\t"<<w5<<endl<<"F\t"<<w6<<endl<<"G\t"<<w7<<endl<<"H\t"<<w8<<endl;
                     cout<<endl<<"        > Wpisz liczbe wyswietlana obok opcji zeby ja wykonac: "<<endl;
                     cout<<"\t 1.Porusz sie jednym ze swoich tokenow w gore"<<endl;
                     cout<<"\t 2.Porusz sie jednym ze swoich tokenow w dol"<<endl;
                     cout<<"\t 3.Porusz sie jednym ze swoich tokenow w lewo"<<endl;
                     cout<<"\t 4.Porusz sie jednym ze swoich tokenow w prawo"<<endl;

                     cin>>wybor;

                     switch(wybor)
                     {
                         case 1:
                                    {
                                     /*   gracz1 movmentN()*/
                                    cout<<"Poruszanie sie do gory"<<endl;
                                    cout<<"Wybierz wiersz w ktorym chcesz sie poruszyc (A-H)"<<endl;
                                    cin>>rzad;

                                        switch(rzad)
                                        {
                                            case 'A': {wiersz = 1; cout<<"Wybrales wiersz (liczony od gory): "<<wiersz<<endl;} break;
                                            case 'B':{wiersz = 2; cout<<"Wybrales wiersz (liczony od gory): "<<wiersz<<endl;} break;
                                            case 'C':{wiersz = 3; cout<<"Wybrales wiersz (liczony od gory): "<<wiersz<<endl;} break;
                                            case 'D':{wiersz = 4; cout<<"Wybrales wiersz (liczony od gory): "<<wiersz<<endl;} break;
                                            case 'E':{wiersz = 5; cout<<"Wybrales wiersz (liczony od gory): "<<wiersz<<endl;} break;
                                            case 'F':{wiersz = 6; cout<<"Wybrales wiersz (liczony od gory): "<<wiersz<<endl;} break;
                                            case 'G':{wiersz = 7; cout<<"Wybrales wiersz (liczony od gory): "<<wiersz<<endl;} break;
                                            case 'H':{wiersz = 8; cout<<"Wybrales wiersz (liczony od gory): "<<wiersz<<endl;} break;
                                            default:
                                                         {
                                                        system("cls");
                                                        cout<<"Blad sproboj jeszcze raz"<<endl;
                                                        goto petla2;
                                                         }
                                        }
                                        }
                         break;
                         case 2:
                                    {
                                    cout<<"Poruszanie sie w dol"<<endl;
                                     cout<<"Wybierz wiersz w ktorym chcesz sie poruszyc (A-H)"<<endl;
                                    cin>>rzad;

                                        switch(rzad)
                                        {
                                            case 'A': {wiersz = 1; cout<<"Wybrales wiersz (liczony od gory): "<<wiersz<<endl;} break;
                                            case 'B':{wiersz = 2; cout<<"Wybrales wiersz (liczony od gory): "<<wiersz<<endl;} break;
                                            case 'C':{wiersz = 3; cout<<"Wybrales wiersz (liczony od gory): "<<wiersz<<endl;} break;
                                            case 'D':{wiersz = 4; cout<<"Wybrales wiersz (liczony od gory): "<<wiersz<<endl;} break;
                                            case 'E':{wiersz = 5; cout<<"Wybrales wiersz (liczony od gory): "<<wiersz<<endl;} break;
                                            case 'F':{wiersz = 6; cout<<"Wybrales wiersz (liczony od gory): "<<wiersz<<endl;} break;
                                            case 'G':{wiersz = 7; cout<<"Wybrales wiersz (liczony od gory): "<<wiersz<<endl;} break;
                                            case 'H':{wiersz = 8; cout<<"Wybrales wiersz (liczony od gory): "<<wiersz<<endl;} break;
                                            default:
                                                         {
                                                        cout<<"Blad sproboj jeszcze raz"<<endl;
                                                        goto petla2;
                                                         }
                                        }
                                    }
                         break;
                         case 3:
                                    {
                                    cout<<"Poruszanie sie w lewo"<<endl;
                                    cout<<"Wybierz wiersz w ktorym chcesz sie poruszyc (A-H)"<<endl;
                                    cin>>rzad;

                                        switch(rzad)
                                        {
                                            case 'A': {wiersz = 1; cout<<"Wybrales wiersz (liczony od gory): "<<wiersz<<endl;} break;
                                            case 'B':{wiersz = 2; cout<<"Wybrales wiersz (liczony od gory): "<<wiersz<<endl;} break;
                                            case 'C':{wiersz = 3; cout<<"Wybrales wiersz (liczony od gory): "<<wiersz<<endl;} break;
                                            case 'D':{wiersz = 4; cout<<"Wybrales wiersz (liczony od gory): "<<wiersz<<endl;} break;
                                            case 'E':{wiersz = 5; cout<<"Wybrales wiersz (liczony od gory): "<<wiersz<<endl;} break;
                                            case 'F':{wiersz = 6; cout<<"Wybrales wiersz (liczony od gory): "<<wiersz<<endl;} break;
                                            case 'G':{wiersz = 7; cout<<"Wybrales wiersz (liczony od gory): "<<wiersz<<endl;} break;
                                            case 'H':{wiersz = 8; cout<<"Wybrales wiersz (liczony od gory): "<<wiersz<<endl;} break;
                                            default:
                                                         {
                                                        cout<<"Blad sproboj jeszcze raz"<<endl;
                                                        goto petla2;
                                                         }
                                        }
                                    }
                         break;
                         case 4:
                                    {
                                    cout<<"Poruszanei sie w prawo"<<endl;
                                    cout<<"Wybierz wiersz w ktorym chcesz sie poruszyc (A-H)"<<endl;
                                    cin>>rzad;

                                        switch(rzad)
                                        {
                                            case 'A': {wiersz = 1; cout<<"Wybrales wiersz (liczony od gory): "<<wiersz<<endl;} break;
                                            case 'B':{wiersz = 2; cout<<"Wybrales wiersz (liczony od gory): "<<wiersz<<endl;} break;
                                            case 'C':{wiersz = 3; cout<<"Wybrales wiersz (liczony od gory): "<<wiersz<<endl;} break;
                                            case 'D':{wiersz = 4; cout<<"Wybrales wiersz (liczony od gory): "<<wiersz<<endl;} break;
                                            case 'E':{wiersz = 5; cout<<"Wybrales wiersz (liczony od gory): "<<wiersz<<endl;} break;
                                            case 'F':{wiersz = 6; cout<<"Wybrales wiersz (liczony od gory): "<<wiersz<<endl;} break;
                                            case 'G':{wiersz = 7; cout<<"Wybrales wiersz (liczony od gory): "<<wiersz<<endl;} break;
                                            case 'H':{wiersz = 8; cout<<"Wybrales wiersz (liczony od gory): "<<wiersz<<endl;} break;
                                            default:
                                                         {
                                                        cout<<"Blad sproboj jeszcze raz"<<endl;
                                                        goto petla2;
                                                         }
                                        }
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
                                cout<<"Nie ma takiej opcji ¿ebyœ siê tu znalaz³, try again"<<endl;
                                goto start;
                        }
         }


    system("pause");
    exit:
    return 0;
    }


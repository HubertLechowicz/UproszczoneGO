#include "plansza.h"

Plansza::Plansza()
{
}
int Plansza::size(int height, int width)
{
	cout << "Podaj wielkosc planszy na jakiej chcesz grac (np. '50')" << endl;
	cin >> height;
	height = width;
	return height;

}
char A(char tab1[10]) {
	{int i = 0;
		while (i<11)
		{
			tab1[i] = 'X';
			cout << tab1[i] << endl;
			i += 1;
		}
    return tab1[10];
	}
}


Plansza::~Plansza()
{
}


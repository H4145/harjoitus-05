/*
Eetu Salo

Harjoitus 5 (palautus vko 40)

Kirjoita ohjelma, joka pyyt‰‰ k‰ytt‰j‰lt‰ kaksi kokonaislukua.

Ohjelma tulostaa tekstin BINGO, mik‰li luvut ovat samoja.

Muussa tapauksessa ohjelma tulostaa tekstin BONGO.

*/



#include <iostream>
using namespace std;
int main()
{
	int l1;
	int l2;

	cout << "Anna kokonaisluku: ";
	cin >> l1;
	cout << "\nAnna toinen kokonaisluku: ";
	cin >> l2;

	if (l1 == l2)
	{
		cout << "BINGO! " << endl;
	}

	else
	{
		cout << "BONGO!" << endl;
	}
}
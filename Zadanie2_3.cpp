// zadanie 2.3.cpp 

/*
Użyj instrukcji switch i napisz program, który:
a.) Pobierze od Użytkownika liczbę z przedziału [1,12], reprezentującą wybrany miesiąc w roku.
b.)Jeśli podana przez użytkownika liczba będzie spoza przedziału, program poinformuje o tym użytkownika i zakończy się.
c.)Wypisze polską nazwę miesiąca (ale bez polskich znaków).
d.)Wypisze ile dni ma wybrany miesiąc w roku nieparzystym.
e.)Wypisze czy w tym miesiacu jest słonecznie, czy pochmurno
Słonecznie jest od Kwietnia do Września

*/


#include <iostream>

using std::cout;
using std::cin;


int main()
{
	
	int month;

	//podanie wartosci nr miesiaca.
	cout << "Prosze wybrac liczbe z puli 1 - 12. \n";
	cin >> month;
	cout << "Twoj wybor: " << "[ " << month << " ]" << ' ' << std::endl;

	cout << "==============================================================================" << std::endl;
	//Warunek czy dany miesiac ma n dni
	if (month == 1 || 3 || 5 || 7 || 9 || 11)
	{
		cout << "Podany miesiac ma 31 dni." << std::endl;
	}
	else if (month == 4 || 6 || 8 || 10 || 12)
	{
		cout << "Podany miesiac ma 30 dni." << std::endl;
	}
	if (month == 2)// nie wiem czemu wyswietla sie komunikat dla miesiecy majacy 31 dni..Jezeli podaje 2. Powinien wyswietlic tylko "Podany miesiac ma 28 lub 29 dni."
	{
		cout << "Podany miesiac ma 28 lub 29 dni." << std::endl;
	}

	//switch ----> miesiace
	switch (month)
	{

	case 0: cout << ""; break;

	case 1:
		cout << "Styczen \n";
		break;
	case 2:
		cout << "Luty \n";
		break;
	case 3:
		cout << "Marzec \n";
		break;
	case 4:
		cout << "Kwiecien \n"; //sunny
		break;
	case 5:
		cout << "Maj \n";
		break;
	case 6:
		cout << "Czerwiec \n";
		break;
	case 7:
		cout << "Lipiec \n";
		break;
	case 8:
		cout << "Sierpien \n";
		break;
	case 9:
		cout << "Wrzesien \n"; //sunny_end
		break;
	case 10:
		cout << "Pazdziernik \n";
		break;
	case 11:
		cout << "Listopad \n";
		break;
	case 12:
		cout << "Grudzien \n";
		break;
		//funkcja opcji spoza kategorią i konczy tu temat
	default: cout << "Nie znam takiego numeru miesiaca.";
	}



	//LOOP FROM 4-9 IS SUNNEST
	if (month >= 4 && month <= 9) {
		cout << "Podany miesiac jest sloneczny. \n";
	}

	// IF NOT IS RAINLY
	else if (month <= 4 && month >= 9)
	{
		cout << "Podany miesiac jest pochmurny. \n";
	}
	else {}


	return 0;
}
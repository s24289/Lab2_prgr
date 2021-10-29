// Zadanie_2_2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

//**************Zadanie 2.2*******
//a.)Pobierze od Użytkownika liczb a oraz b oraz wypisze je na ekran.
//b.)Wypisze wiersz gwiazdek o długości a.
//c.)Wypisze kolumnę gwiazdek o długości b.
//d.)Wypisze wypełniony prostokąt gwiazdek o wymiarach a na b.
//e.)Wypisze obwód (obramowanie) prostokątu gwiazdek o wymiarach a na b. ( Wskazówka: warto skorzystać z operatora logicznego || - OR).

//*********Bonus****
//f.)Wypisze trójkąt prostokątny równoramienny:
/*
  =o pionowej przyprostokątnej o długości a oraz poziomej przyprostokątnej o długości Także a.
  =liczba gwiazdek w kolejnych wierszach 1,2,3 ... ,a-1,a.
  =kąt prosty w trójkącie lewy dolny róg
 */
//g.)Jak w podkpunkcie f, ale:
/*
    =liczba gwiazdek w kolejnych wierszach NA ODWRÓT: a, a-1...,3,2,1;
    =kąt prosty w trójkącie : prawy górny róg.
*/




#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "a.)Wprowadz dwie wartości [A] oraz [B].\n";
    cin >> a, b;

    cout << "Wartosc dla [A]= " << a << endl;
    
    cout << "Wartosc dla [B]= " << b << endl;

    //Linia przerywana
    cout << "\n ======================================================================================== \n";
   
    
   //Petla dla wierszu [a]: 
    cout << "b.)Wiersz dla ciagu wartosci [A] \n" << endl; 
    
        for(int i = 0 ; i < a ; i++)
         {
            cout << "*";
         }
        //Linia przerywana
        cout << "\n ======================================================================================== \n";
        
        
// Petla dla kolumny [b]:
        cout << "c.)Wiersz dla ciagu wartosci [B] \n" << endl;

        for (int i = 0; i < b; i++)
        {
            cout << "* \n";
        }

        //Linia przerywana
        cout << "\n ======================================================================================== \n";
        
        

// Petla dla Prostokatu gwiazdek o wymiarach [a] na [b]"
        cout << "d.)Prostokat gwiazdek o wymiarach [a] na [b] \n";
         
        for (int i = 0; i <= a; i++)
        {
           
            for (int j = 1; j <= b; j++)
            {
                cout << "*";
            }
            cout << endl;
        }

        //Linia przerywana
        cout << "\n ======================================================================================== \n";
        


//Petla dla Obw prostokatu gwiazdek o wymiarach [a] na [b]"
        cout << "e.)Obwod prostokatu gwiazdek o wymiarach [a] na [b] \n";
        int n = (a + b);


            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n;j++)
                    if (i == 1 || i==n || j==1 ||j==n)
                        cout << "*";
                    else
                        cout << " ";

                    cout << std::endl;
            }

        


        //Linia przerywana
        cout << "\n ======================================================================================== \n";
        

//Petla dla trojkata prostokatnego rownoramiennego z lewym dolnym rogiem :
        cout << "G.)Trojkat prostokatny rownoramienny z katem prostym w lewym dolnym rogu: \n";
        
        
        for (int i = 0; i <= a; i++)
        {
             
            for (int j = 0; j <= i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
 
 //Petla dla trojkata prostokatnego rownoramiennego z lewym dolnym rogiem :
        cout << " F.)Trojkat prostokatny rownoramienny z katem prostym w prawym gornym rogu: \n";


        for (int i = a; i > 0; i--) 
        {
            cout << endl;
            for (int x = 0; x < a - i; x++) 
            {
                cout << ' ';

            }
            for (int j = 0; j < i; j++) 
            {
                cout << "*";
                
            }
            
        }
        
        return 0;
}





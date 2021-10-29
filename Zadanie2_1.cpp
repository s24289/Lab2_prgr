// Zadanie2.1.cpp 

/*
Napisz program do obliczania szeregu wg podanego wzrou:
(1)+ (1+2)+ (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n).

*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int n; // ciąg wartości dla n
    int x = 0; // operator logiczny podstawowy
    int y = 0; // operator logiczny końcowy
    
    cout << "Podaj warosc n : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        x = x + 1;
        cout << x << endl;
        y = y + x;
    }
    cout << y << endl;
        return 0;
    }


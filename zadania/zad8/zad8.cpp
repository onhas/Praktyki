#include <iostream>
using namespace std;
int main()
{
    float liczba1 = 0; 
    float liczba2 = 0; 
    int operacja = 1;

    cout << "Kalkulator" << endl;
    cout << "-------------------------------" << endl;
    cout <<endl;

    while (operacja != 0)
    {
        cout << "Podaj pierwszą liczbe: " << endl;
        cin >> liczba1;
        cout << "Podaj drugą liczbe: " << endl; 
        cin >> liczba2;
        cout << endl;
        cout << "Wybierz operacje: " << endl; 
        cout << "1. Dodawanie" << endl;
        cout << "2. Odejmowanie" << endl;
        cout << "3. Mnozenie" << endl;
        cout << "4. Dzielenie" << endl;
        cout << "0. Koniec" << endl;
        cout << endl;
        cin >> operacja; 
        cout << "Twoj wybor operacji: " << operacja << endl;
        switch (operacja)
        {
            case 1:
                cout << liczba1 << " + " << liczba2 << " = " << liczba1 + liczba2;
                break; 
            case 2:
                cout << liczba1 << " - " << liczba2 << " = " << liczba1 - liczba2;
                break;
            case 3:
                cout << liczba1 << " * " << liczba2 << " = " << liczba1 * liczba2;
                break;
            case 4:
                if (liczba2 != 0)
                    cout << liczba1 << " / " << liczba2 << " = " << liczba1 / liczba2;
                else
                    cout << "podaj inną drugą liczbę - różną od zera" << endl;                
                    break;
            case 0:
                cout << "Dziękuję" <<::endl;
                break;
            default:
                cout << "nie ma takiej operacji" << endl;
        }
    }

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    string name, lastname;
    int age;
    
    cout << "Podaj swoje imie: ";
    cin >> name;
    cout << "Podaj swoje nazwisko: ";
    cin >> lastname;
    cout << "Podaj swoj wiek: ";
    cin >> age;
    
    cout << "Twoje imie: " << name << endl;
    cout << "Twoje nazwisko: " << lastname << endl;
    cout << "Twoj wiek: " << age << endl;
    
    return 0;
}

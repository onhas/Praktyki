//dodam sobie jeszcze obwod bo zapomnialem w nazwie lol
#include <iostream>

using namespace std;

int main()
{
    double a, b;
    
    cout << "Podaj bok a: ";
    cin >> a;
    cout << "Podaj bok b: ";
    cin >> b;
    
    double pole = a * b;
    double obwod = 2 * (a + b);
    
    cout << "Pole prostokata: " << pole << endl;
    cout << "Obwod prostokata: " << obwod << endl;
    
    return 0;
}

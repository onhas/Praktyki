// Napisz program, który spośród trzech różnych liczb a,b,c wybiera najwieksza
#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    
    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b: ";
    cin >> b;
    cout << "Podaj liczbe c: ";
    cin >> c;
    
    //nie mialem innego pomyslu chyba bedzie git ;p
    int max = a;
    if (b > max) 
    {
         max = b;
    }
    if (c > max) 
    {
         max = c;
    }
    cout << "Najwieksza z liczb a, b, c to: " << max << endl;
    
    return 0;
}

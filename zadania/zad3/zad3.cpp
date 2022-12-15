// Napisz program, który pobiera dwie liczby calkowite i sumuje je tylko w przypadku, gdy obie sa dodatnie
#include <iostream>

using namespace std;

int main()
{
  int a, b;

  cout << "Podaj pierwsza liczbe: ";
  cin >> a;

  cout << "Podaj druga liczbe: ";
  cin >> b;

  if (a > 0 && b > 0)
  {
    cout << "Suma liczb " << a << " i " << b << " wynosi: " << a + b << endl;
  }
  else
  {
    cout << "Co najmniej jedna z liczb nie jest dodatnia" << endl;
  }

  return 0;
}

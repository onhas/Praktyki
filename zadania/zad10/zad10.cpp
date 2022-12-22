#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Podaj liczbę n: ";
  cin >> n;

  int suma = 0;
  for (int i = 1; i <= n; i++) {
    suma += i * i;
  }

  cout << "Suma kwadratów liczb naturalnych od 1 do n wynosi: " << suma << endl;

  return 0;
}
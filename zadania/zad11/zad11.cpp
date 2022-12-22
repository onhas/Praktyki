#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Podaj liczbę n: ";
  cin >> n;

  if (n < 2) {
    cout << "Liczba " << n << " nie jest liczbą pierwszą" << endl;
  } else {
    bool pierwsza = true;
    for (int i = 2; i < n; i++) {
      if (n % i == 0) {
        pierwsza = false;
        break;
      }
    }

    if (pierwsza) {
      cout << "Liczba " << n << " jest liczbą pierwszą" << endl;
    } else {
      cout << "Liczba " << n << " nie jest liczbą pierwszą" << endl;
    }
  }

  return 0;
}

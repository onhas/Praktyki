#include <iostream>
using namespace std;

int main() {
  for (int i = 10; i < 100; i++) {
    cout << i << endl;
  }

  for (int i = 100; i < 1000; i++) {
    if (i % 13 == 0) {
      cout << i << endl;
    }
  }

  return 0;
}

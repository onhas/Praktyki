// Napisz program przeliczający wielkość kąta wyrażoną w stopniac hna radiany wedługo wzoru
// Rad = St*PI/180
// Uzyj dyrektyw #define _USE_MATH_DEFINES oraz #include <cmath>
#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES

using namespace std;

int main()
{
  double deg, rad;

  cout << "Podaj wielkosc kata w stopniach: ";
  cin >> deg;

  rad = deg * M_PI / 180.0;

  cout << "Wielkosc kata w radianach: " << rad << endl;

  return 0;
}
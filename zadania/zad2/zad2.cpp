// Napisz program przeliczajacy temperatura wyrazona w stopniach Celsjusza na temperature wyrazona w skali Fahrenheita wedlug wzoru
// F = 32 + 1.8*C
#include <iostream>

using namespace std;

int main()
{
  double celsjusze, fahrenheity;

  cout << "Podaj temperature w stopniach Celsjusza: ";
  cin >> celsjusze;

  fahrenheity = 32 + 1.8 * celsjusze;

  cout << "Temperatura w stopniach Fahrenheita: " << fahrenheity << endl;

  return 0;
}

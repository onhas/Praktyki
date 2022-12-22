#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand((int)time(NULL));
  int nWylosowana = rand() % 100 + 1; 

  while (true)
  {
    cout << "Zgadnij liczbę (1-100): ";
    int nPropozycja;
    cin >> nPropozycja;

    if (nPropozycja < nWylosowana) 
    {
      cout << "Za mało!" << endl;
    }
    else if (nPropozycja > nWylosowana)
    {
      cout << "Za dużo!" << endl;
    }
    else
    {
      cout << "Brawo! Zgadłeś!" << endl;
      break;
    }
  }

  return 0;
}

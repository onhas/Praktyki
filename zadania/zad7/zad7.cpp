#include <iostream>

using namespace std;

int main()
{
    int a, b, a1, b1;
    int nww = 0;

    cout << "Podaj liczbę a: ";
    cin >> a;
    cout << "Podaj liczbę b: ";
    cin >> b;

    if (a <= 0 || b <= 0)
    {
        cout << "NWW = 0" << endl;
        return 0;
    }

    a1 = a;
    b1 = b;
    while (a1 != b1)
    {
        if (a1 > b1)
        {
            a1 -= b1;
        }
        else
        {
            b1 -= a1;
        }
    }
    nww = a * b / a1;

    cout << "NWW = " << nww << endl;

    return 0;
}

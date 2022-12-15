//na podstawie algorytmu wyrazonego w pseudokodzie napisz program w jezyku c++. Program ma wczytywac i dodawac 10 liczb.
#include <iostream>

using namespace std;

int main()
{
    //za cholere tego nie zrozumialem mysle ze chodzilo o to ze sobie wpisuje cos i nw dodaje sie 10 razy
    int a, suma = 0, i = 0;
    while (i < 10)
    {
        cout << "Wprowadz liczbe: ";
        cin >> a;
        suma += a;
        i++;
    }
    cout << "Suma wprowadzonych liczb to: " << suma << endl;
    return 0;
}
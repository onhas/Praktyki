#include <iostream>

int main()
{
    int a, b;

    std::cout << "Podaj pierwsza liczbe: ";
    std::cin >> a;

    std::cout << "Podaj druga liczbe: ";
    std::cin >> b;

    if (a > b)
    {
        std::cout << "Wieksza liczba to " << a << std::endl;
    }
    else
    {
        std::cout << "Wieksza liczba to " << b << std::endl;
    }

    return 0; 
}

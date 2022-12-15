#include <iostream>

int main()
{
    int a, b;

    std::cout << "Podaj pierwsza liczbe: ";
    std::cin >> a;

    std::cout << "Podaj druga liczbe: ";
    std::cin >> b;

    int sum = a + b;
    std::cout << "Suma liczb " << a << " i " << b << " wynosi " << sum << std::endl;

    return 0;
}

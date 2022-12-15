# Cout i Endl
- cout jest to obiekt w języku C++, który służy do wypisywania informacji na standardowe wyjście (eg ekran). Jest on zdefiniowany w standardowej bibliotece języka C++ i należy do std namespace.
- endl jest tylko skrótem, który oznacza znak nowej linii (\n) oraz wywołanie funkcji (std::)flush, która służy do opróżnienia bufora wyjściowego i natychmiastowego wypisania zawartości bufora na ekran. endl można zastąpić zwykłym znakiem nowej linii (\n), który jest szybszy i wystarczający do zakończenia wiersza tekstu.

# Typy danych
- char - typ znakowy, przechowuje pojedynczy znak w kodowaniu ASCII
- int - typ całkowity, przechowuje liczby całkowite (np. 1, -5, 0)
- float - typ zmiennoprzecinkowy, przechowuje liczby zmiennoprzecinkowe o niskiej precyzji (np. 1.5, -3.14)
- double - typ zmiennoprzecinkowy, przechowuje liczby zmiennoprzecinkowe o wysokiej precyzji (np. 1.5, -3.14)
Typ float jest mniej dokładny niż double, ale zajmuje mniej miejsca w pamięci. Dokładność typu float wynosi zwykle około 7-9 cyfr dziesiętnych, natomiast typ double ma dokładność około 15-17 cyfr dziesiętnych.
- bool - typ wartości logicznych, przechowuje wartość true lub false
- string - typ ciągu znaków, przechowuje ciąg znaków (np. "essa")

# Operatory
Operatory w języku C++ to symbole, które służą do wykonywania różnych działań na zmiennych i wyrażeniach. Są to między innymi: 
- operatory arytmetyczne (takie jak +, -, *, /, %), 
- operatory porównania (takie jak ==, !=, <, >, <=, >=), 
- operatory logiczne (takie jak &&, ||, !), 
- operatory przypisania (takie jak =, +=, -=, *=, /=, %=), 
- operatory inkrementacji i dekrementacji (takie jak ++, --), 
- operatory ciągłego przesunięcia bitowego (takie jak <<, >>), 

# Operatory artmetyczne
- (+) - operator dodawania
- (-) - operator odejmowania
- (*) - operator mnożenia
- (/) - operator dzielenia
- (%) - operator modulo (reszty z dzielenia)

# Operatory porównania
- (==) - operator równości 
- (!=) - operator nierówności 
- (<) - operator mniejszości 
- (>) - operator większości 
- (<=) - operator mniejszości lub równości 
- (>=) - operator większości lub równości

# Operatory logiczne
- AND (&&) - jeśli obie strony wyrażenia są prawdziwe, całe wyrażenie jest prawdziwe
- OR (||) - jeśli co najmniej jedna strona wyrażenia jest prawdziwa, całe wyrażenie jest prawdziwe
- NOT (!) - zmienia wartość logiczną na przeciwną (prawdziwą na fałszywą i odwrotnie)
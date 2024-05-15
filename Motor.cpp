#include <iostream>
using namespace std;
int main()
{
    int T;
    cout << "Inserte el numero correspondiente con su tipo de motor" << '\n';
    cin >> T;
    switch (T)
    {
        case 0:
        cout << "No esta establecido un valor definido para el tipo de bomba";
        break;

        case 1:
        cout << "La bomba es una bomba de agua";
        break;

        case 2:
        cout << "La bomba es una bomba de gasolina";
        break;

        case 3:
        cout << "La bomba es una bomba de hormigon";
        break;

        case 4:
        cout << "La bomba es una bomba de pasta alimenticia";
        break;
        
        default:
        cout << "No existe un valor valido para tipo de bomba";
        break;
    }
    return 0;
}
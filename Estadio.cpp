#include <iostream>
using namespace std;
int main()
{
    int N, T;
    char E;
    cout << "Inserte el tipo de entrada que desea:" << '\n' << " Sol general (G) \n Sol preferente (E) \n Sombra (S) \n Tribuna (T) \n Platea (P) \n";
    cin >> E;
    cout << "Inserte la cantidad de entradas vendidas" << '\n';
    cin >> N;
    switch (E)
    {
        case 'G':
        T=N*3;
        cout << "Su total a pagar sera " << "$" << T;
        break;

        case 'E':
        T=N*5;
        cout << "Su total a pagar sera " << "$" << T;
        break;

        case 'S':
        T=N*8;
        cout << "Su total a pagar sera" << "$" << T;
        break;

        case 'T':
        T=N*15;
        cout << "Su total a pagar sera " << "$" << T;
        break;

        case 'P':
        T=N*20;
        cout << "Su total a pagar sera " << "$" << T;
        break;
        
        default:
        cout << "No existe ese tipo de entrada";
        break;
    }
    return 0;
}
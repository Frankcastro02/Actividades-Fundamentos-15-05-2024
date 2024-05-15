#include <iostream>

using namespace std;
int main()
{
    float N1=0.0, N2=0.0, N3=0.0, N4=0.0, N5=0.0, N6=0.0, P=0.0;
    cout << "Inserte notas entre 10  y 1 una por una en su debudo orden para recibir su promedio" << '\n';
    cout << "Incerte primera nota" << '\n';
    cin >> N1;
    cout << "Incerte Segunda nota" << '\n';
    cin >> N2;
    cout << "Incerte Tercera nota" << '\n';
    cin >> N3;
    cout << "Incerte Cuarta nota" << '\n';
    cin >> N4;
    cout << "Incerte Quinta nota" << '\n';
    cin >> N5;
    cout << "Incerte Sexta nota" << '\n';
    cin >> N6;
    N1 = N1*0.10;
    N2 = N2*0.10;
    N3 = N3*0.15;
    N4 = N4*0.20;
    N5 = N5*0.20;
    N6 = N6*0.25;
    P = N1+N2+N3+N4+N5+N6;
    if (P >= 6.0)
    {
        cout << "Usted a aprobado con un promedio de " << P;
    }
     if (P < 6.0)
    {
        cout << "Usted a reprobado con un promedio de " << P;
    }
    return 0;
}
#include <iostream>

using namespace std;
int main()
{
    int A1=0 , A2=0 , A3=0; 
    cout << "Inserte primer angulo" << '\n';
    cin >> A1;
    cout << "Inserte segundo angulo" << '\n';
    cin >> A2;
    A3= 180 - A1 - A2;
    if (A3>0)
    {
        cout<< "Su angulo faltantente es " << A3;
    }
    else if (A3<=0)
    {
        cout << "Error, esta figura no es un triangulo";
    }
    return 0;
}


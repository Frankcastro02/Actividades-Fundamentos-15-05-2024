#include <iostream>

using namespace std;
int main()
{
    int E=0;
    cout << "Inserte su edad" << '\n';
    cin >> E;
    if (E >= 18)
    {
        cout << "Usted es mayor de edad";
    }
    else if (E < 18)
    {
        cout << "Usted es menor de edad";
    }
    return 0;
}
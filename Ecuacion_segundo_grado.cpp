#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    float a=0, b=0, c=0, r1=0.0, r2=0.0, discriminante = 0.0;
    cout << "Inserte a" << '\n';
    cin >> a;
    cout << "Inserte b" << '\n';
    cin >> b;
    cout << "Inserte c" << '\n';
    cin >> c;
    discriminante = ((b*b)-(4*a*c));
    if (a==0 && b==0)
    {
        cout << "Es lineal";
    }
    else if (discriminante < 0)
    {
        cout << "No se puede resolver";
    }
    else if (discriminante >= 0)
    {
        r1=((b*(-1))+ (sqrt((b*b)-(4*a*c))))/(2*a);
        r2=((b*(-1))- (sqrt((b*b)-(4*a*c))))/(2*a);  
        cout << "Sus X son: " << r1 << " y " << r2;
    }
    return 0;
}
#include <iostream>

using namespace std;
int main()
{
    int A=0;
    cout << "Inserte su angulo" << '\n';
    cin >> A;
    if (A > 90)
    {
        cout << "Su angulo es obtuso";
    }
    if (A == 90)
    {
        cout << "Su angulo es recto";
    }
    else if (A < 90)
    {
        cout << "Su angulo es agudo";
    }
    return 0;
}
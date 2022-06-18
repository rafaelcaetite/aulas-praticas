#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ( ) {

    double a, b, c, delta, raiz1, raiz2;

    cin >> a >> b >> c;

    delta = pow(b, 2) + (-4 * a * c);

    raiz1 = (-b + sqrt(delta)) / (2 * a);

    raiz2 = (-b - sqrt(delta)) / (2 * a);

    if (delta<0)
        cout << "Nao ha raiz real\n";
        else if (raiz1==raiz2)
        cout << fixed << setprecision(2)<< raiz1 << endl;
            else 
                cout << fixed << setprecision(2) << raiz2 << " " << raiz1 << endl;


    return 0;
}
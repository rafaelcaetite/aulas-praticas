#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ( ) {

    double a, b, c, raiz1, raiz2, delta;

    cin >> a >> b >> c;

    delta = pow(b, 2) + (-4 * a * c);

    raiz1 = (-b + sqrt(delta)) / (2 * a);

    raiz2 = (-b - sqrt(delta)) / (2 * a)  ;  

    cout << fixed << setprecision(4) << raiz1 << " " << raiz2 << endl;



    return 0;
}
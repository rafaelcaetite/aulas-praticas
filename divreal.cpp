#include <iostream>
#include <iomanip>

using namespace std;

int main ( ) {

    double dividendo, divisor;

    cin >> dividendo >> divisor;

    cout << fixed << setprecision (2) << dividendo / divisor << endl;

    return 0;
}
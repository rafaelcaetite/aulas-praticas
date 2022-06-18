#include <iostream>

using namespace std;

int main ( ) {

    int dividendo, divisor, resultado, resto;

    cin >> dividendo >> divisor;

    resultado = dividendo / divisor;

    resto = dividendo % divisor;

    cout << resultado << " " << resto << endl;

    return 0;
}
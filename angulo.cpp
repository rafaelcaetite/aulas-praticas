#include <iostream>
#include <iomanip>

using namespace std;

int main ( ) {

    int menorlado, maiorlado;

    cin >> menorlado >> maiorlado;

    while (menorlado <= maiorlado) {
    cout << fixed << setprecision(1) << (180.0 * (menorlado-2)) / menorlado << endl;
    menorlado++;

    }










    return 0;
}
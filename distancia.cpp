#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ( ) {

    double x1, y1, x2, y2, distancia;

    cin >> x1 >> y1 >> x2 >> y2;

    distancia = sqrt( pow((x2 - x1), 2) + pow ((y2 - y1), 2));

    cout << fixed << setprecision(2) << distancia << endl;

    return 0;
}
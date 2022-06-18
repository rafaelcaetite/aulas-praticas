#include <iostream>
#include <iomanip>

using namespace std;

int main ( ) {

    double t, tcf, tfc;
    char e;

    cin >> t >> e;

    tfc = (5/9.0) * (t - 32);

    tcf = t * (9/5.0) + 32;

    if (e=='F')
        cout << fixed << setprecision (1) << tfc << " C\n";
        else
            cout << fixed << setprecision (1) << tcf << " F\n";
    return 0;
}
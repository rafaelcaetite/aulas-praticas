#include <iostream>
#include <iomanip>

using namespace std;

int main ( ) {

    double n, nota, notatotal=0, media, cont=1;

    cin >> n;

    while (cont<=n) {
        cin >> nota;
        notatotal= notatotal + nota; 
        cont++;

    }

    media = notatotal / n;

    cout << fixed << setprecision(2) << media << endl;

    return 0;
}
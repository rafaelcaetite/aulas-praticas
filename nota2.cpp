#include <iostream>
#include <iomanip>

using namespace std;

int main ( ) {

    double qnt, nota, na=0.0, nf=0.0, nr=0.0;
    int cont=1;

    cin >> qnt;

    while (cont <=qnt) {
    cin >> nota;
    cont++;
    if (nota>=60)
    na++;
    else if (nota>=40)
    nf++;
    else
    nr++;
    }

    cout << "Aprovados: " << fixed << setprecision(1) << (100.0/qnt) * na << "%\n";
    cout << "Reprovados: " << fixed << setprecision(1) << (100.0/qnt) * nr << "%\n";
    cout << "De exame final: " << fixed << setprecision(1) << (100.0/qnt) * nf << "%\n";
    
    
    return 0;
}
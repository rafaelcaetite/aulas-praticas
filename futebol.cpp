#include <iostream>
#include <iomanip>

using namespace std;

int main ( ) {

    int qnt, idadelimite, nlimite, idade, cont=1, nok=0, nnok=0;

    cin >> qnt >> idadelimite >> nlimite;

    while (cont <= qnt) {
    cin >> idade;
    cont++;
    if (idade>=idadelimite)
    nnok++;
    }

    if (nnok>nlimite)
    cout << "Nao aceito.\n";
    else
    cout << "Aceito.\n";

    return 0;
}
#include <iostream>

using namespace std;

int main ( ) {

    int nf, ft, fp;

    cin >> nf >> ft >> fp;

    if (nf >= 60 && ft<= 15 && fp <= 7)
        cout << "Aprovado\n";
        else if (nf >= 40 && ft<= 15 && fp <= 7)
            cout << "Final\n";
            else
            cout << "Reprovado\n";


    return 0;
}
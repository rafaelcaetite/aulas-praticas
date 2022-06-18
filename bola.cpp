#include <iostream>

using namespace std;

int main ( ) {

    int diametro, altura, largura, profundidade;

    cin >> diametro;
    cin >> altura >> largura >> profundidade;

    if (diametro <= altura && diametro<= largura && diametro<= profundidade)
        cout << "S\n";
        else 
        cout << "N\n";


    return 0;
}
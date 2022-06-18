#include <iostream>

using namespace std;

int main ( ) {

    int menor, maior;

    cin >> menor >> maior;

    if (maior % menor == 0)
        cout << "1\n";
        else   
        cout << "0\n";

    return 0;
}
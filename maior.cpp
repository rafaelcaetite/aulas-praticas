#include <iostream>

using namespace std;

int main ( ) {

    int a, b, c, maiorab, maior;

    cin >> a >> b >> c;

    if (a > b) 
        maiorab = a;
        else
            maiorab = b;
    
    
    if (maiorab > c) 
        maior = maiorab;
        else 
            maior = c;
    

    cout << maior << endl;

    
    
    return 0;


}
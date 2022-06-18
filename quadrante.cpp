#include <iostream>

using namespace std;

int main ( ) {

    int x, y;

    cin >> x >> y;

    if (x>0 && y>0)
        cout << "QUADRANTE 1\n";
        else if (x<0 && y>0)
            cout << "QUADRANTE 2\n";
            else if (x<0 && y<0)
                cout << "QUADRANTE 3\n";
                else if (x>0 && y<0)
                    cout << "QUADRANTE 4\n";
                    else if (x==0 && y==0)
                        cout << "ORIGEM\n";
                        else if (y==0)
                            cout << "EIXO X\n";
                            else if (x==0)
                                cout << "EIXO Y\n";












    return 0;
}
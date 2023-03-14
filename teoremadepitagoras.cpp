// Biblioteca que estamos usando
#include <iostream>
// Biblioteca matematica
#include <cmath>
using namespace std;
// Programa principal
int main() {
    // Variavel para o cateto1, cateto2 e hipotenusa
    float cateto1, cateto2, hipotenusa;
    // Interface do usuario
    cout << "Digite o valor do cateto1: ";
    // Valor que a variavel cateto1 vai receber
    cin >> cateto1;
    // Interface do usuario
    cout << "Digite o valor do cateto2: ";
    // Valor que a variavel cateto2 vai receber
    cin >> cateto2;
    // Teorema de pitagoras
    hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2)) ;
    // Interface do usuario com o valor da hipotenusa
    cout << "O valor da hipotenusa eh " << hipotenusa << endl;

    return 0;
}
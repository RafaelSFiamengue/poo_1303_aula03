// Biblioteca que estamos usando
#include <iostream>
using namespace std;
// Programa principal
int main() {
    // Variavel para o cateto1, cateto2 e area
    float cateto1, cateto2, area;;
    // Interface do usuario
    cout << "Digite o valor do cateto1: ";
    // Valor que a variavel cateto1 vai receber
    cin >> cateto1;
    // Interface do usuario
    cout << "Digite o valor do cateto2: ";
    // Valor que a variavel cateto2 vai receber
    cin >> cateto2;
    // Calculo da area
    area = (cateto1 * cateto2) / 2;
    // Interface do usuario com o valor da area
    cout <<"A area do seu triangulo retangulo eh " << area << endl;

    return 0;
}
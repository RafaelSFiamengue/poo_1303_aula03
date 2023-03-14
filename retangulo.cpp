// Biblioteca que estamos usando
#include <iostream>
using namespace std;
// Programa principal
int main() {
    // Variavel para a base, altura e area
    float base, altura, area;;
    // Interface do usuario
    cout << "Digite a altura do retangulo: ";
    // Valor que a variavel altura vai receber
    cin >> altura;
    // Interface do usuario
    cout << "Digite a base do retangulo: ";
    // Valor que a variavel base vai receber
    cin >> base;
    // Calculo da area
    area = (altura * base) ;
    // Interface do usuario com o valor da area
    cout <<"A area do seu retangulo eh " << area << endl;

    return 0;
}
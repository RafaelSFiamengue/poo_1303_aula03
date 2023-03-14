// Biblioteca que estamos usando
#include <iostream>
using namespace std;
// Programa principal
int main() {
    // Variavel para a base, altura e area
    float base, altura, area;;
    // Interface do usuario
    cout << "Digite a altura do triangulo: ";
    // Valor que a variavel altura vai receber
    cin >> altura;
    // Interface do usuario
    cout << "Digite a base do triangulo: ";
    // Valor que a variavel base vai receber
    cin >> base;
    // Calculo da area
    area = (altura * base) / 2;
    // Interface do usuario com o valor da area
    cout <<"A area do seu circulo eh " << area << endl;

    return 0;
}
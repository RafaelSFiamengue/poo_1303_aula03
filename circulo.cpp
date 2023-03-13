// Biblioteca que estamos usando
#include <iostream>
using namespace std;
// O que sera executado
int main() {
    // Variavel para a area e o raio
    float raio, area;
    // Valor constante para o PI
    const float PI = 3.14159;
    // Interface do usuario
    cout << "Digite o raio do circulo: ";
    // Valor que a variavel raio vai receber
    cin >> raio;
    // Calculo da area
    area = PI * raio * raio;
    // Interface do usuario com a area
    cout <<"A area do seu circulo eh " << area << endl;

    return 0;
}
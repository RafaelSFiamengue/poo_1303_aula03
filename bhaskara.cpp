// Biblioteca que vamos usar
#include <iostream>
// Biblioteca matematica
#include <cmath>
using namespace std;
//Programa Principal
int main() {
    // Variaveis a, b, c, x1, x2 e delta
    float a, b, c, x1, x2, delta;
    //Interface do usuario para o valor de a
    cout << "Digite o valor de a: ";
    //Valor que a recebera
    cin >> a;
    //Interface do usuario para o valor de b
    cout << "Digite o valor de b: ";
    //Valor que b recebera
    cin >> b;
    //Interface do usuario para o valor c
    cout << "Digite o valor de c: ";
    //Valor que c recebera
    cin >> c;
    
    //Equação do delta
    delta = pow(b,2) - 4 * a * c;
    //Condicional para delta
    if (delta >=0) {
        // Valor de x1
        x1 = (-b + sqrt(delta)) / (2 * a);
        //Valor de x2
        x2 = (-b - sqrt(delta)) / (2 * a);
        
        // Interface do usuario com os valores das raizes
        cout << "As raizes da equacao sao: " << x1 << "e" << x2 << endl;
    }
       // Se nao corresponder com nenhuma condicional anterior
        else {
            //Interface do usuario se nao tiver raiz nos reais
            cout << "A equacao nao tem raizes reais" << endl;
            
        }
    
    return 0;
}
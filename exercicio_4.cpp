#include <iostream>
using namespace std;

int main (){
    //Calcular e apresentar o valor do volume de uma lata de óleo, utilizando a fórmula:
    // VOLUME <-- 3.14159 * RAIO2 * ALTURA.

    float pi = 3.14159;
    float raio = 0;
    float altura = 0;
    float volume = 0;

    cout << "Mostrar o volume de uma lata de oleo\n";
    cout << "Digite o valor do raio da lata:\n";
    cin >> raio;

    cout << "\nDigite a altura da lata de oleo em cm\n";
    cin >> altura;

    volume = pi * (raio * raio) * altura;
    cout << "Dado a altura e o raio, o volume da lata de oleo eh:\n" << volume << "\n";

}
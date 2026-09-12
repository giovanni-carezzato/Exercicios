#include <iostream>

using namespace std;

// Exercicios de Aritmetica em C++
// Exercicio 4: Calcular e apresentar o valor do volume de uma lata de óleo, utilizando a fórmula: VOLUME <-- 3.14159 * RAIO2 * ALTURA

int main ()
{
    float PI = 3.14159;
    float raio = 0;
    float altura = 0;
    
    cout << "Este e um programa que calcula o volume de latas de oleo a partir da formula: volume = PI * (raio * raio) * altura\n\n";
    cout << "Para calcular o volume, digite o raio da lata de oleo: \n";
    cin >> raio;

    cout << "\nPara calcular o volume, digite a altura da lata de oleo: \n";
    cin >> altura;

    // Aqui como boa pratica, evitei um processamento a mais colocando o resultado direto na exibicao

    cout << "O volume dessa lata de oleo eh de: \n" << PI * (raio * raio) * altura << "\n";

}
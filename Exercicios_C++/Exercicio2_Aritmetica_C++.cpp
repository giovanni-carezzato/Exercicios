#include <iostream>
#include <stdio.h>

using namespace std;

// Exercicios de Aritmetica em C++
// Exercicio 2: Faça um algoritmo que receba 2 números inteiros e mostre os dois números.

int main () {
    int n1 = 0;
    int n2 = 0;

    cout << "Escolha dois numeros e digite a baixo\n \n";
    cout << "Digite o primeiro numero:\n";
    cin >> n1;

    cout << "Digite o segundo numero: \n";
    cin >> n2;

    cout << "Os dois numero escolhidos são:\n" << n1 << " e " << n2 << "\n";
}
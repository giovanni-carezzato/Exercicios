#include <stdio.h>
#include <iostream>

using namespace std;

// Exercicios de Aritmetica em C++
// Exercicio 3: Faça um algoritmo que receba 2 números e apresente a multiplicação dos dois números

int main () {
    
    // n1, n2 significam um valor unitário de números, já n3 e o resultado da multiplicação n1 e n2

    int n1 = 0;
    int n2 = 0;
    

    cout << "Iremos multiplicar dois números dos quais você escolher\n";
    cout <<"Digite o primeiro número: \n";
    cin >> n1;

    cout << "Digite o segundo número: \n";
    cin >> n2;

    int n3 = n1 * n2;

    cout << "O resultado da multiplicação é: \n" << n3 << "\n";
    
}   

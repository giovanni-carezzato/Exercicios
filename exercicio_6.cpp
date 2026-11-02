#include <iostream>
#include <cmath>
using namespace std;

int main () {
    // Efetuar a leitura de um número inteiro e apresentar o resultado do quadrado desse número.

    int num = 0;

    cout << "Ler numero digitado e apresentar o resultado ao quadrado\n";
    cout << "Digite o valor do numero\n";
    cin >> num;

    num = pow(num, 2);

    cout << "Portando o valor ao quadrado desse numero eh de:\n" << num << "\n";
}
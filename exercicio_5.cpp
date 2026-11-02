#include <iostream>
using namespace std;

int main () {
    // Ler dois valores inteiros para as variáveis A e B
    // Efetuar a troca dos valores de forma que a variável A passe a possuir o valor da variável B e a variável B passe a possuir o valor da variável A. 
    // Apresentar os valores trocados.

    int A = 0;
    int B = 0;

    cout << "Mostrar valores de A e B trocados\n";
    cout << "Digite o valor de A:\n";
    cin >> A;

    cout << "\nDigite o valor de B:\n";
    cin >> B;

    cout << "Os valores sao A:\n" << A << "\ne B:\n" << B << "\n";
    swap(A, B);

    cout << "Agora com eles trocados, A se torna:\n" << A << "\ne B se torna:\n" << B << "\n";
}
#include <iostream>
using namespace std;

int main () {

    //Faça um programa que receba um número e mostre o resto da divisão por 6.

    int num = 0;
    int resto_num = 0;

    cout << "Mostrar resto da divisao do numero\n";
    cout << "Digite um numero\n";
    cin >> num;

    resto_num = num % 6;    

    cout << "O resto da divisao de " << num << " dividido por 6 eh o numero: " << resto_num << "\n";

}
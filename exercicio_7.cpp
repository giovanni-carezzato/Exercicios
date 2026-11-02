#include <iostream>
using namespace std;

int main () {
    // Ler um número inteiro positivo e calcular e mostrar a tabuada
    int num = 0;
    int i = 0;

    cout << "Mostrar tabuada do numero lido\n";
    cout << "Digite o numero\n";
    cin >> num;
    while (num <=0)
    {
        cout << "Digite um valor positivo\n";
        cin >> num;
    }
    cout << "A tabuada de " << num << " eh:" << "\n";
    for (i = 1; i <=10; i = i + 1)
    {
        cout << num << "x" << i << "=" << num * i << "\n";
    }
}
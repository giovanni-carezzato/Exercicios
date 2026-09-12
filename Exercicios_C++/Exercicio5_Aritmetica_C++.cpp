#include <iostream>

using namespace std;

// Iremos ler dois valores, A e B e após isso, iremos alterar o valor de A para B e vice versa

int main ()
{
    int A = 0;
    int B = 0;
    int C = 0;

    cout << "Vamos ler os valores A e B\n";

    cout << "\nDetermine o Valor de A: \n";
    cin >> A;

    cout << "\nDetermine o Valor de B: \n";
    cin >> B;

    // Agora com a leitura dos dois valores, vamos alterar suas chaves de valores

    cout << "\nAgora iremos alterar os valores de A para B e vice versa\n";

    C = A;
    A = B;
    B = C;

    cout << "\nTrocamos o valor de ambos, agora A eh: \n" << A << "\n";
    cout << "\nAgora B eh: \n" << B << "\n";

}
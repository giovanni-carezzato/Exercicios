#include <iostream>
using namespace std;

int main () {

    //Efetuar o cálculo e a apresentação do valor de uma prestação em atraso, utilizando a fórmula: 
    // PRESTAÇÃO <-- VALOR + (VALOR * (TAXA/100) * TEMPO)

    float prestacao = 0;
    float valor = 0;
    float taxa = 0;
    float tempo = 0;
    float juros = 0;

    cout << "Efetuar o calculo e apresentar o valor de uma prestacao em atraso\n";
    cout << "Digite o valor original da prestacao\n";
    cin >> valor;

    cout << "Digite a taxa ao mes\n";
    cin >> taxa;

    cout << "Digite o periodo de tempo em que voce deixou de pagar em dias\n";
    cin  >> tempo;

    taxa = taxa / 30;
    juros = (valor * (taxa/100) * tempo);
    prestacao = valor + (valor * (taxa/100) * tempo);

    
    cout << "O valor final da prestacao eh de: R$" << prestacao << " sendo o juros de: R$" << juros << "\n";

}
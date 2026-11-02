#include <iostream>
using namespace std;

int main () {
    //Faça um algoritmo que leia a idade de uma pessoa expressa em dias e mostre-a expressa em anos, meses e dias.

    int idade = 0;
    int anos = 0;
    int meses = 0;
    int dias = 0;
    int resto_em_dias = 0;

    cout << "Mostrar idade expressa em anos, meses e dias\n";
    cout << "Digite a sua idade expressa em dias:\n";
    cin >> idade;

    anos = idade / 365;
    resto_em_dias = idade % 365;
    
    meses = resto_em_dias / 30;
    dias = resto_em_dias % 30;
    

    cout << "A sua idade eh: " << anos << " anos " << meses << " meses " << "e " << dias << " dias\n";
}
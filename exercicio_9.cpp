#include <iostream>
using namespace std;

int main () {

    //Faça um algoritmo que leia a idade de uma pessoa expressa em ano, mês e dia e mostre-as em dias.

    int idade = 0;
    int anos = 0;
    int meses = 0;
    int dias = 0;    
    
    cout << "Mostrar idade expressa em dias\n";
    cout << "Digite sua idade em ano, mes e dia\n";
    cout << "Digite os anos:\n";
    cin >> anos;
    cout << "Digite os meses:\n";
    cin >> meses;
    cout << "Digite os dias:\n";
    cin >> dias;

    cout << "Sao " << anos << " anos " << meses << " meses " << "e " << dias << " dias\n";

    idade = (anos * 365) + (meses * 30) + dias;

    cout << "Portando a sua idade em dias eh:\n" << idade << " dias\n";
}
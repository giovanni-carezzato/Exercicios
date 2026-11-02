#include <iostream>
using namespace std;

int main () {

    //Faça um programa que calcule a área da circunferência.
    
    float area = 0;
    float pi =  3.14159;
    float raio = 0;

    cout << "Calcular a area da circunferencia\n";
    cout << "A formula eh A = PI * (r*r) (area eh igual a PI vezes raio ao quadrado)\n";
    cout << "Digite o valor do raio:\n";
    cin >> raio;

    area = pi * (raio * raio);
    cout << "A area da circunferencia eh:\n" << area << " cm quadrados\n";
}
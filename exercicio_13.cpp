#include <iostream>
using namespace std;

int main () {

    //Elaborar um programa que efetue a apresentação do valor da conversão em real de um valor lido em dólar. 
    //O programa deve solicitar o valor da cotação do dólar e também a quantidade de dólares disponível com o usuário, para que seja apresentado o valor em moeda brasileira.

    float dolares = 0;
    float cotacao_dolar = 0;
    float reais = 0;
       
    cout << "Converter valor para dolar e mostrar a quantidade total em reais\n";
    cout << "Digite a cotacao atual do dolar para real\n";
    cin >> cotacao_dolar;

    cout << "Porntado um dolar eh o mesmo que: R$" << cotacao_dolar << "\n";

    cout << "Quantos dolares voce tem?\n";
    cin >> dolares;

    reais = dolares * cotacao_dolar;
    cout << "O valor que voce possui em dolares, se equivale a: R$" << reais;

}
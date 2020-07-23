// O programa calcula a quantidade de queijos, presuntos e hamburgueres (em kilos) um lancheiro terá que comprar baseado no total de lanches que ele deseja fazer.

#include <iostream>

using namespace std;

int main(){

    float PesoQueijoPresunto, PesoHamburguer, PesoTotalQueijo, PesoTotalPresunto, PesoTotalHamburguer;
    int TotalDeLanches;

    PesoQueijoPresunto = 0.05;
    PesoHamburguer= 0.1;

    cout << "Digite quantos sanduiches deseja fazer:" << endl;
    cin >> TotalDeLanches;

    PesoTotalQueijo = TotalDeLanches * (2 * PesoQueijoPresunto);
    PesoTotalPresunto = TotalDeLanches * PesoQueijoPresunto;
    PesoTotalHamburguer = TotalDeLanches * PesoHamburguer;

    cout << "Sera necessario comprar " << PesoTotalQueijo << "kg de queijo, " << PesoTotalPresunto << "kg de presunto e " << PesoTotalHamburguer << "kg de hamburguer." << endl;


    return 0;
}
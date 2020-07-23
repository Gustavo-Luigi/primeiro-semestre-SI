// Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o seu volume (v = 4/3.P .R3).

#include <iostream>
#include <math.h>

using namespace std;

float volumeEsfera(float raio){
     return 4 * M_PI * pow(raio, 3) / 3;
}

int main(){

    float raio;

    cout << "Digite o valor do raio: ";
    cin >> raio;

    cout << "O volume da esfera eh de: " << volumeEsfera(raio) << endl;

    return 0;
}
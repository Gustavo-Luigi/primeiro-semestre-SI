// Faça um algoritmo para calcular quantas ferraduras são necessárias para equipar todos os cavalos comprados para um haras.

#include <iostream>

using namespace std;

int main() {

    int total_cavalos, ferraduras;

    cout << "Quantos cavalos foram comprados?" << endl;
    cin >> total_cavalos;

    ferraduras = total_cavalos * 4;

    cout << "Serao necessarias " << ferraduras << " ferraduras para equipar todos os cavalos.";

    return 0;
}
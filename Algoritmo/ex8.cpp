// Escrever um programa que calcule e apresente a somatória do número de grãos de trigo que se pode obter em um tabuleiro de xadrez, obedecendo a seguinte regra: colocar um grão de trigo no primeiro quadro e nos quadros seguintes o dobro do quadro anterior. Ou seja, no primeiro coloca-se um grão, no segundo quadro coloca-se dois grãos (neste momento tem-se três grãos), no terceiro coloca-se quatro grãos, repetir até atingir o sexagésimo quarto quadro. (Este exercício foi baseado em uma situação do capítulo 16 do livro “O Homem que calculava” de Malba Tahan.

#include <iostream>

using namespace std;

int main(){

    long long int total_de_graos, graos_a_colocar;

    graos_a_colocar = 1;
    total_de_graos = 1;

    for (int i = 1; i < 60; i++){
        graos_a_colocar *= 2;
        total_de_graos += graos_a_colocar;
    }

    cout << "Eh possivel obter um total de " << total_de_graos << " graos.";

    return 0;
}
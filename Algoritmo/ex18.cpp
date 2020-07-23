// O programa recebe a altura de 15 pessoas e informa qual é a maior e a menor altura.

#include <iostream>

using namespace std;

int main(){

    float Altura, MenorAltura, MaiorAltura;

    MenorAltura = 100000000;
    MaiorAltura = 0;

    for(int i = 0; i <= 15; i++){
        cout << "Digite a altura da pessoa numero "<< i + 1 << ":" << endl;
        cin >> Altura;
        if (Altura < MenorAltura){
            MenorAltura = Altura;
        }
        if(Altura > MaiorAltura){
            MaiorAltura = Altura;
        }
    }

    cout << "A menor altura eh de: " << MenorAltura << endl;
    cout << "A Maior altura eh de: " << MaiorAltura << endl;

    return 0;
}
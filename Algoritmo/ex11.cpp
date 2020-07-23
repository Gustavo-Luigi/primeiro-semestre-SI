// Leia uma matriz 10 x 10 e escreva a localização (linha e a coluna) do maior valor.

#include <iostream>

using namespace std;

int main() {

    int matriz[10][10], maior_valor, localizacao[2];

    maior_valor = -9999999999;

    for (int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            // entra com valores na matriz
            cout << "Digite o valor da posicao [" << i + 1 << "][" << j + 1<< "]: ";
            cin >> matriz[i][j];
            cout << endl;

            //confere se o valor é o maior registrado e marca sua posiçao
            if(matriz[i][j] > maior_valor){
                maior_valor = matriz[i][j];
                localizacao[0] = i;
                localizacao[1] = j;
            }
        }
    }

    cout << "O maior valor eh de : " << maior_valor << endl; 
    cout << "Sua posicao na matriz eh: [" << localizacao[0] + 1 << "][" << localizacao[1] + 1 << "]." << endl;

    return 0;
}
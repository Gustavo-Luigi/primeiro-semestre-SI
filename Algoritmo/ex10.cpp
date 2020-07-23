// Ordenar, de modo crescente, um vetor com N elementos solicitados ao usuário.

#include <iostream>

using namespace std;

int main(){

    int numeros, temporario;

    cout << "Digite quantos numeros o vetor devera ter: ";
    cin >> numeros;
    cout << endl;

    int vetor[numeros];

    for(int i = 0; i < numeros; i++){
        cout << "Digite o valor do " << i + 1 << "o numero: ";
        cin >> vetor[i];
    }

    for(int i = 0; i < numeros; i++){
        for(int j = 0; j < numeros; j++){
            if(vetor[i] < vetor[j]){
                temporario = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temporario;
            }
        }
    }

    for(int i = 0; i < numeros; i++){
        cout << vetor[i] << " ";
    }

    return 0;
}
// Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores elementos entre as duas primeiras.

#include <iostream>

using namespace std;

void preencheMatriz(int matriz[4][4]){
    for (int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << "Digite o valor da posicao [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
            cout << endl;
        }
    }
}

void escreveMatriz(int matriz[4][4]){
    for (int i = 0; i < 4; i++){
        cout << endl;

        for(int j = 0; j < 4; j++){
            cout << "[" << matriz[i][j] << "] ";
        }
    }
}

void organizaDecrescente(int matriz[4][4]){
    int temporario;
    for(int k = 0; k < 4; k++){
        for(int z = 0; z < 4; z++){

            for (int i = 0; i < 4; i++){
                for(int j = 0; j < 4; j++){
                    if(matriz[k][z] > matriz[i][j]){
                        temporario = matriz[k][z];
                        matriz[k][z] = matriz[i][j];
                        matriz[i][j] = temporario;   
                    }
                }
            }
        }   
    }
}

void organizaCrescente(int matriz[4][4]){
    int temporario;
    for(int k = 0; k < 4; k++){
        for(int z = 0; z < 4; z++){

            for (int i = 0; i < 4; i++){
                for(int j = 0; j < 4; j++){
                    if(matriz[k][z] < matriz[i][j]){
                        temporario = matriz[k][z];
                        matriz[k][z] = matriz[i][j];
                        matriz[i][j] = temporario;   
                    }
                }
            }
        }   
    }
}

int main(){

    int matriz_A[4][4], matriz_B[4][4], matriz_C[4][4];
    
    // Usuario preenche as matrizes
    cout << "Digite os valores para a matriz A:" << endl;
   
    preencheMatriz(matriz_A);

    cout << "Digite os valores para a matriz B:" << endl;
    
    preencheMatriz(matriz_B);

    // Escreve as matrizes na tela para facilitar verificação do resultado.
    cout << "Matriz A:" << endl;
    escreveMatriz(matriz_A);

    cout << endl << endl;;
    cout << "Matriz B:" << endl;
    escreveMatriz(matriz_B);

    // Organiza as matrizes A e B em ordem inversa uma da outra para eliminar os valores baixos
    organizaCrescente(matriz_A);
    organizaDecrescente(matriz_B);

    // Entrando com valores muito baixos na matriz C e a remontando com os maiores valores de A e B
    for (int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            matriz_C[i][j] = -99999999999;

            if(matriz_A[i][j] > matriz_B[i][j]){
                matriz_C[i][j] = matriz_A[i][j];
            } else {
                matriz_C[i][j] = matriz_B[i][j];
            }
        }
    }

    // Resultado
    cout << endl << endl;
    cout << "Matriz C:" << endl;
    escreveMatriz(matriz_C);

    return 0;

}
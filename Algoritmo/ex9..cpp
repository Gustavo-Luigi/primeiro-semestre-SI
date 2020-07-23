// Seja A e B dois vetores contendo N elementos inteiros. Fazer um programa para:
// a. ler A e B. 
// b. Calcular a soma dos elementos de A. 
// c. Calcular a soma dos elementos de B. 
// d. Obter o vetor C, que é a soma dos vetores A e B. 
// e. Obter o vetor D, subtraindo B de A. 
// f. Obter o produto escalar de A por B, isto é, A[0]*B[0] + A[1]*B[1] + .......+ A[N- 1]*B[N-1].

#include <iostream>

using namespace std;

int main(){

    int N, soma_A, soma_B;
    long int produto_escalar;

    soma_A = 0;
    soma_B = 0;
    produto_escalar = 0;

    do{
        cout << "Digite quantos valores cada vetor devera ter: ";
        cin >> N;
        cout << endl;

        if(N < 1){
            system("cls");
            cout << "Digite um valor maior que 0." << endl;
        }
    }while(N < 1);


    int A[N], B[N], C[N], D[N];

    // entrar com valores de A
    for(int i = 0; i < N; i++){
        cout << "Digite o " << i+ 1 << "o valor de A: ";
        cin >> A[i];
        cout << endl;
    }

    // entrar com valores de B
    for(int i = 0; i < N; i++){
        cout << "Digite o " << i+ 1 << "o valor de B: ";
        cin >> B[i];
        cout << endl;
    }

    // calcular somatorios, produto escalar e definir valores para C e D;
    for(int i = 0; i < N; i++){
        soma_A += A[i];
        soma_B += B[i];
        C[i] = A[i] + B[i];
        D[i] = B[i] - A[i];
        produto_escalar += A[i] * B[i];
    }    

    // exibir valores de C, poderia ter sido feito no loop anterior mas para ficar mais legivel foi feito à parte.
    cout << "Os valores do vetor C sao:" << endl;
    for(int i = 0; i < N; i++){
        cout << "C[" << i + 1 << "]: " << C[i] << endl;
    }

    // exibir valores de D
    cout << "Os valores do vetor D sao:" << endl;
    for(int i = 0; i < N; i++){
        cout << "D[" << i + 1 << "]: " << D[i] << endl;
    }

    cout << "A soma dos elementos A eh igual a:" << soma_A << endl;
    cout << "A soma dos elementos B eh igual a:" << soma_B << endl;
    cout << "O produto escalar entre A e B eh igual a: " << produto_escalar;

    return 0;
}
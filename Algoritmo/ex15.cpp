// Faça uma função que verifique se um valor é perfeito ou não. Um valor é dito perfeito quando ele é igual à soma dos seus divisores exceto ele próprio. (Ex: 6 é perfeito, 6 = 1 + 2 + 3, que são seus divisores). A função deve retornar um valor booleano.

#include <iostream>

using namespace std;

bool verificaPerfeito(int numero){

    int soma = 0;
    
    for (int i = 1; i < numero; i++){
        if(numero % i == 0){
            soma += i;
        }
    }
  
    return soma == numero;
}


int main(){

    int numero;

    cout << "Digite o numero que deseja verificar se eh perfeito: ";
    cin >> numero;

    if(verificaPerfeito(numero)){
        cout << endl;
        cout << "O numero " << numero << " eh perfeito!";
    } else {
        cout << "O numero " << numero << " nao eh perfeito!";
    }


    return 0;
}
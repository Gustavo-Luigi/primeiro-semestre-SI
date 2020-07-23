// Faça uma função que recebe por parâmetro um valor inteiro e positivo e retorna o valor lógico Verdadeiro caso o valor seja primo e Falso em caso contrário.

#include <iostream>

using namespace std;

bool verificaPrimo(int numero){

    // testando se o número é divisivel por outros numeros primos:
    if(numero != 1 && numero != 2 && numero != 3 && numero != 5 && numero != 7) {
        for (int i = 2; i <= 7; i++){
            if(numero % i == 0){
                return false;
            }
        }
    }

    // testando se é 1:
    if(numero == 1){
        return false;
    }

    // retorna verdadeiro se não reprova nos testes anteriores
    return true;
}

int main(){

    int numero;

    do{
        cout << "Digite o valor que deseja verificar: ";
        cin >> numero;

        if(numero < 0){
            system("cls");
            cout << "Digite um valor positivo." << endl;
        }
    }while(numero < 0);


    if(verificaPrimo(numero)){
        cout << endl;
        cout << "O numero " << numero << " eh primo!";
    } else {
        cout << "O numero " << numero << " nao eh primo!";
    }


    return 0;
}
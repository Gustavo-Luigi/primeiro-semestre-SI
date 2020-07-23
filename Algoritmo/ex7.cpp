// A série de Fibonacci é uma sequência de termos que tem como os 2 primeiros termos, respectivamente, os números 0 e 1. A partir daí, os demais termos são formados seguindo uma certa regra. A série de Fibonacci pode ser vista a seguir: 0 1 1 2 3 5 8 13 21...

#include <iostream>

using namespace std;

int main() {

    int numeros_a_exibir;


    do{
        cout << "Digite quantos numeros da sequencia de Fibonacci voce deseja ver:" << endl;
        cin >> numeros_a_exibir;

        if(numeros_a_exibir < 0){
            system("cls");
            cout << "Digite um numero maior que 0." << endl;
        }

    }while(numeros_a_exibir < 1);

    int fibonacci[numeros_a_exibir];

    fibonacci[0] = 0;
    fibonacci[1] = 1;
   
    cout << "Serie de Fibonacci com " << numeros_a_exibir << " numeros:" << endl;

    if(numeros_a_exibir > 2){

        for (int i = 2; i < numeros_a_exibir; i++) {
            fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
        }
    }
 

    for(int i = 0; i < numeros_a_exibir; i++) {
        cout << fibonacci[i] << ", ";
     }

     cout << "\b\b.";

    return 0;
}
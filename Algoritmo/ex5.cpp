// Criar um programa que leia o destino do passageiro, se a viagem inclui retorno (ida e volta) e informe o preço da passagem conforme a tabela a seguir:
// Destino                  IDA         Volta
// Regiao Norte             500         900
// Regiao Nordeste          350         650
// Regiao Centro-Oeste      350         600
// Regiao Sul               300         550


#include <iostream>

using namespace std;

int main() {

    int destino, ida_e_volta;
    float valor_viagem;


    do{

        cout << "===Escolha uma opcao===" << endl;
        cout << "1. Viagem soh de ida" << endl;
        cout << "2. Viagem de ida e volta" << endl;
        cin >> ida_e_volta;
    
        if(ida_e_volta < 1 || ida_e_volta > 2){
            system("cls");
            cout << "Escolha uma opcao valida." << endl;
        }

    }while(ida_e_volta < 1 || ida_e_volta > 2);

    do{

        cout << "===Escolha uma destino===" << endl;
        cout << "1. Regiao Norte" << endl;
        cout << "2. Regiao Nordeste" << endl;
        cout << "3. Regiao Centro-Oeste" << endl;
        cout << "4. Regiao Sul" << endl;
        cin >> destino;

        switch(destino)
        {
            case 1:
                cout << "Voce escolheu Regiao Norte" << endl;
                if(ida_e_volta == 1){
                    valor_viagem = 500;
                } else {
                    valor_viagem = 900;
                }
                break;

            case 2:
                cout << "Voce escolheu Regiao Nordeste" << endl;
                if(ida_e_volta == 1){
                    valor_viagem = 350;
                } else {
                    valor_viagem = 650;
                }
                break;

            case 3:
                cout << "Voce escolheu Regiao Centro-Oeste" << endl;
                if(ida_e_volta == 1){
                    valor_viagem = 350;
                } else {
                    valor_viagem = 600;
                }
                break;

            case 4:
                cout << "Voce escolheu Regiao Sul" << endl;
                if(ida_e_volta == 1){
                    valor_viagem = 300;
                } else {
                    valor_viagem = 550;
                }
                break;

            default:
                system("cls");
                cout << "Escolha uma opcao valida." << endl;
                break;
        }
    }while(destino < 1 || destino > 4);

    cout << "O valor da viagem sera de R$" << valor_viagem << " reais.";
    return 0;
}
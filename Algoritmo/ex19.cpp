// Programa para registro de multas para motoristas, o usuário deverá informar o número da carteira do motorista (valores válidos entre 1 e 4327), o número de multas que o motorista recebeu e o valor de cada uma dessas multas.
// O programa tem a capacidade de informar o valor total devido pelo motorista que acaba de ser cadastrado, o maior valor devido dentre os motoristas cadastrados e a soma da dívida de todos os motoristas.

#include <iostream>

using namespace std;

int main(){

    int NumeroDaCarteira, NumeroDeMultas, Opcao, MaiorNumeroDeMultas, NumeroMaiorInfrator;
    float ValorMulta, TotalMotorista, TotalArrecadado;

    TotalArrecadado = 0;
    MaiorNumeroDeMultas = 0;

    do{
        NumeroDaCarteira = 0;
        NumeroDeMultas = 0;
        ValorMulta = 0;
        TotalMotorista = 0;

        cout << "========Menu========" << endl;
        cout << "1. Novo Motorista" << endl;
        cout << "2. Ver Total Arrecadado" << endl;
        cout << "3. Ver Maior Infrator" << endl;
        cout << "4. Limpar a Tela" << endl;
        cout << "5. Sair do Programa" << endl;
        cin >> Opcao;

        switch (Opcao)
        {
        case 1: 
            cout << "Digite o numero da carteira: " << endl;
            cin >> NumeroDaCarteira;

            while((NumeroDaCarteira < 1) || (NumeroDaCarteira > 4327)){
                cout << "Digite um numero valido (entre 1 e 4327):" << endl;
                cin >> NumeroDaCarteira;
            }

            cout << "Digite o numero de multas do motorista:" << endl;
            cin >> NumeroDeMultas;
            while(NumeroDeMultas < 0){
                cout << "Digite um numero valido:" << endl;
                cin >> NumeroDeMultas;
            }
            if(NumeroDeMultas > MaiorNumeroDeMultas){
                MaiorNumeroDeMultas = NumeroDeMultas;
                NumeroMaiorInfrator = NumeroDaCarteira;

            }

            for(int i = 0; i < NumeroDeMultas; i++){
                cout << "Digite o valor da multa numero " << i + 1 << ":" << endl;
                cin >> ValorMulta;
                TotalMotorista += ValorMulta;
                TotalArrecadado += ValorMulta;
            }

            cout << "O total devido por este motorista eh de: " << TotalMotorista << "reais" << endl;
            cout << "O total arrecadado entre todos os motoristas ateh agora eh de: " << TotalArrecadado << " reais" << endl;
            cout << "O motorista com o maior numero de infracoes ateh agora eh o de carteira numero " << NumeroMaiorInfrator << ", com um total de " << MaiorNumeroDeMultas << " multas" << endl;

            break;

        case 2:
            cout << "O total arrecadado entre todos os motoristas ateh agora eh de: " << TotalArrecadado << " reais" << endl;
            break;

        case 3:
            if(MaiorNumeroDeMultas > 0){
                 cout << "O motorista com o maior numero de infracoes ateh agora eh o de carteira numero " << NumeroMaiorInfrator << ", com um total de " << MaiorNumeroDeMultas << " multas" << endl;
            } else {
                cout << "Ainda nao foi registrada nenhuma multa" << endl;
            }

            break;
        
        case 4:
            system("cls");

            break;

        default:
            cout << "Escolha uma opcao de 1 a 5." << endl;

            break;
        }

    }while(Opcao != 5);

    return 0;
}
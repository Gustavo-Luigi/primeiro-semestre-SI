// Criar um programa que informe a quantidade total de calorias de uma refeição a partir da escolha do usuário, que deverá informar o prato, a sobremesa e bebida. (Veja a tabela a seguir)

// prato: Vegetariano 180cal, Peixe 230cal, Frango 250cal, Carne 350cal
// sobremesa: Abacaxi 75cal, Sorvete Diet 110cal, Mousse Diet 170cal, Mousse chocolate 200cal
// bebida: Chá 20cal, Suco de Laranja 70cal, Suco de Melão 100cal, Refrigerante Diet 65

#include <iostream>

using namespace std;

int main() {

    int prato, sobremesa, bebida, caloria_total;

    caloria_total = 0;

    do{
        cout << "===Escolha um prato===" << endl;
        cout << "1. Vegetariano" << endl;
        cout << "2. Peixe" << endl;
        cout << "3. Frango" << endl;
        cout << "4. Carne" << endl;
        cin >> prato;

        switch (prato) 
        {

            case 1:
                cout << "Voce escolheu o prato vegetariano." << endl;
                caloria_total += 180;
                break;

            case 2:
                cout << "Voce escolheu peixe." << endl;
                caloria_total += 230;
                break;

            case 3:
                cout << "Voce escolheu frango." << endl;
                caloria_total += 250;
                break;
            
            case 4:
                cout << "Voce escolheu carne." << endl;
                caloria_total += 350;
                break;
            
            default:
                system("cls");
                cout << "Digite um numero valido." << endl;
                break;        
        }
    }while(prato < 1 || prato > 4);

    

    do{

        cout << "===Escolha uma sobremesa===" << endl;
        cout << "1. Abacaxi" << endl;
        cout << "2. Sorvete Diet" << endl;
        cout << "3. Mousse Diet" << endl;
        cout << "4. Mousse Chocolate" << endl;
        cin >> sobremesa;

         switch (sobremesa) 
        {

            case 1:
                cout << "Voce escolheu abacaxi." << endl;
                caloria_total += 75;
                break;

            case 2:
                cout << "Voce escolheu sorvete diet." << endl;
                caloria_total += 110;
                break;

            case 3:
                cout << "Voce escolheu mousse diet." << endl;
                caloria_total += 170;
                break;
            
            case 4:
                cout << "Voce escolheu mousse chocolate." << endl;
                caloria_total += 200;
                break;
            
            default:
                system("cls");
                cout << "Digite um numero valido." << endl;
                break;        
        }
    }while(sobremesa < 1 || sobremesa > 4);

    do{

        cout << "===Escolha uma sobremesa===" << endl;
        cout << "1. Cha" << endl;
        cout << "2. Suco de Laranja" << endl;
        cout << "3. Suco de Melao" << endl;
        cout << "4. Refrigerante Diet" << endl;
        cin >> bebida;      

        switch (bebida) 
        {

            case 1:
                cout << "Voce escolheu cha." << endl;
                caloria_total += 20;
                break;

            case 2:
                cout << "Voce escolheu suco de laranja." << endl;
                caloria_total += 70;
                break;

            case 3:
                cout << "Voce escolheu suco de melao." << endl;
                caloria_total += 100;
                break;
            
            case 4:
                cout << "Voce escolheu refrigerante diet." << endl;
                caloria_total += 65;
                break;
            
            default:
                system("cls");
                cout << "Digite um numero valido." << endl;
                break;        
        }
    }while(bebida < 1 || bebida > 4);

    cout << "A refeicao possui " << caloria_total << " calorias";
    return 0;
}

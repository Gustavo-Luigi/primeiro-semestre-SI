// A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade de broas a cada dia. Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber quanto arrecadou com a venda dos pães e broas (juntos), e quanto deve guardar numa conta de poupança (10% do total arrecadado). Você foi contratado para fazer os cálculos para o dono. Com base nestes fatos, faça um algoritmo para ler as quantidades de pães e de broas, e depois calcular os dados solicitados.

#include <iostream>

using namespace std;

int main() {

    int paes_vendidos, broas_vendidas;
    float valor_pao, valor_broa, total_arrecadado, porcentagem_a_poupar, valor_a_poupar;

    porcentagem_a_poupar = 0.1;
    valor_pao = 0.12;
    valor_broa = 1.5;

    cout << "Quantos paes foram vendidos?" << endl;
    cin >> paes_vendidos;

    cout << "Quantas broas foram vendidas?" << endl;
    cin >> broas_vendidas;

    total_arrecadado = (paes_vendidos * valor_pao) + (broas_vendidas * valor_broa);
    
    valor_a_poupar = total_arrecadado * porcentagem_a_poupar;

    cout << "Foi arrecadado R$" << total_arrecadado << " reais." << endl;
    cout << "Deve ser poupado RS" << valor_a_poupar << " reais." << endl;

    return 0;
}

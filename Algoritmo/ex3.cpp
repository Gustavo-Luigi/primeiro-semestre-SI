// Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma sendo vendida respectivamente por 10, 12 e 15 reais. Construa um algoritmo em que o usuário forneça a quantidade de camisetas pequenas, médias e grandes referentes a uma venda, e a máquina informe quanto será o valor arrecadado

#include <iostream>

using namespace std;

int main() {

    int total_camisas_grandes, total_camisas_medias, total_camisas_pequenas;
    float valor_camisa_grande, valor_camisa_media, valor_camisa_pequena, total_arrecadado;
    //usando float para o valor das camisas pois teoricamente o valor poderia mudar e precisar das casas dos centavos.

    valor_camisa_pequena = 10;
    valor_camisa_media = 12;
    valor_camisa_grande = 15;

    cout << "Quantas camisas pequenas foram vendidas?" << endl;
    cin >> total_camisas_pequenas;

    cout << "Quantas camisas medias foram vendidas?" << endl;
    cin >> total_camisas_medias;

    cout << "Quantas camisas grandes foram vendidas?" << endl;
    cin >> total_camisas_grandes;

    total_arrecadado = (total_camisas_pequenas * valor_camisa_pequena) + (total_camisas_medias * valor_camisa_media) + (total_camisas_grandes * valor_camisa_grande);

    cout << "Sera arrecadado R$" << total_arrecadado << " reais com a venda.";


    return 0;
}
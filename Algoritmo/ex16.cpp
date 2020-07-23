// O programa calcula o salário de um vendedor considerando sua commissão. O vendedor receberá uma comissão de 3% para vendas até 1500 reais no mês, para cada valor acima disso, a comissão será de 5%.

#include <iostream>

using namespace std;

int main(){

    float SalarioBase, SalarioFinal, ValorDasVendas;


    cout << "Digite o salario do funcionario: " << endl;
    cin >> SalarioBase;

    cout << "Digite o valor das vendas do funcionario: " << endl;
    cin >> ValorDasVendas;

    if(ValorDasVendas > 1500){
        SalarioFinal = SalarioBase + (1500 * 1.03) + ((ValorDasVendas - 1500) * 1.05);
    } else {
        SalarioFinal = SalarioBase + (ValorDasVendas * 1.03);

    }

    cout << "O salario final sera de: " << SalarioFinal << " reais." << endl;


    return 0;
}
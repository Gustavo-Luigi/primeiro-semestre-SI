// Criar um programa que a partir da idade e peso do paciente calcule a dosagem de determinado medicamento e imprima a receita informando quantas gotas do medicamento o paciente deve tomar por dose. Considere que o medicamento em questão possui 500mg por ml, e que cada ml corresponde a 20 gotas.
// Adultos ou adolescentes desde 12 anos, inclusive, se tiverem peso igual ou acima e 60 quilos devem tomar 1000mg; com peso abaixo de 60 quilos devem tomar 875mg.
// Para crianças e adolescentes abaixo de 12 anos a dosagem é calculada pelo peso corpóreo conforme a tabela a seguir:
// 5 a 9kg = 125mg | 9.1 a 16kg = 250mg | 16.1 a 24kg = 375mg | 24.1 a 30kg = 500mg | acima de 30kg = 750mg

#include <iostream>

using namespace std;

int main() {

    int idade, dose, gotas;
    float peso;
    // Dose se refere a massa do medicamento em mg.

    do{
    cout << "Qual a idade do paciente?" << endl;
    cin >> idade;

    if(idade < 0){
        system("cls");
        cout << "Digite uma idade valida." << endl;
    }
    }while(idade < 0);
    cout << "Qual o peso do paciente?" << endl;
    cin >> peso;

    if(idade >= 12) {
        if(peso >= 60){
            dose = 1000;
        } else {
            dose = 875;
        }
        // fim do codigo para maiores de 12 anos
    } else if(peso >= 5 && peso <= 9){
        dose = 125;
    } else if(peso > 9 && peso <= 16){
        dose = 250;
    } else if(peso > 16 && peso <= 24){
        dose = 375;
    } else if(peso > 24 && peso <= 30){
        dose = 500;
    } else if (peso > 30){
        dose = 750;
    } else {
        // Para peso menor que 5kg
        dose = 0;
    }

    if(dose > 0){
        // Formula para encontrar quantidade de gotas
        // { 500mg = 20 gotas }
        // {  Ymg  =  X gotas }
        // X * 500 = Y * 20
        // X = (20 * Y) / 500
        gotas = (20 * dose) / 500;
        cout << "O paciente devera tomar " << gotas << " gotas" << endl;
    } else {
        cout << "O paciente nao tem condicoes de tomar o medicamento" << endl;
    }


    return 0;
}
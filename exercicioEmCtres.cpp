#include <iostream>
using namespace std;

int main()
{
    float salario, inss, salario_liquido;

    printf("digite seu salario bruto");
    scanf("%f", &salario);

    if(salario <= 1693.72){
        inss = salario * 0.08;
    }
    else if(salario >= 1693.72 && salario <= 2822.90) {
        inss = salario * 0.09;
    }
   
    salario_liquido = salario - inss;
    printf("\n Desconto Inss: %f\n", inss);
    printf("\n Salario líquido %2.f\n", salario_liquido);

    return 0;
}

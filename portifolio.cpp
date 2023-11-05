#include <iostream>
using namespace std;

int main()
{
    int idade;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("Você é maior de idade, pois você tem %d anos", idade);
    }
    else
    {
        printf("Você é menor de idade, pois você tem %d anos", idade);
    }

    return 0;
}

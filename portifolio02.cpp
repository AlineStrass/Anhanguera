#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int cont = 0;
    int r = 1;

    printf("Digite um númeo inteiro:");
    scanf("%d", &a);

    printf("Digite outro númeo inteiro:");
    scanf("%d", &b);

    while (cont < b){
        r = r * a;
        cont++;
    }

    printf("O valorde %d elevado a %d é igual a %d", a, b, r);
    
    return 0;
}

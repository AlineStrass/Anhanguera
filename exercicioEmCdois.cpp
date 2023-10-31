#include <iostream>
using namespace std;

int main()
{
    float nota1;
    float nota2;
    float media;

    printf("Insira a nota 1: \n");
    scanf("%f", &nota1);
   
    printf("Insira a nota : \n");
    scanf("%f", &nota2);
    
    media = (nota1 + nota2) / 2;
    printf("media = %f", media);
    return 0;
}

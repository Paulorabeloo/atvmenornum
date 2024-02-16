#include <stdio.h>
int main() {
    int a, b, c, menor;
    printf("Digite os 3 números para saber o menor deles.\n");
    scanf("%i%i%i", &a, &b, &c);
    menor = a;
    if (b < menor){
        menor = b;
    }
    if (c < menor){
        menor = c;
    }
    printf("O menor num: %i", menor);
return 0;
}

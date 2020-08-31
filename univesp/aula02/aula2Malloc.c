#include <stdio.h>
#include <malloc.h>
#define alturaMaxima 225 // altura maxima travada em 225
typedef struct{
    int peso;
    int altura;
}pesoAltura;

int main(){
    pesoAltura* pessoa1 = (pesoAltura*)malloc(sizeof(pesoAltura));// funcao sizeof(pesoAltura é o tamanho em bytes) o ponteiro retornado pelo malloc é do tipo pesoAltura
    pessoa1->peso = 80;//para acessar um ponteiro uso seta ->
    pessoa1->altura = 185;
    printf("Peso %d, Altura %d. ",pessoa1->peso,pessoa1->altura);
    if (pessoa1->altura > alturaMaxima) printf("Altura acima da Máxima\n");
    else printf ("Altura dentro do Limite\n");
}
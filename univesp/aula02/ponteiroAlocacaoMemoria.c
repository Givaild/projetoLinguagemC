#include <stdio.h>
int main(){
    int x = 25;
    int* y = &x;/* *y cria um ponteiro ou seja um endereço do tipo inteiro,
                &x clonou o endereço aonde estava x.*/
    *y = 30;    // atribuiu 30 ao endereço *y, que no caso clonou x.
    printf("Valor atua de x: %d\n",x);
    return 0;
}
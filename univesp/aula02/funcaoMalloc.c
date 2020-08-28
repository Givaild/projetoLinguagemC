#include <stdio.h>
#include <malloc.h>
int main(){
int *y = (int*) malloc(sizeof(int));// *y(ponteiro) criou um endereço na memoria
                                    //malloc(sizeof(int)), criou outro endereço na memoria tipo inteiro
                                    //(int*) clonou o endereço do malock para o ponteiro cast *y ou seja y tem o valor do endereço de malloc agora

*y = 20;                            // endereço de malloc recebe o valor 20
int z = sizeof(int);                // variavel apenas para guardar o tamanho de "inteiro"
                                    // retorno do operador sizeof
                                    //maquina de 32 bit retorna 4bytes, 64 bits 8bytes
printf("y =%i *y = %i z = %i\n",y,*y,z);/* Aqui tenho na sequencia, variavel y que me mostra o valor do endereço de malloc, *y que mostra 20, valor este que inseri no endereço de malloc, z retorno sizeoff como descrito acima.*/
return 0;
}

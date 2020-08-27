#include <stdio.h>

int main(void){
int num1,num2;
int result;
printf("Por favor, forneça o valor de Num 1: \n");
scanf("%d",&num1);
printf("Por favor, forneça o valor de Num 2: \n");
scanf("%d",&num2);
result = num1+num2;
//printf("%d + %d = %d\n",num1,num2,result);
printf("A soma dos dois valores corresponde a: %d\n",result);
    return 0;
}
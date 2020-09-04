#define MAX 50 // constante chamada MAX com tamanho pré definido do arranjo

typedef int TIPOCHAVE;// nome para o tipo inteiro TIPOCHAVE usando o typedf
typedef struct{
    TIPOCHAVE chave;
    //outro campos se necessario

} REGISTRO;// essa estrutura eu chamei de REGISTRO

typedef struct{
    REGISTRO A [MAX];
    int nroElem;
} LISTA;
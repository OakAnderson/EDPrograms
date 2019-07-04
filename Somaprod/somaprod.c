#include <stdio.h>

/*Função que soma a e b, e multiplica os dois
Guarda o valor da soma com o ponteiro *p e o produto com ponteiro *q 
*/
void somaprod(int a, int b, int *p, int *q){
    *p = a + b;
    *q = a * b;
}

int main(void) {
    //Declara s e p como inteiros
    int s, p;
    //Chama a função somaprod para somar e multiplicar 5 e 10
    //Pede para guardar a soma na variável s e o produto na variável p
    somaprod(5,10,&s,&p);
    printf("Soma = %d\nProduto = %d\n", s,p);
    //retorna 0 para indicar "executado com sucesso"
    return 0;
}
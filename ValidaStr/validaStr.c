#include <stdio.h>

int valida_str(char str)
{
    if (((str >= 'a') && (str<= 'z')) || (str >= 'A') && (str <= 'Z'))
        return 1;
    else
        return 0;
}
int valida_dig(char str)
{
    if ((str >= '0') && (str <= '9'))
        return 1;
    else
        return 0;
}
int logic(int a)
{
    if (a == 1)
        printf("True\n");
    else
        printf("False\n");
}

int main(void)
{
    char c;
    int v;

    printf("Digite um caractere: "); scanf("%c", &c);
    
    printf("Validando letra...\n");
    v = valida_str(c);
    logic(v);
    printf("Validando digito...\n");
    v = valida_dig(c);
    logic(v);

    return 0;    
}
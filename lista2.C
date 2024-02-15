#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("Questão1\n");
    questao1();
    
    printf("Questão2\n");
    questao2();
    
    printf("Questão3\n");
    questao3();
    
    printf("Questão4\n");
    questao4();
    
    printf("Questão5\n");
    questao5();
    
    printf("Questão6\n");
    questao6();

}

void questao1()
{

    int *p1, *p2, **p3;
    int valor1, valor2;

    printf("Digite dois inteiros");

    scanf("%d", &valor1);
    scanf("%d", &valor2);

    if (&p1 < &p2)
    {
        println("O maior endereço é ptr %p", p1);
        println("o conteúdo do endereço é %d", *p1);

        // alterar valor
        println("Digite o valor para alterar o valor do maior ponteiro");
        scanf("%d", *p3);
        p3 = &p1;

        println("O valor do endereço de p3 é %p, e seu valor é %d", &p3, *p3);
        printf("O valor alterado de p1 é %d", *p1);
    }

    else
    {
        println("O maior endereço é ptr %p", p2);
        println("o conteúdo do endereço é %d", *p2);

        // alterar valor
        println("Digite o valor para alterar o valor do maior ponteiro");
        scanf("%d", *p3);
        p3 = &p2;

        println("O valor do endereço de p3 é %p, e seu valor é %d", &p3, *p3);
        println("O valor alterado de p1 é %d", *p2);
    }
}

void questao2()
{
    // p++ pega o valor de p e soma +1
    //(*p)++ pega o valor que esta armazenado no endereço de p é incrementa +1
    //*(p++) pega o endereço de p e incrementa +1
}

void questao3()
{
    // valor == &valorPtr = falso
    // valor == *valorPtr = verdadeiro
    // valorPtr == &valor = verdadeiro
    // valorPtr == *valor = falso
}

void questao4()
{
    int x, *p, **q;
    x = 10;
    p = &x;
    q = &p;

    printf("\n %d \n", &**q);
    return (0);
}

void questao5()
{
    int valor=0;
    char caracter='a';
    int *p1;
    char *p2;

    p1 = &valor;
    p2 = &caracter;

    printf("O valor do inteiro é %d e seu endereço é %p \n", valor, &p1);
    printf("O valor do caracter é %c e seu endereço é %p \n", caracter, &p2);

}

void questao6(){

}
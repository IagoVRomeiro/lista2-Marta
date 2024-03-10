#include <stdio.h>

void questao1() {
    int valor1, valor2;
    int *p1, *p2, **p3;

    printf("Digite dois inteiros: ");
    scanf("%d %d", &valor1, &valor2);

    p1 = &valor1;
    p2 = &valor2;

    if (p1 < p2) {
        printf("O maior endereço é %p e o conteúdo é %d\n", p2, *p2);
        printf("Digite um novo valor para o maior endereço: ");
        scanf("%d", *p3);
        *p3 = p2;
        printf("O novo valor do endereço é %d\n", **p3);
    } else {
        printf("O maior endereço é %p e o conteúdo é %d\n", p1, *p1);
        printf("Digite um novo valor para o maior endereço: ");
        scanf("%d", *p3);
        *p3 = p1;
        printf("O novo valor do endereço é %d\n", **p3);
    }
}

void questao2() {
    // p++ incrementa o ponteiro p para o próximo elemento do mesmo tipo
    // (*p)++ incrementa o valor apontado por p
    // *(p++) incrementa o ponteiro p e então acessa o valor apontado pelo endereço anterior
}


void questao3() {
    int valor;
    int *valorPtr;

    // valor == &valorPtr - Falso, pois valorPtr armazena o endereço de valor
    // valor == *valorPtr - Verdadeiro, pois *valorPtr acessa o valor armazenado em valor
    // valorPtr == &valor - Verdadeiro, pois valorPtr armazena o endereço de valor
    // valorPtr == *valor - Falso, pois *valor é um valor, enquanto valorPtr é um ponteiro

    valorPtr = &valor;
}

void questao4() {
    int x = 10;
    int *p = &x;
    int **q = &p;

    printf("O valor é %d\n", **q);
}


void questao5() {
    int valor_int = 0;
    float valor_real = 0.0;
    char caracter = 'a';

    int *ptr_int = &valor_int;
    float *ptr_real = &valor_real;
    char *ptr_caracter = &caracter;

    printf("Endereço e conteúdo do inteiro: %p %d\n", ptr_int, *ptr_int);
    printf("Endereço e conteúdo do real: %p %f\n", ptr_real, *ptr_real);
    printf("Endereço e conteúdo do caracter: %p %c\n", ptr_caracter, *ptr_caracter);
}

// Função para a Questão 6
void ordenar(int *ptr1, int *ptr2, int *ptr3) {
    int *temp;

    if (*ptr1 > *ptr2) {
        temp = ptr1;
        ptr1 = ptr2;
        ptr2 = temp;
    }
    if (*ptr2 > *ptr3) {
        temp = ptr2;
        ptr2 = ptr3;
        ptr3 = temp;
    }
    if (*ptr1 > *ptr2) {
        temp = ptr1;
        ptr1 = ptr2;
        ptr2 = temp;
    }

    printf("Valores ordenados: %d %d %d\n", *ptr1, *ptr2, *ptr3);
}

int main() {
    printf("Questão1\n");
    questao1();
    
    printf("\nQuestão2\n");
    questao2();
    
    printf("\nQuestão3\n");
    questao3();
    
    printf("\nQuestão4\n");
    questao4();
    
    printf("\nQuestão5\n");
    questao5();

    printf("\nQuestão6\n");

    int var1, var2, var3;
    int *ptr1, *ptr2, *ptr3;

    printf("Digite três valores inteiros: ");
    scanf("%d %d %d", &var1, &var2, &var3);

    ptr1 = &var1;
    ptr2 = &var2;
    ptr3 = &var3;

    ordenar(ptr1, ptr2, ptr3);

    return 0;
}

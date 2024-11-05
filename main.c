
#include <stdio.h>
#include <stdlib.h>

void welcome_msg () {

    puts("====================================");
    puts("\tBem-vindo ao FlipSim!");
    puts("====================================");

    puts("Simule lançamentos de moeda com apenas um clique!");
    puts("Experimente a sorte e veja quantas vezes consegue cair cara ou coroa.");

    putchar('\n');

    puts("Boa sorte e divirta-se!");
    puts("====================================");

}


char flip () {

    return (rand() % 2) == 0 ? 'C' : 'R';
}


int main () {

    // variaveis

    char change; // conter a opção do user

    // iniciando mensagem de boas vindas
    welcome_msg();

    // capturando tecla <ENTER> para iniciar programa
    printf("\nPara iniciar o jogo pressione <ENTER>: ");
    while(getchar() != '\n');

    

    // iniciando o jogo

    do {

        // limpando a tela do jogo
        system("cls");

        printf("Digite 'L' para lançar ou 'S' para sair: ");
        change = getchar();

         // limpando buffer do teclado
        while(getchar() != '\n');


        if (change == 'S' || change == 's') {
            printf("Obrigado!");
            return 1;
        } else {
            printf("\n\nResultado do seu lançamento: %c (%s)\n\n", flip(), (flip() == 'C') ? "Cara" : "Coroa");
        }

        printf("Deseja lançar novamente (S para sim | N para não)?  ");
        change = getchar();

        if (change == 'N' || change == 'n') {
           printf("Obrigador!");
           return 1; 
        }


        // limpando buffer do teclado
        while(getchar() != '\n');

    } while (1);



    return 0;
}
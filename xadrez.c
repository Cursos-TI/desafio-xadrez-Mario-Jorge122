#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    printf("Movimento da Torre.\n");
    for (int i = 0; i < 5; i++)
{
    printf("direita\n");
}   

    printf("\nMovimento do bispo.\n");
    int bispo = 1;
    while (bispo <= 5)
{
    printf("Cima, direita.\n");
    bispo++;
}
    printf("\nMovimento da Rainha.\n");
    int rainha = 1;
do
{   
    printf("Esquerda.\n");
    rainha++;
} while (rainha <= 8);

    printf("\nMovimento do Cavalo.\n");

    int movimentos = 1; // Define a quantidade de vezes que o movimento completo será executado

    while (movimentos > 0) // Loop externo garante a execução da sequência do Cavalo
    {
        for(int i = 0; i < 2; i++) { // Loop interno para mover duas casas para baixo
            printf("Baixo.\n");
        }
        printf("Esquerda.\n"); // Movimento final do Cavalo para a esquerda

        movimentos--; // Decrementa o contador para encerrar o loop
    }
   





    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}

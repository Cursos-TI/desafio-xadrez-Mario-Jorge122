#include <stdio.h>
#include <unistd.h>

// Função recursiva para a Torre (movendo para a direita)
void moverTorre(int casas) {
    if (casas > 0) { 
        printf("Direita.\n");
        sleep(1);
        moverTorre(casas - 1);
    }
}

// Função recursiva para o Bispo (movendo na diagonal direita)
void moverBispo(int casas) {
    if (casas > 0) {  
        printf("Diagonal, Direita.\n");
        sleep(1);
        moverBispo(casas - 1);
    }
}

// Função recursiva para a Rainha (movendo para a esquerda)
void moverRainha(int casas) {
    if (casas > 0) { 
        printf("Esquerda.\n");
        sleep(1);
        moverRainha(casas - 1);
    }
}

// Função para o movimento do Cavalo usando dois loops
void moverCavalo(int movimentos) {
    for (int i = 0; i < movimentos; i++) { // Repete o movimento completo
        for (int j = 0; j < 2; j++) { // Mover 2 casas para cima
            printf("cima.\n");
            sleep(1);
        }
        printf("Esquerda.\n"); // Movimento final do Cavalo para a esquerda
    }
}

int main() {
    int casasTorre, casasBispo, casasRainha, movimentosCavalo;

    // Pedindo ao usuário a quantidade de casas
    printf("Quantas casas a Torre deve se mover? ");
    scanf("%d", &casasTorre); //Exemplo: 5

    printf("Quantas casas o Bispo deve se mover? ");
    scanf("%d", &casasBispo); //Exemplo: 5

    printf("Quantas casas a Rainha deve se mover? ");
    scanf("%d", &casasRainha); //Exemplo: 8

    printf("Quantos movimentos completos o Cavalo deve fazer? ");
    scanf("%d", &movimentosCavalo); //Exemplo: 1 //Se for inserido outro valor, ele repetirá o mesmo printf nessa quantidade
    printf("Carregando...\n");
    sleep(3);

    // Chamando as funções
    printf("\nMovimento da Torre:\n");
    sleep(1);
    moverTorre(casasTorre);
    

    printf("\nMovimento do Bispo:\n");
    sleep(1);
    moverBispo(casasBispo);
    

    printf("\nMovimento da Rainha:\n");
    sleep(1);
    moverRainha(casasRainha);
    

    printf("\nMovimento do Cavalo:\n");
    sleep(1);
    moverCavalo(movimentosCavalo);

    return 0;
}
#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void movimentoTorre(int casas){
    if(casas > 0){
        printf("Direita\n");
        movimentoTorre(casas - 1);
    }
}

void movimentoRainha(int casas){
    if(casas > 0){
        printf("Esquerda\n");
        movimentoTorre(casas - 1);
    }
 }

 void movimentoBispo(int casasBispo){

    if(casasBispo <= 0)
        return;

    for(int i = 0; i < 1; i++){
        printf("Cima, ");
        for(int j = 0; j < 1; j++){
            printf("Direita \n");
        }
    }

    movimentoBispo(casasBispo - 1);

 }

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int cavaloVertical = 2;
    int cavaloHorizontal = 1;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    int i = 0;
    printf("Movimento do Bispo: \n");
    while(i < casasBispo){
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Movimento da torre: \n");
    for(int i = 0; i < 5; i++){
        printf("Direita\n");
    }

    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    int j = 0;
    printf("Movimento da rainha: \n");
    do{
        printf("Esquerda\n");
        j++;
    }while(j < casasRainha);

    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Movimento do cavalo: \n");
    for(int i = 0; i < cavaloHorizontal; i++){
        int x = 0;
        
        while(x < cavaloVertical){
            printf("Baixo ");
            x++;
        }
        printf("Esquerda \n");
    }

    printf("\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    printf("Movimento da torre recursivo: \n");
    movimentoTorre(casasTorre);
    printf("\n");

    printf("Movimento da rainha recursivo: \n");
    movimentoRainha(casasRainha);
    printf("\n");

    printf("Movimento do bispo recursivo: \n");
    movimentoBispo(casasBispo);
    printf("\n");

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    printf("Movimento do cavalo: \n");
    for(int vertical = 0, horizontal = 0; horizontal < cavaloHorizontal + 1; horizontal++){
        
        //horizontal está sendo percorrida 3x, mas imprimimos apenas quando for horizontal = 1
        if(horizontal == 0){  //Criado apenas para fazer o pedido do exercício, continuando o for quando horizontal = 0
            continue;
        }

        if(horizontal == 2){  //Neste caso é um a mais do que gostariamos de andar na horizontal, então fazemos break para encerrar
            break;
        }
                
        while(vertical < cavaloVertical){
            printf("Cima, ");
            vertical++;
        }

        printf("Direita \n");
    }

    return 0;
}

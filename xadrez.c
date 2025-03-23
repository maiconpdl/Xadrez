#include <stdio.h>

void bispo(){
    /* 
        Movimenta o bispo 5 casas na diagonal para direita/cima.
        Contando com a posição atual da peça.
        O movimento do bispo foi feito andando uma casa para direita e depois uma casa para cima.
        Terminando com 5 casas na diagonal.
    */
    for (int x = 0; x < 5; x++)
    {
        //Imprime o movimento para direita e para cima, até que o valor de x chegue a 5.
        printf("Mover para direita\n");
        printf("Mover para cima\n");
        
    }
}

void torre(){
    /* 
        Movimenta a torre 5 casas para cima.
        Contando com a posição atual da peça.
    */

    int cont = 0;
    while (cont <5)
    {
        //Imprime o movimento para cima, até que o contador chegue a 5.
        printf("Mover para cima\n");
        cont++;
    }
    
    
}

void rainha(){
    /* 
        Movimenta a rainha 8 casas para a esquerda, saindo do lado direito do tabuleiro para o esquerdo.
        Contando com a posição atual da peça.
    */
    int cont = 0;
    do
    {
        //Imprime o movimento para esquerda, até que o contador chegue a 8.
        printf("Mover para esquerda\n");
        cont++;
    } while (cont < 8);
    
}

int main() {
    int opcao = 10;
    
    //Enquanto a opção for diferente de 0, o programa pergunta qual peça deseja mover.
    while (opcao != 0)
{
    printf("Escolha a peça que deseja mover: \n");
    printf("1 - Bispo\n");
    printf("2 - Torre\n");
    printf("3 - Rainha\n");
    printf("0 - Sair\n");
    scanf("%d", &opcao);

    //Chama a função referente a peça escolhida.
    switch (opcao) {
        case 1:
            bispo();
            break;
        case 2:
            torre();
            break;
        case 3:
            rainha();
            break;
        case 0:
            break;
        default:
            printf("Opção inválida\n");
            break;
    }
}      
    
    return 0;
}
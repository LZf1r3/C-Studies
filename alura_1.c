#include <stdio.h>
int main() {

    //imprime cabecalho do jogo//
    printf("###################\n");
    printf("Bem Vindo ao Jogo De Adivinha\n");
    printf("###################\n");
    
    int numero_secreto = 42;

    int chute;

    printf("Qual e' o seu cute? ");
    scanf("%d", &chute);
    
    if (chute == numero_secreto){
        printf("Voce Acertou!\n");
    }
    else{
        printf("Voce Errou!\n");
        if (numero_secreto>chute){
            printf("Seu chute foi menor do que o numero secreto\n");
        }
        else{
            printf("Seu chute foi maior do que o numero secreto\n");
        }
    }
}
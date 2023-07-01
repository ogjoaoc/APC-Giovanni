#include <stdio.h>

#define TAM_NOME 100

int main(void) 
{

    int n;
    int i;
    char nome_jogadores[TAM_NOME];
    int total_saque_jogador, 
    total_bloqueio_jogador,  total_ataque_jogador, 
    sucesso_saque, sucesso_bloqueio, sucesso_ataque;

    int soma_saque_equipe = 0, soma_sucesso_saque_total_equipe = 0, soma_ataque_equipe = 0,
    soma_sucesso_ataque_total_equipe = 0, soma_bloqueio_equipe = 0, soma_sucesso_bloqueio_total_equipe = 0;
    
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        scanf(" %[^\n]", nome_jogadores);
        scanf("%d %d %d", &total_saque_jogador, &total_bloqueio_jogador, &total_ataque_jogador);
        scanf("%d %d %d", &sucesso_saque, &sucesso_bloqueio, &sucesso_ataque);

        soma_sucesso_saque_total_equipe += sucesso_saque;
        soma_sucesso_bloqueio_total_equipe += sucesso_bloqueio;
        soma_sucesso_ataque_total_equipe += sucesso_ataque;
        soma_saque_equipe += total_saque_jogador;
        soma_bloqueio_equipe += total_bloqueio_jogador;
        soma_ataque_equipe += total_ataque_jogador;

    }

        printf("Pontos de Saque: %.2lf %%.\n", ((double) soma_sucesso_saque_total_equipe / soma_saque_equipe) * 100.0);
        printf("Pontos de Bloqueio: %.2lf %%.\n", ((double) soma_sucesso_bloqueio_total_equipe / soma_bloqueio_equipe) * 100.0);
        printf("Pontos de Ataque: %.2lf %%.\n", ((double) soma_sucesso_ataque_total_equipe / soma_ataque_equipe) * 100.0);


        /*printf("Pontos de Saque: %d %.\n", (soma_saque_equipe / soma_sucesso_saque_total_equipe) * 100);
        printf("Pontos de Bloqueio: %d %.\n", (soma_bloqueio_equipe / soma_sucesso_bloqueio_total_equipe) * 100);
        printf("Pontos de Ataque: %d %.\n", (soma_ataque_equipe / soma_sucesso_ataque_total_equipe) * 100);*/


        return 0;
    }

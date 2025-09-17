#include <stdio.h>
#include <string.h>

// Definicao da struct Territorio.
// Esta estrutura agrupa dados relacionados (nome, cor, tropas) em uma unica unidade.
// O nome da struct e as variaveis sao claros, seguindo os requisitos de manutenibilidade.
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    // Declaracao de um vetor de structs, com capacidade para 5 territorios.
    struct Territorio territorios[5];
    int i; // Variavel de controle para os lacos.

    // A interface de entrada e clara, orientando o usuario sobre o que digitar.
    printf("--- Cadastro de Territorios ---\n\n");
    printf("Por favor, preencha os dados para 5 territorios:\n\n");

    // Laco for para a entrada de dados.
    // O laco ira se repetir 5 vezes, uma para cada territorio a ser cadastrado.
    for (i = 0; i < 5; i++) {
        printf("Territorio #%d:\n", i + 1);

        // Entrada do nome do territorio.
        // Usamos scanf para a leitura.
        printf("Nome do Territorio: ");
        scanf("%s", territorios[i].nome);

        // Entrada da cor do exercito.
        printf("Cor do Exercito: ");
        scanf("%s", territorios[i].cor);

        // Entrada do numero de tropas.
        printf("Numero de tropas: ");
        scanf("%d", &territorios[i].tropas);
        
        // Consome o caractere de nova linha pendente para evitar problemas
        // nas proximas leituras de string.
        getchar(); 

        printf("\n");
    }

    // Exibicao dos dados registrados.
    // Este laco percorre o vetor e exibe os dados de cada territorio com formatacao clara.
    printf("--- Dados dos Territorios Cadastrados ---\n\n");
    for (i = 0; i < 5; i++) {
        printf("Territorio #%d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do Exercito: %s\n", territorios[i].cor);
        printf("Numero de Tropas: %d\n", territorios[i].tropas);
        printf("--------------------------------------\n");
    }

    return 0;
}
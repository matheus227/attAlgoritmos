#include <stdio.h>  // Biblioteca padrão para entrada e saída (printf e scanf)
#include <stdlib.h> // Biblioteca padrão para funções utilitárias do sistema

int main(int argc, char *argv[]) {
	
	int nInteiro; // Declaração de uma variável do tipo inteiro
	
	printf("Digite um numero inteiro: "); // Exibe uma mensagem na tela
	
	// O scanf lê a entrada do teclado. 
	// %d indica que o programa espera um número inteiro decimal.
	// &nInteiro é o operador de endereço; ele diz ao scanf para salvar o valor no local da memória dessa variável.
	scanf("%d", &nInteiro); 
	
	/* --- Estrutura de Decisão (if / else if) --- */
	
	if(nInteiro < 0){
		// Se o número for menor que zero
		printf("numero negativo\n");
	} 
	else if(nInteiro == 0) {
		// Se o número for exatamente igual a zero
		printf("nulo\n");
	} 
	else if(nInteiro % 2 == 0){
		// O operador % (módulo) pega o resto da divisão. 
		// Se o resto da divisão por 2 for 0, o número é positivo e par.
		printf("numero positivo\n");
		printf("O numero inserido e par\n");
	}
	
	/* --- Operações Matemáticas --- */
	
	int dobro = nInteiro * 2;   // Multiplica o valor inserido por 2
	int metade = nInteiro / 2;  // Divide o valor inserido por 2 (divisão inteira)
	
	// Exibe os resultados dos cálculos
	printf("dobro: %d \n", dobro);
	printf("metade: %d \n", metade);
	
	return 0; // Indica que o programa terminou com sucesso
}

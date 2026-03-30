#include <stdio.h>  // Biblioteca padrao para entrada e saida (printf e scanf)
#include <stdlib.h> // Biblioteca padrao para funcoes utilitarias do sistema

int main(int argc, char *argv[]) {
	
	int nInteiro; // Declaracao de uma variavel do tipo inteiro
	
	printf("Digite um numero inteiro: "); // Exibe uma mensagem na tela
	
	// O scanf le a entrada do teclado. 
	// %d indica que o programa espera um numero inteiro decimal.
	// &nInteiro e o operador de endereco que aponta onde o valor sera salvo.
	scanf("%d", &nInteiro); 
	
	/* --- Estrutura de Decisao (if / else if) --- */
	
	if(nInteiro % 2 == 0){
		// O operador % (modulo) calcula o resto da divisao por 2.
		// Se o resto for 0, o numero e par.
		printf("numero positivo\n");
		printf("O numero inserido e par\n");
	}
	/* EXPLICACAO DO OPERADOR && (E logico):
	   O operador && serve para unir duas condicoes. 
	   Para que o bloco abaixo seja executado, AMBAS as condicoes devem ser verdadeiras:
	   1. nInteiro % 2 != 0  -> O resto da divisao por 2 deve ser diferente de zero (Impar)
	   E (&&)
	   2. nInteiro >= 0      -> O numero deve ser maior ou igual a zero (Nao negativo)
	*/
	else if(nInteiro % 2 != 0 && nInteiro >= 1){ //se o resto da divisão de nInteiro for diferente de 0 E(&&) nInteiro for maior ou igual a 0
		printf("numero impar\n");
	}
	
	/* --- Operacoes Matematicas --- */
	
	int dobro = nInteiro * 2;   // Multiplicacao simples
	int metade = nInteiro / 2;  // Divisao inteira (ignora o que vem apos a virgula)
	
	// Exibe os resultados dos calculos
	printf("dobro: %d \n", dobro);
	
	// Exibindo a metade. 
	// Nota: Se nInteiro for impar, o C descarta a parte decimal (.5). por conta da variavel ser inteira
	printf("metade: %d \n", metade); 
	
	return 0; // Finaliza o programa retornando 0 ao sistema
}

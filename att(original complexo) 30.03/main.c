#include <stdio.h>  // Fornece funções de comunicação com o usuário (entrada/saída), como printf e scanf
#include <stdlib.h> // Fornece funções utilitárias, como o gerenciamento de memória e controle do processo

int main(int argc, char *argv[]) {
	
	int nInteiro; // Reserva um espaço na memória para armazenar um número inteiro
	
	printf("Digite um numero inteiro: "); // Exibe uma instrução no console para o usuário
	
	/* O scanf captura o que foi digitado.
	   %d: Especificador de formato para números inteiros (decimal).
	   &nInteiro: O símbolo '&' (e comercial) acessa o endereço de memória da variável 
	   para que o valor digitado seja guardado no lugar certo.
	*/
	scanf("%d", &nInteiro); 
	
	/* --- Estrutura de Decisão (Fluxo de Controle) --- */
	
	if(nInteiro < 0){
		// Caso o valor seja menor que zero, executa este bloco
		printf("numero negativo\n");
	} 
	else if(nInteiro == 0) {
		// Caso o valor seja exatamente zero, executa este bloco
		printf("nulo\n");
	} 
	else if(nInteiro % 2 == 0){
		/* Verificação de paridade:
		   O operador '%' retorna o resto da divisão. Se o resto da divisão por 2 for 0, 
		   significa que o número é par.
		*/
		printf("numero positivo\n");
		printf("O numero inserido e par\n");
	} else{
		// Se não entrar em nenhuma das condições acima, o número só pode ser ímpar
		printf("numero inserido e impar\n");
	}
	
	/* --- Operações Matemáticas --- */
	
	int dobro = nInteiro * 2;   // Realiza uma multiplicação simples
	
	/* Cálculo de divisão com ponto flutuante (float):
	   Usamos '2.0' para forçar o compilador a entender que queremos uma divisão real.
	   Se usássemos apenas '2', o C faria uma divisão inteira (descartando as casas decimais).
	*/
	float metade = nInteiro / 2.0; 
	
	// Exibição dos cálculos:
	printf("dobro: %d\n", dobro);
	// '%.1f' formata o número real para exibir apenas 1 casa decimal após o ponto
	printf("metade: %.1f\n", metade); 

	printf("tabuada do numero: %d\n", nInteiro);
	
	/* Estrutura de Repetição (Loop For):
	   - int mult = 0: Inicializa o contador em zero.
	   - mult <= 10: O loop continua enquanto i for menor ou igual a 10.
	   - mult++: Incrementa o contador em +1 a cada volta.
	*/
	for(int mult = 0; mult <=10; mult++){
		// Exibe a linha da tabuada: multiplicador, número base e o resultado
		printf("%d x %d = %d\n", mult, nInteiro, mult*nInteiro);
	}
	
	return 0; // Finaliza a função principal e informa ao Sistema Operacional que o programa rodou sem erros
}

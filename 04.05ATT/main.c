#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


/* atividade de vetores em C do dia 04.05.20206 */


int att1(){
	
	int numeroV[5] = {7, 9, 6, 18, 19};
	
	int i;
	
	for (i = 0; i < 5; i++){
		printf("posicao: %d |  ", i+1); // i+1, se nao a prieira posicao e sinalizada como 0
		/*Para ficar mais agradavel de ver, tirei a quebra de linha do primeiro
		printf, fica assim: "posicao 1 | numero 7"*/
		printf("numero: %d\n", numeroV[i]);
	}
	
	return 0;
}

int att2(){
	
	
	int numeroV[10];
	
	/*
	para definir o valor de uma posicao do vetor:
	numeroV[0] = 2
	aqui a posicao inicial do vetor e 1.
	*/
	
	int i;
	
	for(i = 0; i < 10; i++){
		printf("Digite o valor para a posicao %d do vetor:\n ", i+1);
		scanf("%d", &numeroV[i]);
	}
	
	printf("Exibindo valores inseridos...\n\n");
	
	for (i = 0; i < 10; i++){
	printf("posicao: %d |  ", i+1);
	printf("numero: %d\n", numeroV[i]);
	}
	return 0;
}

int att3(){
	
	int numeroV[5];
	
	printf("digite um valor para o vetor: \n");
	scanf("%d", &numeroV[0]);

	printf("digite um valor para o vetor: \n");
	scanf("%d", &numeroV[1]);
	
	printf("digite um valor para o vetor: \n");
	scanf("%d", &numeroV[2]);
	
	printf("digite um valor para o vetor: \n");
	scanf("%d", &numeroV[3]);
	
	printf("digite um valor para o vetor: \n");
	scanf("%d", &numeroV[4]);
	
	int i;
	int tamanho = 5;
	for(i = tamanho - 1; i >= 0; i--){
		
		printf("posicao: %d |  ", i);
		printf("numero: %d\n", numeroV[i]);
	}
	
	return 0;
}

int att4(){
	
	int numeroV[8];
	
	printf("digite um valor para o vetor: \n");
	scanf("%d", &numeroV[0]);

	printf("digite um valor para o vetor: \n");
	scanf("%d", &numeroV[1]);
	
	printf("digite um valor para o vetor: \n");
	scanf("%d", &numeroV[2]);
	
	printf("digite um valor para o vetor: \n");
	scanf("%d", &numeroV[3]);
	
	printf("digite um valor para o vetor: \n");
	scanf("%d", &numeroV[4]);	
	
	printf("digite um valor para o vetor: \n");
	scanf("%d", &numeroV[5]);

	printf("digite um valor para o vetor: \n");
	scanf("%d", &numeroV[6]);
	
	printf("digite um valor para o vetor: \n");
	scanf("%d", &numeroV[7]);
	
	int i;
	
	for(i = 0; i < 8; i++){
		if (numeroV[i] % 2 == 0){
		printf("numero: %d e par\n", numeroV[i]); 
		}
	}
	return 0;
}

int att5(){
	
	int numeroV[6];
	
	printf("digite um valor para o vetor: \n");
	scanf("%d", &numeroV[0]);

	printf("digite um valor para o vetor: \n");
	scanf("%d", &numeroV[1]);
	
	printf("digite um valor para o vetor: \n");
	scanf("%d", &numeroV[2]);
	
	printf("digite um valor para o vetor: \n");
	scanf("%d", &numeroV[3]);
	
	printf("digite um valor para o vetor: \n");
	scanf("%d", &numeroV[4]);	
	
	printf("digite um valor para o vetor: \n");
	scanf("%d", &numeroV[5]);
	
	int i;
	
	for(i = 0; i < 6; i++){
		if (numeroV[i] > 10){
		printf("numero: %d e maior que 10\n", numeroV[i]); 
		}
	}
	
	return 0; 
}

int main(int argc, char *argv[]) {
	
//	att1();
//	att2();
//	att3();
//	att4();
	att5();
	
	
	return 0;
}

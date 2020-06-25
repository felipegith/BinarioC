#include<stdio.h>
#include<locale.h>



int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int numeroDecimal;
	int auxiliador;
	int i;
	int a=1;
	int b=0;
	
	
	printf("\n INFORME O NÚMERO DECIMAL QUE DESEJA CONVERTER PARA BINÁRIO:");
	
	scanf("%d", &numeroDecimal);
	
	auxiliador=numeroDecimal;     // Armazenando o número digitado em uma variável auxiliar.
	
	while(auxiliador!=0){    // Enquanto o numero digitado for DIFERENTE DE 0, entraremos na condição abaixo.
		
		i=auxiliador%2;    // A variável 'i' armazena o RESTO DA DIVISÃO DO NÚMERO DIGITADO DIVIDO POR 2
		
		b=b+(i*a);         // A variável b armazena o RESTO DA DIVISÃO VEZES 1 + 0.    ( A variável 'a' tem valor de 1 e a variável 'b' tem valor de 0 ) 
		
		auxiliador=auxiliador/2;  // A variável auxiliadora recebe o número decimal digitado que foi guardado na variável auxiliadora e divide o mesmo por 2.
		
		a=a*10;   // A variável 'a' recebe a multipliação de 1*10  ( A variável 'a' tem valor de 1 )
	}
	
	printf("\n\t DECIMAL:%d \n\t BINÁRIO :%d", numeroDecimal, b);  // Imprime o número decimal digitado e a conversão para binário.
	
}

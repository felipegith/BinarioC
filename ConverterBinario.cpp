#include<stdio.h>
#include<locale.h>



int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int numeroDecimal;
	int auxiliador;
	int i;
	int a=1;
	int b=0;
	
	
	printf("\n INFORME O N�MERO DECIMAL QUE DESEJA CONVERTER PARA BIN�RIO:");
	
	scanf("%d", &numeroDecimal);
	
	auxiliador=numeroDecimal;     // Armazenando o n�mero digitado em uma vari�vel auxiliar.
	
	while(auxiliador!=0){    // Enquanto o numero digitado for DIFERENTE DE 0, entraremos na condi��o abaixo.
		
		i=auxiliador%2;    // A vari�vel 'i' armazena o RESTO DA DIVIS�O DO N�MERO DIGITADO DIVIDO POR 2
		
		b=b+(i*a);         // A vari�vel b armazena o RESTO DA DIVIS�O VEZES 1 + 0.    ( A vari�vel 'a' tem valor de 1 e a vari�vel 'b' tem valor de 0 ) 
		
		auxiliador=auxiliador/2;  // A vari�vel auxiliadora recebe o n�mero decimal digitado que foi guardado na vari�vel auxiliadora e divide o mesmo por 2.
		
		a=a*10;   // A vari�vel 'a' recebe a multiplia��o de 1*10  ( A vari�vel 'a' tem valor de 1 )
	}
	
	printf("\n\t DECIMAL:%d \n\t BIN�RIO :%d", numeroDecimal, b);  // Imprime o n�mero decimal digitado e a convers�o para bin�rio.
	
}

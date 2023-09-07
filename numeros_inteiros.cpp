bool numeroReal(double numero)
{
	return true;
}




/* Um número inteiro é um número que pode ser escrito sem um componente fracional. Por exemplo, 21, 4, 0, e −2048 são números inteiros, enquanto 9.75, e √2 não são. O conjunto dos números inteiros é representado pelo símbolo \mathbb {Z}, cuja letra é originada da palavra alemã Zahlen. Wikipédia*/

bool NumeroInteiroPositivo(double numero)
{
	// supondo que numero = 2.5
	
	// exemplo   "(int)2.5"  o resultadioserá 2, ou seja arendondamos para báixo.
	int parte_sem_fracao = (int)numero;
	
	
	// tirando a parte fracionaria.
	// exemplo "2.5  -  2" resultará em 0.5
	double fracao = numero - parte_sem_fracao;
	
	// finalmente testamos se a fracao do numero for 0, ele é um inteiro
	// exemplos de numeeos inteiros 2, 1, 2 ,3 cujo a parte fracionaria é 0
	return fracao == 0;
}


bool NumeroInteiro(double numero)
{
	// primeiros vamos garantir que o numero seja positivo para fazermos o teste
	// a expressao abaixo tornará qualquer numero negativo positivo.
	if ( numero < 0 ) numero = -numero;
	// vamos retornar o resultado do teste.
	return NumeroInteiroPositivo(numero);
}



// essa implementaçao é para testes.



#define UNITTEST_INTEIRO 1
#if UNITTEST_INTEIRO
#include <stdlib.h>
void test() {
	printf("Testando numeros inteiros !\n");
	if ( NumeroInteiro(0.5) == false )
	    printf("Teste 1 - Passed.\n");
	else 
	   printf("Teste 1 -  Failed.\n");
	 
	 
	 if ( NumeroInteiro(0) == true )
	    printf("Teste 2 - Passed.\n");
	 else
	   printf("Teste 2 - Failed");
	   
	   
	   
	  if ( NumeroInteiro(-200) == true )
	    printf("Teste 3 - Passed.\n");
	 else
	   printf("Teste 3 - Failed");
	   
	   if ( NumeroInteiro(-200.4) == false )
	    printf("Teste 3 - Passed.\n");
	 else
	   printf("Teste 3 - Failed");
}
int main(void) {
	test();
}
#endif
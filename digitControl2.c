#include <stdio.h>
#include <stdlib.h>
#include "digitControl2.h"

int digito_controle_2 (int cpf_int []){
	
	for(i = 0; i < 10; i++){
		soma2 = soma2 + (cpf_int[i] * multiplicar2);
		multiplicar2--;
	}
	
	teste2 = (soma2 * 10) % 11;
	if (teste2 == 10){
		controle2 = 0;
	}else {
		controle2 = teste2;
	}
	
	return controle2;	
}

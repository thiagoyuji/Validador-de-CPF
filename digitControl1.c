#include <stdio.h>
#include <stdlib.h>
#include "digitControl1.h"

int digito_controle_1 (int cpf_int []){
	
	for(i = 0; i < 9; i++){
		soma1 = soma1 + (cpf_int[i] * multiplicar1);
		multiplicar1--;
	}
	
	teste1 = (soma1 * 10) % 11;
	if (teste1 == 10){
		controle1 = 0;
	}else {
		controle1 = teste1;
	}
	
	return controle1;	
}

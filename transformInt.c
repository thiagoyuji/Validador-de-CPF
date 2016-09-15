#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "transformInt.h"

int *trasnform_cpf_int (char cpf[]){
	
	strcpy (copiar,cpf);
	
	for (i = 0; i < 14; i++){
		if (i >= 3 && i < 6){
			t_cpf[i] = copiar[i + 1] - 48;
		}else if (i >= 6 && i < 9){
			t_cpf[i] = copiar[i + 2] - 48;
		}else if (i >= 9 && i < 14){
			t_cpf[i] = copiar[i + 3] - 48;
		}else {
			t_cpf[i] = copiar[i] - 48;
		}
	}	
	
	return t_cpf;
}

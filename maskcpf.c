#include <stdio.h>
#include <stdlib.h>
#include "maskcpf.h"

char *get_cpf () {

	for (i = 0; i < 14; i++){
		if (i == 3 || i == 7){
			printf ("%c", cpf[i]);
		}else if (i == 11){
			printf ("%c", cpf[i]);
		}else {
			cpf[i] = getch();
			printf ("%c", cpf[i]);
		}
	}	
	
	return cpf;
	
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "maskcpf.c"
#include "transformInt.c"
#include "digitControl1.c"
#include "digitControl2.c"

int main () {
	
	system ("cls");
	
	printf ("Insira o CPF >>> ");	
	char *cpf = get_cpf();	
	int *cpf_int = trasnform_cpf_int (cpf);
	int controle1 = digito_controle_1(cpf_int);
	int controle2 = digito_controle_2(cpf_int);
	
	if ((cpf_int[9] == controle1) && (cpf_int[10] == controle2)){
		printf ("\n\nCPF >>> VALIDO.\n\n");
	}else {
		printf ("\n\nCPF >>> INVALIDO.\n\n");
	}
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verificationCpfSpecialCaracters(char argv[]);
void becomeCharInInteger(int cpfInt[], char argv[]);
int firstDigitDiscover(int cpfInt[]);
int secondDigitDiscover(int cpfInt[]);

int main (int argc, char * argv[]){

	if (argc <= 1){
		fprintf(stderr,"\nInformation: No Arguments -- Status: ERROR\n");
	}else{
		int resultVer = verificationCpfSpecialCaracters(argv[1]);
//-------------------------------------------------------------------------------------------------------------------------------
		if(resultVer == 0){
			int cpfInt[11];
			becomeCharInInteger(cpfInt, argv[1]);

			int cpfFirstControlDigit = firstDigitDiscover(cpfInt);
			if (cpfFirstControlDigit == cpfInt[9]){
				int cpfSecondControlDigit = secondDigitDiscover(cpfInt);
				if (cpfSecondControlDigit == cpfInt[10]){
					printf ("\nInformation: CPF is Valid -- Status Program Executed: SUCCESS\n\n");
				}else{
					printf ("\nInformation: CPF isn't Valid -- Status Program Executed: SUCCESS\n\n");
				}
			}else{
				printf ("\nInformation: CPF isn't Valid -- Status Program Executed: SUCCESS\n\n");
			}
		}
//------------------------------------------------------------------------------------------------------------------------------------
		if (resultVer == 1){
			int cpfInt[11];
                        becomeCharInInteger(cpfInt, argv[1]);

                        int cpfFirstControlDigit = firstDigitDiscover(cpfInt);
                        if (cpfFirstControlDigit == cpfInt[9]){
                                int cpfSecondControlDigit = secondDigitDiscover(cpfInt);
                                if (cpfSecondControlDigit == cpfInt[10]){
                                        printf ("\nInformation: CPF is Valid -- Status Program Executed: SUCCESS\n\n");
                                }else{
                                        printf ("\nInformation: CPF isn't Valid -- Status Program Executed: SUCCESS\n\n");
                                }
                        }else{
                                printf ("\nInformation: CPF isn't Valid -- Status Program Executed: SUCCESS\n\n");
                        }
		}
//--------------------------------------------------------------------------------------------------------------------------------------
		if (argc > 2){
			int i;
			for (i = 2; i < argc; i++){
				fprintf (stderr,"\nInformation: %s -> Argument Killed -- Status: SUCCESS\n");
			}
			printf ("\n");
		}
	}

	printf ("Information: Program Finished -- Status: SUCCESS\n\n");

	return 0;
}

int secondDigitDiscover(int cpfInt[]){

	int i, j = 0, soma = 0;
	int secondControlDigit = 0;

	for (i = 0; i <= 9; i++){
		soma += (cpfInt[i] * i);
		j++;
	}

	secondControlDigit = soma % 11;
	if (secondControlDigit == 10){
		secondControlDigit = 0;
	}

	return secondControlDigit;
}

int firstDigitDiscover(int cpfInt[]){

	int i,j = 0, soma = 0;
	int firstControlDigit = 0;

	for (i = 1; i <= 9; i++){
		soma += (cpfInt[j] * i);
		j++;
	}

	firstControlDigit = soma % 11;
	if (firstControlDigit == 10){
		firstControlDigit = 0;
	}

	return firstControlDigit;
}

void becomeCharInInteger(int cpfInt[], char argv[]){

	int i = 0, j = 0, sizeStr = 0;
	char temp;

	sizeStr = strlen(argv);

	while (i < sizeStr){
		if (argv[i] == '.' || argv[i] == '-'){
			i++;
		}
		temp = argv[i];
		cpfInt[j] = atoi(&temp);
		i++;
		j++;
	}
}

int verificationCpfSpecialCaracters(char argv[]){

	int i = 0;

	while (i <= 11){
		if ((argv[i] == '.') || (argv[i] == '-')){
			return 0;
		}
		i++;
	}

	return 1;
}

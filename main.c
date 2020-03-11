#include <stdio.h>
#include <stdlib.h>


int main() {
	
	char strInput[30];
	printf("Ingrese el texto a traducir: ");
	scanf("%[^\n]%*c", strInput);
    print(strInput);
	printf("\n");

	
	return 0;
}
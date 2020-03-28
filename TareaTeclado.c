#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sublista{ 
    char letra;
    struct sublista *sig; 
}tsublista; 

typedef struct diccionario{
    char tecla;
    struct sublista *subl;
    struct diccionario *sig; 
}tdiccionario; 
 
typedef tsublista *tpuntero; 
typedef tdiccionario *tpDiccionario; 

void imprimirLista(tpuntero cabeza){
    while(cabeza){ 
        printf("%c",cabeza->letra); 
        cabeza = cabeza->sig; 
    }
    printf("%s", " - "); 
}

void insertarSublista (tpuntero *cabeza, char l){
    tpuntero nuevo; 
    nuevo = malloc(sizeof(tsublista)); 
    nuevo->letra = l; 
    nuevo->sig = *cabeza; 
    *cabeza = nuevo; 
}

void insertarDiccionario (tpDiccionario *cabeza, tpuntero *l, char tecla){
    tpDiccionario nuevo; 
    nuevo = malloc(sizeof(tdiccionario)); 
    nuevo->tecla = tecla;
    nuevo->subl = *l; 
    nuevo->sig = *cabeza; 
    *cabeza = nuevo; 
}
 
int main(){

    //------------------ Inicia creacion de la estructura del teclado ------------------
    tpDiccionario dic;
    dic = NULL;
    
    tpuntero dos; 
    dos = NULL; 
    
    insertarSublista(&dos, 'C');
    insertarSublista(&dos, 'B');
    insertarSublista(&dos, 'A');
    insertarSublista(&dos, 'c');
    insertarSublista(&dos, 'b');
    insertarSublista(&dos, 'a');
    
    imprimirLista(dos);
    insertarDiccionario(&dic, &dos, '2');


    tpuntero tres;
    tres = NULL;
    
    insertarSublista(&tres, 'F');
    insertarSublista(&tres, 'E');
    insertarSublista(&tres, 'D');
    insertarSublista(&tres, 'f');
    insertarSublista(&tres, 'e');
    insertarSublista(&tres, 'd');
    imprimirLista(tres);
    
    insertarDiccionario(&dic, &tres, '3');
    
    
    tpuntero cuatro;
    cuatro = NULL;
    
    insertarSublista(&cuatro, 'I');
    insertarSublista(&cuatro, 'H');
    insertarSublista(&cuatro, 'G');
    insertarSublista(&cuatro, 'i');
    insertarSublista(&cuatro, 'h');
    insertarSublista(&cuatro, 'g');
    imprimirLista(cuatro);
    
    insertarDiccionario(&dic, &cuatro, '4');
    
    
    tpuntero cinco;
    cinco = NULL;
    
    insertarSublista(&cinco, 'L');
    insertarSublista(&cinco, 'K');
    insertarSublista(&cinco, 'J');
    insertarSublista(&cinco, 'l');
    insertarSublista(&cinco, 'k');
    insertarSublista(&cinco, 'j');
    imprimirLista(cinco);
    
    insertarDiccionario(&dic, &cinco, '5');
    
    tpuntero seis;
    seis = NULL;
    
    insertarSublista(&seis, 'O');
    insertarSublista(&seis, 'N');
    insertarSublista(&seis, 'M');
    insertarSublista(&seis, 'o');
    insertarSublista(&seis, 'n');
    insertarSublista(&seis, 'm');
    imprimirLista(seis);
    
    insertarDiccionario(&dic, &seis, '6');
    
    tpuntero siete;
    siete = NULL;
    
    insertarSublista(&siete, 'S');
    insertarSublista(&siete, 'R');
    insertarSublista(&siete, 'Q');
    insertarSublista(&siete, 'P');
    insertarSublista(&siete, 's');
    insertarSublista(&siete, 'r');
    insertarSublista(&siete, 'q');
    insertarSublista(&siete, 'p');
    imprimirLista(siete);
    
    insertarDiccionario(&dic, &siete, '7');
    
    tpuntero ocho;
    ocho = NULL;
    
    insertarSublista(&ocho, 'V');
    insertarSublista(&ocho, 'U');
    insertarSublista(&ocho, 'T');
    insertarSublista(&ocho, 'v');
    insertarSublista(&ocho, 'u');
    insertarSublista(&ocho, 't');
    imprimirLista(ocho);
    
    insertarDiccionario(&dic, &ocho, '8');
    
    
    tpuntero nueve;
    nueve = NULL;
    
    insertarSublista(&nueve, 'Z');
    insertarSublista(&nueve, 'Y');
    insertarSublista(&nueve, 'X');
    insertarSublista(&nueve, 'W');
    insertarSublista(&nueve, 'z');
    insertarSublista(&nueve, 'y');
    insertarSublista(&nueve, 'x');
    insertarSublista(&nueve, 'w');
    imprimirLista(nueve);
    
    insertarDiccionario(&dic, &nueve, '9');
    
    tpuntero cero; 
    cero = NULL; 
    
    insertarSublista(&cero, '!');
    insertarSublista(&cero, '?');
    insertarSublista(&cero, '.');
    insertarSublista(&cero, ',');
    insertarSublista(&cero, ' ');
    
    imprimirLista(cero);
    insertarDiccionario(&dic, &cero, '0');
    printf("\n");
    //------------------ termina Creacion ------------------
    
    
    char strInput[30];
	printf("Ingrese el texto a traducir: ");
	scanf("%[^\n]%*c", strInput);
	printf("\n");
	
    int pos = 0;
    int banderaInsercion = 0;
	char completeResult[200];
	char teclaRes[200];
	tpDiccionario actualDicc = dic;
	tpuntero sublistaAct = NULL;
	strcpy(completeResult, "");
	strcpy(teclaRes, "");
	
	while(strInput[pos]){
	    printf("Comienza nueva letra: %c\n", strInput[pos]);
	    while(actualDicc){
	        printf("Revisando la tecla: %c\n", actualDicc->tecla);
            sublistaAct = actualDicc->subl;
            while(sublistaAct){
                strcat(teclaRes, (char[2]) {actualDicc->tecla, '\0'});
                if(sublistaAct->letra == strInput[pos]){
                    printf("Letra '%c' encontrada, insertando resultado parcial: %s\n", sublistaAct->letra, teclaRes);
                    strcat(completeResult, teclaRes);
                    banderaInsercion = 1;
                    break;
                }
                sublistaAct = sublistaAct->sig;
            }
            strcpy(teclaRes, "");
            if(banderaInsercion){
                break;
            }
            actualDicc = actualDicc->sig;
        }
		if(!banderaInsercion){
		    fprintf(stderr, "Caracter '%s' desconocido...\n", strInput[pos]);
		} else {
		    banderaInsercion = 0;
		}
		actualDicc = dic;
		pos = pos + 1;
	}
	printf("resultado de la conversion: %s\n", completeResult);
    
    return 0;
}
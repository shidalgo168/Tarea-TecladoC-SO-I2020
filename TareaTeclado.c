
#include <stdio.h>
#include <stdlib.h>

typedef struct sublista{ 
    char letra;
    struct sublista *sig; 
}tsublista; 
 
typedef tsublista *tpuntero; 
 
void insertarSublista (tpuntero *cabeza, char l);
void imprimirLista(tpuntero cabeza);

typedef struct diccionario{ 
    struct sublista *subl;
    struct diccionario*sig; 
}tdiccionario; 
 
typedef tdiccionario *tpDiccionario; 
 
void insertarDiccionario (tpDiccionario *cabeza, tpuntero *l);


 
int main(){
    tpDiccionario dic;
    dic = NULL;
    
    tpuntero cero; 
    cero = NULL; 
    
    insertarSublista(&cero, '!');
    insertarSublista(&cero, '?');
    insertarSublista(&cero, '.');
    insertarSublista(&cero, ',');
    insertarSublista(&cero, ' ');
    
    imprimirLista(cero);
    insertarDiccionario(&dic, &cero);
    
    tpuntero dos; 
    dos = NULL; 
    
    insertarSublista(&dos, 'C');
    insertarSublista(&dos, 'B');
    insertarSublista(&dos, 'A');
    insertarSublista(&dos, 'c');
    insertarSublista(&dos, 'b');
    insertarSublista(&dos, 'a');
    
    imprimirLista(dos);
    insertarDiccionario(&dic, &dos);


    tpuntero tres;
    tres = NULL;
    
    insertarSublista(&tres, 'F');
    insertarSublista(&tres, 'E');
    insertarSublista(&tres, 'D');
    insertarSublista(&tres, 'f');
    insertarSublista(&tres, 'e');
    insertarSublista(&tres, 'd');
    imprimirLista(tres);
    
    insertarDiccionario(&dic, &tres);
    
    
    tpuntero cuatro;
    cuatro = NULL;
    
    insertarSublista(&cuatro, 'I');
    insertarSublista(&cuatro, 'H');
    insertarSublista(&cuatro, 'G');
    insertarSublista(&cuatro, 'i');
    insertarSublista(&cuatro, 'h');
    insertarSublista(&cuatro, 'g');
    imprimirLista(cuatro);
    
    insertarDiccionario(&dic, &cuatro);
    
    
    tpuntero cinco;
    cinco = NULL;
    
    insertarSublista(&cinco, 'L');
    insertarSublista(&cinco, 'K');
    insertarSublista(&cinco, 'J');
    insertarSublista(&cinco, 'l');
    insertarSublista(&cinco, 'k');
    insertarSublista(&cinco, 'j');
    imprimirLista(cinco);
    
    insertarDiccionario(&dic, &cinco);
    
    tpuntero seis;
    seis = NULL;
    
    insertarSublista(&seis, 'O');
    insertarSublista(&seis, 'N');
    insertarSublista(&seis, 'M');
    insertarSublista(&seis, 'o');
    insertarSublista(&seis, 'n');
    insertarSublista(&seis, 'm');
    imprimirLista(seis);
    
    insertarDiccionario(&dic, &seis);
    
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
    
    insertarDiccionario(&dic, &siete);
    
    tpuntero ocho;
    ocho = NULL;
    
    insertarSublista(&ocho, 'V');
    insertarSublista(&ocho, 'U');
    insertarSublista(&ocho, 'T');
    insertarSublista(&ocho, 'v');
    insertarSublista(&ocho, 'u');
    insertarSublista(&ocho, 't');
    imprimirLista(ocho);
    
    insertarDiccionario(&dic, &ocho);
    
    
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
    
    insertarDiccionario(&dic, &nueve);
    
    
    
    
    
   
     
return 0;
}
 
void imprimirLista(tpuntero cabeza){
    while(cabeza != NULL){ 
        printf("%4c",cabeza->letra); 
        cabeza = cabeza->sig; 
    }
}


void insertarSublista (tpuntero *cabeza, char l){
    tpuntero nuevo; 
    nuevo = malloc(sizeof(tsublista)); 
    nuevo->letra = l; 
    nuevo->sig = *cabeza; 
    *cabeza = nuevo; 
}

void insertarDiccionario (tpDiccionario *cabeza, tpuntero *l){
    tpDiccionario nuevo; 
    nuevo = malloc(sizeof(tdiccionario)); 
    nuevo->subl = *l; 
    nuevo->sig = *cabeza; 
    *cabeza = nuevo; 
}
 
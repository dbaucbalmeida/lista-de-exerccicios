
#include <stdio.h>
main(){
    /*Chico tem 1,50 metro e cresce 2 centímetros por ano, 
    enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. 
    Construa um algoritmo que calcule e imprima quantos anos serão
     necessários para que Zé seja maior que Chico.*/
     
    float alturachico = 1.50 ;
    float alturaze = 1.10;
    int anos = 0;

//while= enquanto
    while (alturaze <= alturachico) {
        alturachico += 0.02; 
        alturaze += 0.03;
        anos++;
    }
    printf("\nserao necessarios %d anos para que ze seja mais alto que chico", anos);


}
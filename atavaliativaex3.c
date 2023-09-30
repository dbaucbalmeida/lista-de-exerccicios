
/*3. Dado três valores, A, B e C, construa um algoritmo para verificar se estes valores podem ser 
valores dos lados de um triângulo, e se for, se é um triangulo escaleno, um triangulo equilátero 
ou um triangulo isósceles.*/
#include<stdio.h>
main(){
    // base a isosceles "a menor b e a menor que c"
    // b escaleno "a maior que b e b maior que  c"
    // c equilatero "a igual a b que e igual a c"

    float a, b, c;
    //solicitar os valores
    printf("\ndigite o valor de a");
    scanf("%f",&a);

    printf("\ndigite o valor de b");
    scanf("%f", &b);

    printf("\ndigite o valor de c");
    scanf("%f", &c);
//if= se
//else=seão
//else if= senão se

if(a == b && a ==c){
    printf("triangulo equilatero");
}else if(a < b && b < c){
    printf("triangulo escaleno");
}else if(a > b && a > c){
    printf("triangulo isosceles");
}else{
    printf("não forma um triangulo");
}


}

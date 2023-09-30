/*4. Dados três valores A, B e C, construa um algoritmo para verificar se estes 
valores podem ser valores dos lados de um triângulo, e se for classificá-los 
(imprimi-los) segundo os ângulos. (Triângulo Retângulo = 90º, Triângulo Obtusângulo > 90º, Triângulo Acutângulo < 90º)*/
 #include<stdio.h>

main(){
double a, b, c;
printf("\ndigite o valor do lado a ");
scanf("%lf",&a);
 
printf("\ndigite o valor do lado b ");
scanf("%lf",&b);

printf("\ndigite o valor do lado c ");
scanf("%lf",&c);

if(a + b <= c || a + c <= b || b + c <= a){
    printf("\nos valores nao podem forma um triangulo");
}else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a){
    printf("triangulo retangulo de 90 graus");
}else if (a*a+b*b<c*c||a*a+c*c<b*b||b*b+c*c<a*a){
    printf("triangulo obtusangulo mais que 90 graus");
}else{
    printf("e um triangulo acutangulo menor que 90 graus");
}


 }
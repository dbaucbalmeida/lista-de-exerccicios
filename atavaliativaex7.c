/*7. Faça um algoritmo que leia as três notas de 30 alunos de uma turma.
 Para cada aluno, calcule a média ponderada, como segue: MP = ( n1*2 + n2*4 + n3*3 ) / 10
Além disso, calcule a média geral da turma. Mostre a média de cada aluno 
e uma mensagem "Aprovado", caso a média seja maior ou igual a sete, e
 uma mensagem "Reprovado", caso contrário. Ao final, mostre a média geral.*/

 /*#include<stdio.h>
 main(){
int numeroaluno = 30 ;
double notas;
//double mediaponderada= ( n1*2+n2*4+n3*3) / 10;
double mediageral  =0.0;

for(int i = 0; i < notas; i++){
    double n1, n2, n3;
    printf("\ndigite as notas do aluno %d(n1 n2 n3):",i+1);
    scanf("%lf %ld %lf",&n1, &n2, &n3);

    double mediaponderada= ( n1*2+n2*4+n3*3) / 10;
    notas=mediaponderada;
    mediageral+=mediaponderada;

    printf("\nmedia ponderada do aluno %d:%.2lf",i+1,mediaponderada);
if(mediaponderada>=7.0){
    printf("\naprovado");
}else{
    printf("\nreprovado");
}
}
mediageral/=numeroaluno;
printf("\nmedia geral da turma: %.2lf",mediageral);
 }*/

#include<stdio.h>
  main() {
    int num_alunos = 30;
    double notas[num_alunos];
    double media_geral = 0.0;

    for (int i = 0; i < num_alunos; i++) {
        double n1, n2, n3;
        printf("Digite as notas do aluno %d (n1 n2 n3): ", i + 1);
        scanf("%lf %lf %lf", &n1, &n2, &n3);

        double media_ponderada = (n1 * 2 + n2 * 4 + n3 * 3) / 10;
        notas[i] = media_ponderada;
        media_geral += media_ponderada;

        printf("Média ponderada do aluno %d: %.2lf - %s\n", i + 1, media_ponderada, media_ponderada >= 7.0 ? "Aprovado" : "Reprovado");
    }

    media_geral /= num_alunos;
    printf("Média geral da turma: %.2lf\n", media_geral);

   
}
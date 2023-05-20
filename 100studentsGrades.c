#include <stdio.h>
#define n_alunos 100

int main() {

  float Grade[n_alunos];
  float tsum = 0.0, average=7;
  int i;

  for (i=0; i<n_alunos; i++) {
    printf("Enter the grade of the student %i: ", i+1);
    scanf("%f", &Grade[i]);

    tsum += Grade[i];
  }

  for(i=0; i<n_alunos; i++) {
    printf("\nNota do aluno %i: %.2f", i+1, Grade[i]);
    if (Grade[i]>=average) {
      printf(" - Average reached");
    } else {
      printf(" - Average not achieved");
    }
  }

  return 0;
}

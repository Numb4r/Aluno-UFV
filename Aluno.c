#include <stdio.h>
#include <string.h>
#include "Aluno.h"
#include <time.h>
void Matricular(AlunoUFV* aluno,char nome[],char curso[])
{
  char matricula[9];
  char Nmatricula[5];
  //srand(time(NULL));
  //int aux = rand() % 10000;
  //int aux = 100000;
  strcpy(aluno->Nome,nome);
  strcpy(aluno->Curso,curso);
  /* strcat(matricula,"EF");
  if(aux > 9999){
    strcat(matricula,"0");
  }
  if(aux > 999 ){
    strcat(matricula,"00");
  }
  if(aux > 99){
    strcat(matricula,"000");
  }
  sprintf( Nmatricula, "%d", aux );
  strcat(matricula,Nmatricula);
  printf("%s",matricula);
  strcpy(aluno->Matricula,matricula);
*/

}
void MudarCoeficiente(AlunoUFV* aluno,float valor) {
  aluno->Coeficiente = valor;

}

void Infos(AlunoUFV aluno){
    printf("Nome: %s\n", aluno.Nome);
    printf("Matrícula: %s\n", aluno.Matricula);
    printf("Curso: %s\n", aluno.Curso);
    printf("Coeficiente: %.2f\n", aluno.Coeficiente);
}

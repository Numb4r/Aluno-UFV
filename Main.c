#include <stdio.h>
#include <stdlib.h>
#include "Aluno.h"

int main(int argc, char const *argv[]) {
  AlunoUFV aluno;
  Matricular(&aluno,"Numb4r","Ciencias da Computacao");
  MudarCoeficiente(&aluno,100);
  Infos(aluno);
  return 0;
}

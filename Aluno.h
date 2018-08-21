typedef struct{
  char Nome[30];
  char Matricula[7];
  char Curso[30];
  float Coeficiente;
}AlunoUFV;

void Matricular (AlunoUFV* aluno,char Nome[],char Curso[]);
void MudarCoeficiente(AlunoUFV* aluno,float valor);
void Infos(AlunoUFV aluno);

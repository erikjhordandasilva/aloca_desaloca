#include <stdio.h>
#include <stdlib.h>

int vector_memory [1024];
int aloc = 1;

void initialzero(){
  for (int i = 0; i < 1024; i++){
    vector_memory[i] = 0;
  }}

int disponibleAloc(int nbytes){
  int disponible = 1;
  for (int i = 0; i < 1024; i++){
    disponible = 1;
    for (int j = i; j < nbytes + i; j++){
      if(i + nbytes > 1024){
        printf("Error:");
      }
      if (vector_memory[j] == 1){
        disponievl = 0;
      }
      if(disponible == 1 && j == nbytes +i -1){
        return i;
      }}}}

void performsAlocacao(int posicao, int nbytes){
  for (int i = posicao; i < posicao+nbytes; i++){
    vector_memory[i] = aloc;
  }
  aloc ++;
}

void *aloca(int nbytes) {
  int p = disponibleAloc(nbytes);
  performsAlocacao(p, nbytes);

  p =  &vector_memory[p];
  return p;  
}

void *desaloca(int Hash){
  for (int i = 0; i < 1024; i++){
    if(vector_memory[i]==Hash){
      vector_memory[i] = 0;
    }}}

void desalocar(void *p) {
  int *ponteiro;
  ponteiro = p;
  printf(*ponteiro);
  desalocaMemoryPeloHash(*ponteiro);
  printf(*ponteiro);

}


//code from Erik Jhordan


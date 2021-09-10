# Aloca e Desaloca

Considere um vetor V alocado estaticamente com n bytes de memória.

Você criará 2 funções que devem se comportar de forma similar às funções malloc e free do C, mas usando o vetor V como fonte da memória gerenciada.

Idealmente, qualquer algoritmo que utilize as funções malloc e free poderiam ser modificados para uso de suas funções, considerando-se, claro, que seu vetor tenha capacidade suficiente e que a eficiência das operações não seja problema.

Seu código deve ser escrito em C, compatível com a versão 2011.

IMPORTANTE: Não use nenhuma biblioteca que não seja disponibilizada pela instalação padrão do GNU C.

```

/*
 *   main.c
 */

void *aloca(int nbytes);
void desaloca(void *p);

int main(void) {

  // Aqui você coloca o código que usa 

}

/*
 * biblioteca.c
 */

/* void *aloca(int nbytes)
 *
 * A função aloca recebe um...
 * (aqui você descreve como seu algoritmo funciona)
 */ 
void *aloca(int nbytes) {
  // Coloque seu código aqui
  
}

/* void *desaloca(int nbytes)
 *
 * A função desaloca recebe um...
 * (aqui você descreve como seu algoritmo funciona)
 */ 
void desaloca(void *p) {
  // Coloque seu código aqui
  
}

```

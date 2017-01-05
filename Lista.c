/*
 * Lista.c
 *
 *  Created on: 26 de dez de 2016
 *      Author: MACHADO-AXE
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Lista.h"

//Fun��es para as Palavras
lPalavras* criaListPalavras()
{
	return NULL;
}
lPalavras* inserePalavras(lPalavras* pp, char* palavra)
{
	lPalavras* novoP;
	novoP = (lPalavras*)malloc(sizeof(lPalavras*));
	strcpy(palavra, novoP->palavras);
	//novoP->proxPalavra = pp;
	pp=novoP;
	return novoP;
}
void imprime(lPalavras* pp)
{
	lPalavras* pri;
	//for(pri = pp; pri != NULL; pri = pri->proxPalavra){
		//printf("%s\n", pri->palavras);
	//}

}
lPalavras* buscaPalavras(lPalavras* pp, char* palavra)
{
	lPalavras* aux;
	//for(aux = pp; aux != NULL; aux = aux->proxPalavra){
		if(strcmp(palavra, pp->palavras)){
			return aux;
		}
	//}
	return NULL;
}

//Fun��es para Quantidades
lQt* ciraQt(lQt* pq, lPalavras* pp, char* palavra)
{
	//pq->proxPalavra = buscaPalavras(pp, palavra);
	return NULL;
}
lQt* inseri_Quant_Lin(lQt* pq, lPalavras* pp, int linha)
{
	lQt* novoQ;
	novoQ = (lQt*)malloc(sizeof(lQt*));
	novoQ->numLinhas = linha;
	novoQ->proxQuanti = pq;
	pq=novoQ;
	//pq->proxPalavra = pp;
	return novoQ;
}

//Fun��es de funcionamento
void soma_quant(lQt* pq, lPalavras* pp)
{
	//Corrigir isso aqui
	//if(pq->proxPalavra->palavras == pp->palavras){
		pq->quantVezes++;
	//}
}
int lerArquivo (char* palavras[])
{
	int i = 0, j;
	 int numPalavras = 0;
	 //char* palavras[21];
	 char line[21];

	 FILE *arquivo;
	 arquivo = fopen("texto.txt", "r");
	 if (arquivo == NULL){
		 printf("!!!   ERRO   !!!");
		 return EXIT_FAILURE;
	 }
	  while(fgets(line, sizeof line, arquivo) != '\0')
	  {
		  //Adiciona cada palavra no vetor
		  palavras[i] = strdup(line);

		  i++;
		  //Conta a quantidade de palavras
		  numPalavras++;
	 }

	  for (j = 0; j < numPalavras; j++)
		  printf("\n%s", palavras[j]); //Exibi as palavras que estao no vetor.

	 fclose(arquivo);
	 return EXIT_SUCCESS;
}



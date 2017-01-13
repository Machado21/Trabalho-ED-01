/*
 * Lista.h
 *
 *  Created on: 22 de dez de 2016
 *      Author: MACHADO-AXE
 */

#ifndef LISTA_H_
#define LISTA_H_

#endif /* LISTA_H_ */

typedef struct lPalavras {
	char palavras[40];
	struct lQt* quantidades;
} lPalavras;

typedef struct lQt {
	int numLinhas;
	int quantVezes;
	struct lQt* proxQuanti;
} lQt;


//Fun��es para palavras
lPalavras* criaListPalavras();
lPalavras* inserePalavras( lPalavras* pp, char* palavra);
void imprime(lPalavras* pp);
lPalavras* buscaPalavras(lPalavras* pp, char* palavra);

//Fun��es para quantidades
lQt* crisQt();
lQt* inseri_Quant_Lin(lQt* pq, lPalavras* pp, int linha);

//Fun��es de funcionamento
void soma_quant(lQt* pq, lPalavras* pp);
void lerArquivo (char* c);

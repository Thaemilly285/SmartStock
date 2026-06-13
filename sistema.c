#include <stdio.h>
/**
 * @file sistema.c
 * @brief Implementacao das rotinas de interface, relatorios e calculos do sistema financeiro.
 * @author Thaemilly Vitoria, Mariana Cecilia, Maria Fernanda, Otavio Cavalheiro
 * @date 2026
 * @version 1.0
 */
 
#include "sistema.h"
#include <math.h>


 
//Variáveis Globais

int qtde_g[MAX],cate_g[MAX];
char pdt[MAX][30];
float preco[MAX];
	
int qtde_v[MAX], cate_v[MAX];
char pdt_v[MAX][30];
float valor[MAX];
	
int qtde_vendas;
int qtde_gastos;
	
float lucro = 0; 
float vendas = 0;
float gastos = 0;


//Cálculos

float calcularLucro(float vendas, float gastos){
	return vendas - gastos;
}

float calcularGastos(float preco, int qtde_g){
	if(preco < 0 || qtde_g <= 0){
		return NAN;
	}
	return preco * qtde_g;
}

float calcularVendas(float valor, int qtde_v){
	if(valor < 0 || qtde_v <= 0){
		return NAN;
	}
	return valor * qtde_v;
}


//Registros

void regGastos(){
	int i;
	gastos = 0;
	printf("\n--- Registro de Gastos ---\n");
	printf("Quantidade de Gastos: "); scanf("%d", &qtde_gastos);
	if(qtde_gastos <= 0){
		printf("Quantidade Invalida\n");
		return;
	}
	for(i = 0; i < qtde_gastos; i++){
		printf("\n-- Gasto %d --\n", i + 1);
		printf("Produto: "); scanf("%29s", pdt[i]);
		do{
			printf("1 = Roupa\n");
			printf("2 = Cosmetico\n");
			printf("Categoria: ");
			scanf("%d", &cate_g[i]);
			if(cate_g[i] != 1 && cate_g[i] != 2){
				printf("Categoria Invalida! Digite 1 ou 2.\n");
			}
		}while(cate_g[i] != 1 && cate_g[i] != 2);
		
		do{
			printf("Preco: ");
		    scanf("%f", &preco[i]);
		    if(preco[i] < 0){
		    	printf("Preco nao pode ser negativo!\n");
			}
		}while(preco[i] < 0);
		
		do{
			printf("Quantidade: "); scanf("%d", &qtde_g[i]);
		    if(qtde_g[i] <= 0 ){
		       printf("Quantidade deve ser maior que zero.\n");
		    }
		}while(qtde_g[i] <= 0);
		printf("Total do Gasto: %.2f\n", calcularGastos(preco[i], qtde_g[i]));				
		gastos += calcularGastos(preco[i], qtde_g[i]);
	}
	printf("\nGasto(s) Registrada(s) com Sucesso!!\n");
}

void regVendas(){
	int i;
	vendas = 0;
	printf("\n--- Registro de Vendas ---\n");
	printf("Quantidade de Vendas: "); scanf("%d", &qtde_vendas);
	if(qtde_vendas <= 0){
	    printf("Quantidade Inválida\n");
		return;
	}
	for(i = 0; i < qtde_vendas; i++){
		printf("\n-- Venda %d --\n", i + 1);
		printf("Produto: "); scanf("%29s", pdt_v[i]);
		do{
			printf("1 = Roupa\n");
			printf("2 = Cosmetico\n");
			printf("Categoria: ");
			scanf("%d", &cate_v[i]);
			if(cate_v[i] != 1 && cate_v[i] != 2){
				printf("Categoria Invalida! Digite 1 ou 2.\n");
			}
		}while(cate_v[i] != 1 && cate_v[i] != 2);
		
		do{
			printf("Preco: ");
		    scanf("%f", &valor[i]);
		    if(valor[i] < 0){
		    	printf("Preco nao pode ser negativo!\n");
			}
		}while(valor[i] < 0);
		
		do{
			printf("Quantidade: "); scanf("%d", &qtde_v[i]);
		    if(qtde_v[i] <= 0 ){
		       printf("Quantidade deve ser maior que zero.\n");
		    }
		}while(qtde_v[i] <= 0);
		printf("Total da Venda: %.2f\n", calcularVendas(valor[i], qtde_v[i]));
		vendas += calcularVendas(valor[i], qtde_v[i]);
	}
	printf("\nVenda(s) Registrada(s) com Sucesso!!\n");						    
}


//Relatórios 

void relaLucro(){
	lucro = calcularLucro(vendas, gastos);
	if(lucro == 0)
	   printf("Nao houve Lucro e nem Prejuizo\n");
	else if(lucro < 0)
	        printf("Houve Prejuizo de %.2f\n", -lucro);
	else
	printf("\nLucros: %.2f\n", lucro);
}

void relaGastos(){
	int i;
	printf("\n--- Relatorio de Gasto ---\n");
	for(i = 0; i < qtde_gastos; i++){
		printf("\n-- Gasto %d --\n", i + 1);
		printf("Produto: %s\n", pdt[i]);
		printf("Categoria: %d\n", cate_g[i]);
		printf("Preco: R$:%.2f\n", preco[i]);
		printf("Quantidade: %d\n", qtde_g[i]);
	}
	printf("TOTAL GASTOS: R$:%.2f\n", gastos);
}

void relaVendas(){
	int i;
	printf("\n--- Relatorio de Vendas ---\n");
	for(i = 0; i < qtde_vendas; i++){
		printf("\n-- Vendas %d --\n", i +1);
		printf("Produto: %s", pdt_v[i]);
		printf("Categoria: %d\n", cate_v[i]);
		printf("Preco: R$:%.2f\n", valor[i]);
		printf("Quantidade: %d\n", qtde_v[i]);
	}						
	printf("TOTAL VENDAS: R$:%.2f\n", vendas);
}

void relaGeral(){
    lucro = calcularLucro(vendas, gastos);
	printf("\n--- Relatorio Geral ---\n");
	printf("\nGERAL || GASTOS || VENDAS || LUCRO\n");
	printf("\nTOTAL || R$:%.2f || R$:%.2f || R$:%.2f\n", gastos, vendas, lucro);
}


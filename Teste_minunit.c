#include <math.h>

/**
* @file Teste.c
* @brief Biblioteca de comandos de um sistema de registro financeiro
*
* @details Este arquivo contém funções de um sistema que auxilia no gerenciamento financeiro 
que realiza o registro de gastos e vendas, calcula lucros e exibe relatórios detalhados.
* @author Thaemilly
* @date 2026
* @version 1.0
*
*/

/**
* @brief Realiza o registro de vendas com base nos dados do produto
* 
* @param pdt_v Nome do produto a ser registrado.
* @param cate_v Categoria do produto (1 para Roupas, 2 para Cosmético).
* @param valor Preço unitário do produto (deve ser maior ou igual a zero)
* @param qtde_v Quantidade vendida (deve ser um valor inteiro maior que zero)
* @return int Retorna 1 se o registro for válido; retorna 0 se um ou mais parâmetros forem inválidos
*
* @note
* - O parâmetro @p cate_v aceita apenas os valores 1 (Roupa) ou 2 (Cosmético).
* - O parâmetro @p valor aceita apenas números decimas e inteiros positivos ou zero. Valores negativos tornam a venda inválida.
* - O parâmetro @p qtde_v aceita apenas números inteiros maiores que zero. Valores menores ou igual a zero tornam a venda inválida.
*/
int regVendas(char *pdt_v, int cate_v, float valor, int qtde_v){
	if(cate_v != 1 && cate_v != 2){
		return 0;
	}
	if(valor < 0 || qtde_v <= 0){
		return 0;
	}
	
	return 1;
}


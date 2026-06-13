#include <math.h>

/**
* @file Teste_minunit.c
* @brief Biblioteca de comandos de um sistema de registro financeiro
*
<<<<<<< HEAD
* @details Este arquivo contem funcoes de um sistema que auxilia no gerenciamento financeiro 
que realiza o registro de gastos e vendas, calcula lucros e exibe relatorios detalhados.
=======
* @details Este arquivo contem as funcoes de um sistema 
* que auxilia no gerenciamento financeiro, realizando o registro de gastos 
* e vendas, calculo de lucros e validacoes.
>>>>>>> documenta√ß√£o
* @author Thaemilly Vitoria, Mariana Cecilia, Maria Fernanda e Otavio Cavalheiro
* @date 2026
* @version 1.0
*
*/


//Registro de Vendas//

/**
* @brief Realiza o registro de vendas com base nos dados do produto
* @param pdt_v Nome do produto a ser registrado.
* @param cate_v Categoria do produto (1 para Roupas, 2 para Cosmetico).
<<<<<<< HEAD
* @param valor PreÁo unitario do produto (deve ser maior ou igual a zero)
=======
* @param valor Preco unitario do produto (deve ser maior ou igual a zero)
>>>>>>> documenta√ß√£o
* @param qtde_v Quantidade vendida (deve ser um valor inteiro maior que zero)
* @return int Retorna 1 se o registro for valido, retorna 0 se um ou mais parametros forem invalidos
*
* @note
<<<<<<< HEAD
* - O par‚metro @p cate_v aceita apenas os valores 1 (Roupa) ou 2 (Cosmetico).
=======
* - O parametro @p cate_v aceita apenas os valores 1 (Roupa) ou 2 (Cosmetico).
>>>>>>> documenta√ß√£o
* - O parametro @p valor aceita apenas numeros decimais e inteiros positivos ou zero. Valores negativos tornam a venda invalida.
* - O parametro @p qtde_v aceita apenas numeros inteiros maiores que zero. Valores menores ou igual a zero tornam a venda invalida.
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

//Registro de Gastos//

/**
* @brief Realiza o registro de gastos com base nos dados de compras.
* @param pdt Nome do produto ou item comprado.
* @param cate_g Categoria do gasto (1 para Roupas, 2 para Cosmeticos).
<<<<<<< HEAD
* @param preco PreÁo unitario do produto (deve ser maior ou igual a zero).
* @param qtde_g Quantidade comprada (deve ser um valor inteiro maior que zero).
* @return int Retorna 1 se o registro for valido, retorna 0 se um ou mais par‚metros forem invalidos.
*
* @note
* - O par‚metro @p cate_g aceita apenas os valores 1 (Roupa) ou 2 (Cosmetico).
* - O par‚metro @p preco aceita numeros decimais positivos ou zero. Valores negativos tornam o gasto invalido.
* - O par‚metro @p qtde_g aceita apenas inteiros maiores que zero. Valores menores ou iguais a zero tornam o gasto invalido.
=======
* @param preco Preco unitario do produto (deve ser maior ou igual a zero).
* @param qtde_g Quantidade comprada (deve ser um valor inteiro maior que zero).
* @return int Retorna 1 se o registro for valido, retorna 0 se um ou mais parametros forem invalidos.
*
* @note
* - O parametro @p cate_g aceita apenas os valores 1 (Roupa) ou 2 (Cosmetico).
* - O parametro @p preco aceita numeros decimais e inteiros positivos ou zero. Valores negativos tornam o gasto invalido.
* - O parametro @p qtde_g aceita apenas inteiros maiores que zero. Valores menores ou iguais a zero tornam o gasto invalido.
>>>>>>> documenta√ß√£o
*/
int regGastos(char *pdt, int cate_g, float preco, int qtde_g){
	if(cate_g != 1 && cate_g != 2){
		return 0;
	}
	if(preco < 0 || qtde_g <= 0){
		return 0;
	}
	
	return 1;
}

//Calculo de Gastos//

/**
<<<<<<< HEAD
* @brief Realiza o calculo de gastos com base no preÁo e na quantidade da compras.
* @param preco Preco unitario do produto (deve ser maior ou igual a zero).
* @param qtde_g Quantidade comprada (deve ser um valor inteiro maior que zero).
* @return float retorna o resultado da multiplicaÁ„o do preco e da quantidade da compra.
=======
* @brief Realiza o calculo de gastos com base no preco e na quantidade da compras.
* @param preco Preco unitario do produto (deve ser maior ou igual a zero).
* @param qtde_g Quantidade comprada (deve ser um valor inteiro maior que zero).
* @return float retorna o resultado da multiplicacao do preco e da quantidade da compra.        
*
* @note
* - O parametro @p preco aceita numeros decimais e inteiros positivos ou zero. Valores negativos tornam o gasto invalido.
* - O parametro @p qtde_g aceita apenas numeros inteiros maiores que zero. Valores menores ou iguais a zero tornam o gasto invalido.
>>>>>>> documenta√ß√£o
*/
float calcularGastos(float preco, int qtde_g){
	if(preco < 0 || qtde_g <= 0){
		return NAN;
	}
	return preco * qtde_g;
}

//Calculo de Vendas//

/**
<<<<<<< HEAD
* @brief Realiza o calculo de vendas com base no preÁo e na quantidade das vendas.
* @param valor PreÁo unitario do produto (deve ser maior ou igual a zero).
* @param qtde_v Quantidade vendida (deve ser um valor inteiro maior que zero).
* @return float retorna o resultado da multiplicaÁ„o do preco e da quantidade da venda.
=======
* @brief Realiza o calculo de vendas com base no preco e na quantidade das vendas.
* @param valor Preco unitario do produto (deve ser maior ou igual a zero).
* @param qtde_v Quantidade vendida (deve ser um valor inteiro maior que zero).
* @return float retorna o resultado da multiplicacao do preco e da quantidade da venda.
*
* @note
* - O parametro @p valor aceita numeros decimais e inteiros positivos ou zero. Valores negativos tornam a venda invalida.
* - O parametro @p qtde_v aceita apenas numeros inteiros maiores que zero. Valores menores ou iguais a zero tornam a venda invalida.
>>>>>>> documenta√ß√£o
*/
float calcularVendas(float valor, int qtde_v){
	if(valor < 0 || qtde_v <= 0){
		return NAN;
	}
	return valor * qtde_v;
}

//Calculo de Lucro//

/**
* @brief Realiza o calculo de lucro com base nas vendas e nos gastos.
* @param vendas Valor total dos produtos vendidos.
* @param gastos Valor total dos produtos comprados pela loja.
* @return float retorna o resultado da subtracao das vendas pelos gastos.
<<<<<<< HEAD
=======
*
* @note
* - O parametro @p vendas aceita numeros decimais e inteiros positivos ou zero. Valores negativos tornam a venda invalida.
* - O parametro @p gastos aceita numeros decimais e inteiros positivos ou zero. Valores negativos tornam o gasto invalido.
* - O retorno pode ser um numero negativo, o que significa que houve prejuizo.
>>>>>>> documenta√ß√£o
*/
float calcularLucro(float vendas, float gastos){
	return vendas - gastos;
}

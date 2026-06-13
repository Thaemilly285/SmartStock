#include <stdio.h>
#include "minunit.h"
#include <math.h>

int regVendas(char *pdt_v, int cate_v, float valor, int qtde_v);
int regGastos(char *pdt_g, int cate_g, float preco, int qtde_g);
float calcularGastos(float preco, int qtde_c);
float calcularLucro(float vendas, float compras);


//Registro de Vendas//

MU_TEST(regvenda_valida){
	mu_assert(regVendas("Camiseta", 1, 50, 2)==1, "Venda deveria ser valida");
}

MU_TEST(regvenda_invalida){
	mu_assert(regVendas("Saia", 1, -10, 1)==0, "Venda deveria ser invalida");
}

//Registro de Gastos//

MU_TEST(reggastos_valido){
	mu_assert(regGastos("Regata", 1, 30, 3)==1, "Gasto deveria ser valido");
}

MU_TEST(reggastos_invalido){
	mu_assert(regGastos("Esmalte", 3, 15, 2)==0, "Gasto deveria ser invalido");
}

//Calcular Gastos//
MU_TEST(gasto_valido){
	mu_assert(calcularGastos(150, 5)== 750, "Falha nos gastos");
}

MU_TEST(gasto_qtdeZero){
	mu_assert(isnan(calcularGastos(70, 0)), "Gastos com quantidade zero deveria retornar NAN");
}

MU_TEST(gasto_precoZero){
	mu_assert(calcularGastos(0, 10)==0, "O preco deveria ser zero");
}

MU_TEST(gasto_invalida){
	mu_assert(isnan(calcularGastos(-15, 2)), "Compras negativas devera retornar NAN");
}

//Calcular Venda//

MU_TEST(venda_valida){
	mu_assert(calcularVendas(30, 2)== 60, "Falha nas vendas");
}

MU_TEST(venda_qtdeZero){
	mu_assert(isnan(calcularVendas(90, 0)), "Vendas com quantidade zero deveria retornar NAN");
}

MU_TEST(venda_precoZero){
	mu_assert(calcularVendas(0, 3)==0, "O preco deveria ser zero");
}

MU_TEST(venda_invalida){
	mu_assert(isnan(calcularVendas(-25, 3)), "Vendas negativas devera retornar NAN");
}

//Calcular Lucro//

MU_TEST(lucro_valido){
	mu_assert(calcularLucro(100, 60)==40, "Falha no lucro");
}


MU_TEST_SUITE(teste_suite){
	MU_RUN_TEST(regvenda_valida);
	MU_RUN_TEST(regvenda_invalida);
	MU_RUN_TEST(reggastos_valido);
	MU_RUN_TEST(reggastos_invalido);
	MU_RUN_TEST(gasto_valido);
	MU_RUN_TEST(gasto_qtdeZero);
	MU_RUN_TEST(gasto_precoZero);
	MU_RUN_TEST(gasto_invalida);
	MU_RUN_TEST(venda_valida);
	MU_RUN_TEST(venda_qtdeZero);
	MU_RUN_TEST(venda_precoZero);
	MU_RUN_TEST(venda_invalida);
	MU_RUN_TEST(lucro_valido);
}

int main(){
	MU_RUN_SUITE(teste_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}

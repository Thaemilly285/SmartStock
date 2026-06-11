#include <stdio.h>
#include "minunit.h"
#include <math.h>

int regVendas(char *pdt_v, int cate_v, float valor, int qtde_v);
int regGastos(char *pdt_g, int cate_g, float preco, int qtde_g);

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

MU_TEST_SUITE(teste_suite){
	MU_RUN_TEST(regvenda_valida);
	MU_RUN_TEST(regvenda_invalida);
	MU_RUN_TEST(reggastos_valido);
}

int main(){
	MU_RUN_SUITE(teste_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}

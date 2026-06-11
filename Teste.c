#include <stdio.h>
#include "minunit.h"
#include <math.h>

int regVendas(char *pdt_v, int cate_v, float valor, int qtde_v);

//Registro de Vendas//

MU_TEST(regvenda_valida){
	mu_assert(regVendas("Camiseta", 1, 50, 2)==1, "Venda deveria ser valida");
}

MU_TEST(regvenda_invalida){
	mu_assert(regVendas("Saia", 1, -10, 1)==0, "Venda deveria ser invalida");
}

MU_TEST_SUITE(teste_suite){
	MU_RUN_TEST(regvenda_valida);
	MU_RUN_TEST(regvenda_invalida);
}

int main(){
	MU_RUN_SUITE(teste_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}

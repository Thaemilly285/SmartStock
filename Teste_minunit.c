#include <math.h>


int regVendas(char *pdt_v, int cate_v, float valor, int qtde_v){
	if(cate_v != 1 && cate_v != 2){
		return 0;
	}
	if(valor < 0 || qtde_v <= 0){
		return 0;
	}
	
	return 1;
}


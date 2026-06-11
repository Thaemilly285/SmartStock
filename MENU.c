#include <stdio.h>
#include "sistema.h"

int main(){
	
	int op;
	
	do{
		printf("\n--- MENU ---\n");
		printf("1 - Registrar\n");
		printf("2 - Relatorios\n");
		printf("3 - Sair do Programa\n");
		printf("Opcao: "); scanf("%d", &op);
		
		switch(op){
			
			case 1:{
				int c;
				do{
					printf("\n-- Registrar --\n");
			        printf("1 - Gastos\n");
			        printf("2 - Vendas\n");
			        printf("3- Sair do Programa\n");
			        printf("Opcao: "); scanf("%d", &c);
			        
			        switch(c){
			        	case 1:{
			        		regGastos();
							break;
						}
						case 2:{
							regVendas();
							break;
						}
						case 3:{
							printf("Saindo...\n");
							break;
						}
						default:{
							printf("Opcao Invalida...\n");
							break;
						}
					}
				}while(c != 3);
				break;
			}
			case 2:{
				int cate;
				do{
					printf("\n-- Gerar Relatórios --\n");
					printf("1 - Gastos\n");
			        printf("2 - Vendas\n");
			        printf("3 - Lucros\n");
			        printf("4 - Geral\n");
			        printf("5 - Sair\n");
			        printf("Relatorio: "); scanf("%d", &cate);
			        
			        switch(cate){
			        	case 1:{
			        		relaGastos();
							break;
						}
						case 2:{
							relaVendas();
							break;
						}
						case 3:{
							relaLucro();
							break;
						}
						case 4:{
							relaGeral();
							break;
						}
						case 5:{
							printf("Saindo...\n");
							break;
						}
						default:{
							printf("Relatorio Invalido...");
							break;
						}
					}
				}while(cate != 5);
				break;
			}
			case 3:{
				printf("Encerrando programa...\n");
				break;
			}
			default:{
				printf("Opcao Invalida...\n");
				break;
			}
		}
	}while(op != 3);
	
	return 0;
}

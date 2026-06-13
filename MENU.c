/**
 * @file MENU.c
 * @brief Construcao do menu interativo e controle do fluxo do usuario.
 * @author Thaemilly Vitoria, Mariana Cecilia, Maria Fernanda, Otavio Cavalheiro
 * @date 2026
 * @version 1.0
 */

#include <stdio.h>
#include "sistema.h"

void exibirMenu() {
    int opcao;

    do {
    	system("cls");
        printf("\n======= SISTEMA FINANCEIRO =======");
        printf("\n1. Registrar Vendas");
        printf("\n2. Registrar Gastos");
        printf("\n3. Relatorio de Vendas");
        printf("\n4. Relatorio de Gastos");
        printf("\n5. Relatorio de Lucro");
        printf("\n6. Relatorio Geral");
        printf("\n0. Sair");
        printf("\n==================================");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                regVendas();
                system("pause");
                break;
            case 2:
                regGastos();
                system("pause");
                break;
            case 3:
                relaVendas();
                system("pause");
                break;
            case 4:
                relaGastos();
                system("pause");
                break;
            case 5:
                relaLucro();
                system("pause");
                break;
            case 6:
                relaGeral();
                system("pause");
                break;
            case 0:
                printf("\nSaindo do sistema... Ate logo!\n");
                system("pause");
                break;
            default:
                printf("\nOpcao invalida! Tente novamente.\n");
                system("pause");
        }
    } while (opcao != 0);
}

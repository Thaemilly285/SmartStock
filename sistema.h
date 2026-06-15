/**
 * @file sistema.h
 * @brief Prototipos das funcoes e relatorios do sistema financeiro.
 * @author Thaemilly Vitoria, Mariana Cecilia, Maria Fernanda, Otavio Cavalheiro
 * @date 2026
 * @version 1.0
 */

#ifndef SISTEMA_H
#define SISTEMA_H
#define MAX 100

 
//Menu

void exibirMenu();

//Registros

void regCompras();
void regVendas();

//Relatórios

void relaLucro();
void relaGastos();
void relaVendas();
void relaGeral();

//Cáculos

float calcularLucro(float vendas, float gastos);
float calcularGastos(float preco, int qtde_g);
float calcularVendas(float preco, int qtde_v);

#endif

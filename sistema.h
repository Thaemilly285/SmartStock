#ifndef SISTEMA_H
#define SISTEMA_H
#define MAX 100

void regCompras();
void regVendas();
void relaLucro();
void relaGastos();
void relaVendas();
void relaGeral();
float calcularLucro(float vendas, float gastos);
float calcularGastos(float preco, int qtde_g);
float calcularVendas(float preco, int qtde_v);

#endif

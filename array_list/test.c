#include "array_list_int.h"
#include <stdio.h>

int main() {
	array_list_int a1 = ali_create();
	int i, t;
	for (i = 0; i < 8; ++i) //i < 8
		ali_push_back(a1, i * 3 + 1);
		t = ali_size(a1);
		printf("Tamanho de a1: %d\n", t);
		printf("a1 = { ");

	for (i = 0; i < t; ++i)
		printf("%d ", ali_get(a1, i));
		printf("}\n");
		/*teste extra*/
		printf("\nTeste Extra\n");
		printf("Encontrar o valor 10: %d\n",ali_find(a1, 10));
		printf("Inserir: %d\n",ali_insert_at(a1, 4, 7));
		printf("Capacidade: %d\n", ali_capacity(a1));
		printf("Persentual ocupado: %f\n", ali_percent_occuped(a1));
		printf("Fim do Teste Extra\n\n");		
		/*teste extra*/
	for (i = 0; i < 8; ++i)
		ali_pop_back(a1);
		t = ali_size(a1);
		printf("Tamanho de a1: %d\n", t);
		printf("a1 = { ");

	for (i = 0; i < t; ++i)
		printf("%d ", ali_get(a1, i));
		printf("}\n");
		ali_destroy(a1);
	
	return 0;
}
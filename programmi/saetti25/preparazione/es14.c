#include <stdio.h>
#include <stdlib.h>

#define INT 0
#define FLOAT 1

typedef struct {
    int tipo;
    union {
        int i;
        double d;
    } u;
} Numero;

void stampa_numero(Numero n) {
    if (n.tipo == INT) printf("%d", n.u.i);
    else printf("%.2f", n.u.d);
}

int main() {
    Numero n;
    n.tipo = INT;
    n.u.i = 12;
    stampa_numero(n);
    return 0;
}

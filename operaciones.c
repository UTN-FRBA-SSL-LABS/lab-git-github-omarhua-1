#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */
//el const lo que hace es que no se puede modificar el valor de a y b dentro de la funcion, es decir, son constantes
int sumar(const int a, const int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
// Esta funcion multiplica dos enteros
//Esta funcion toma dos enteros como parametros y devuelve su producto
int multiplicar(int a, int b) {
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0;
}

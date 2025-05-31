#include <stdio.h>

void alpha() {
    int a = 1;
    printf("alpha: &a = %p\n", (void*)&a);
}

void echo() {
    int e = 5;
    printf("echo: &e = %p\n", (void*)&e);
    alpha(); 
}

void beta() {
    int b = 2;
    printf("beta: &b = %p\n", (void*)&b);
    echo(); 
}

void gamma() {
    int g = 3;
    printf("gamma: &g = %p\n", (void*)&g);
    beta(); 
}

void delta() {
    int d = 4;
    printf("delta: &d = %p\n", (void*)&d);
    gamma();
}

int main() {
    int m = 0;
    printf("main: &m = %p\n", (void*)&m);
    delta();
    return 0;
}

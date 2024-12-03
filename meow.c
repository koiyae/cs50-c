#include <stdio.h>
#include "cs50.h"

void meow(int);

int main(void) {
    
    int x = get_int("Insira aqui um numero: ");

    meow(x);
}

void meow(int n) {
    
    for(int i = 0; i < n; i++) {
        printf("meow\n");
    }
}

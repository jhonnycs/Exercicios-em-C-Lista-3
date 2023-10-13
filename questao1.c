#include <stdio.h>


// Mostrar todos os números pares entre 1 e 50


int main() {
    
    for (int i = 1; i < 51; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
    

    return 0;
}
#include <stdio.h>

void reverse(long param_1, long param_2, unsigned long param_3) {
    int local_c;
    
    for (local_c = 0; (unsigned long)local_c < param_3; local_c = local_c + 1) {
        *(long *)(param_1 + local_c * sizeof(long)) = *(long *)(param_2 + (param_3 - (long)local_c - 1) * sizeof(long));
    }
    return;
}

int main() {
    long local_1c[3] = {0}; // Para almacenar 3 longs (24 bytes)
    long local_14 = 0;

    // Simular un buffer en la dirección 4210784 con 11 long (88 bytes)
    long buffer[11] = {0x1111111111111111, 0x2222222222222222, 0x3333333333333333,
                       0x4444444444444444, 0x5555555555555555, 0x6666666666666666,
                       0x7777777777777777, 0x8888888888888888, 0x9999999999999999,
                       0xAAAAAAAAAAAAAAAA, 0xBBBBBBBBBBBBBBBB};

    reverse((long)&local_1c, (long)buffer, 3);

    // Imprimir resultado
    printf("Resultado: ");
    for (int i = 0; i < 3; i++) {
        printf("%016lx ", local_1c[i]);
    }
    printf("\n");

    return 0;
}

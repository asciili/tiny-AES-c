#include <stdio.h>

extern int test_aes128_ctr(void);

int main(void)
{
    int exit;

    printf("\nTesting AES128\n\n");

    exit = test_aes128_ctr();

    return exit;
}

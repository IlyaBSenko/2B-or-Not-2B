#include <stdio.h>
#include <stdlib.h>

void print_binary(unsigned int n) {
    if (n > 1)
        print_binary(n >> 1);
    printf("%u", n & 1);
}

int main(void) {
    unsigned int number;
    
    printf("Enter a number: ");
    if (scanf("%u", &number) != 1) {
        fprintf(stderr, "Invalid input\n");
        return EXIT_FAILURE;
    }
    
    printf("Binary representation: ");
    
    // handle the special case when the number is 0.
    if (number == 0)
        printf("0");
    else
        print_binary(number);
    
    printf("\n");
    return EXIT_SUCCESS;
}


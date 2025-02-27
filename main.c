/*
 * 2B or Not 2B: A Number-to-Binary Converter
 *
 * Honor Code Statement:
 * I have neither given nor received any unauthorized aid on this assignment.
 *
 * Name: Ilya Balatsenko
 *
 * Description:
 * This program prompts the user for an unsigned integer and prints its minimal
 * binary representation (without any extra leading zeros). It uses a recursive
 * function to print the binary number.
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * print_binary:
 * Recursively prints the binary representation of an unsigned integer.
 * For n > 1, it first prints the binary representation of n >> 1, then prints
 * the least significant bit of n. This ensures that no extra leading zeros are printed.
 *
 * Parameters:
 *   - n: The unsigned integer to be converted to binary.
 */
void print_binary(unsigned int n) {
    if (n > 1)
        print_binary(n >> 1);
    printf("%u", n & 1);
}

int main(void) {
    unsigned int number;
    
    // Prompt the user for a number.
    printf("Enter a number: ");
    if (scanf("%u", &number) != 1) {
        fprintf(stderr, "Invalid input\n");
        return EXIT_FAILURE;
    }
    
    // Print the binary representation.
    printf("Binary representation: ");
    
    // Handle the special case when the number is 0.
    if (number == 0)
        printf("0");
    else
        print_binary(number);
    
    printf("\n");
    return EXIT_SUCCESS;
}


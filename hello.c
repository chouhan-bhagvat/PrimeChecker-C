#include<stdio.h>

int main () {

    int n, count = 0, i;

    // Prompt the user to enter a number
    printf("Enter any number: ");
    scanf("%d", &n);

    // Loop through all numbers from 1 to n
    for(i = 1; i <= n; i++) {


       // Check if i is a divisor of n
        if (n % i == 0) {
            count++; // Increment count if i is a divisor
        }
    }
    // If n has exactly 2 divisors (1 and n), it is prime
    if(count == 2)
        printf("Prime number\n");
    else
        printf("Not prime number\n");

    return 0;
}

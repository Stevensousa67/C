/*
 * This program is for Procedural Programming Project 1 assignment. This assignment has the purpose of comparing the
 * Python version against the C version of the same program, including code, writing process, and runtime.
 *
 * This program will calculate the gross and net paycheck from a worker based on hourly wage of $20 and working 40h.
 * The tax rates are: State Tax: 5%, Federal Tax: 10%, and Social Security Tax: 7.5%
 *
 * Steven Sousa / Procedural Programming / 4Cs / 04-12-21
 */

// Import necessary dependencies
#include <stdio.h>
#include <time.h>

int main(){

    // Program introduces itself to the user
    printf("Welcome to the paycheck calculator. The compensation is $20/h.\n");

    // Program asks for how many times it will execute this program for runtime study purpose
    int number_of_times_program_repeats;
    printf("How many times would like this program to repeat?\n");
    scanf("%d", &number_of_times_program_repeats);

    // Start time count
    clock_t start = clock();

    while(number_of_times_program_repeats > 0) {

        // Program prints which iteration it is at
        printf("Program is at iteration: %d\n", number_of_times_program_repeats);

        // Program calculates and prints the gross pay (40h work weed and $20/h compensation).
        int gross_pay = (40*20);
        printf("\n");
        printf("Gross income: $%d\n", gross_pay);

        // Program calculates and prints each taxes
        int state_tax = (gross_pay * .05);
        printf("State tax: $%d\n", state_tax);

        int federal_tax = (gross_pay * .10);
        printf("Federal tax: $%d\n", federal_tax);

        int social_security_tax = (gross_pay * .075);
        printf("Social Security tax: $%d\n", social_security_tax);

        int total_taxes = (state_tax + federal_tax + social_security_tax);
        printf("Total taxes: $%d\n", total_taxes);

        // Program prints net pay and ends
        printf("Net pay: $%d\n", gross_pay - total_taxes);
        printf("\n");

        number_of_times_program_repeats--;
    }
    clock_t end = clock();
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time spent to run the program: %.3f seconds", time_spent);
}
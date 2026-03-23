// Week 5, Session 1

/* Advanced task 1
 * Write a C program for enhanced quadratic equation solver
 * that accepts three real numbers a,b,c from the command prompt.
 * The equation is a.x^2 + b.x + c = 0
 * 
 * The program checks for the following conditions and validations:
 * 1. If a = 0, prints "Linear equation"
 * 2. Calculate determinant D: D=b^2 - 4ac
 * 2. If D > 0: Calculate and display two distinct roots
 *    You have done this in Week3, session-2-task3/quadratic.c
 * 3. If D = 0: Calculate and display the single root
 * 4. If D < 0: Identify and calculate real and imaginary parts
 *    imaginary part formula: sqrt(-D)/(2*a)
 */
 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>   //for atof()

int main(int argc, char *argv[]) {
	
	if (argc != 4) {
        printf("Usage: %s <a> <b> <c>\n", argv[0]);
        printf("Example: %s 1 -5 6\n", argv[0]);
        return 1;
    }

    // Convert string arguments to floats
    float a = atof(argv[1]);
    float b = atof(argv[2]);
    float c = atof(argv[3]);

    // Check for linear equation
    if (a == 0) {
        printf("Linear equation -  Solve this yourself you idiot!!!\n");
        return 2;
    }
	
    // Calculate determinant
    float D = b*b - 4*a*c;

    if (D > 0){
        // Two distinct roots
        float root1 = (-b + sqrt(D))/(2*a);
        float root2 = (-b - sqrt(D))/(2*a);

        printf("Roots: %.2f, %.2f\n", root1, root2);
    }

    else if (D = 0) {
        // One distinct root
        float root = (-b)/(2*a);

        printf("Roots: %.2f\n", root);
    }

    else {
        // D < 0 - calculate real and imaginary parts
        float part1 = sqrt(-D)/(2*a);
        float part2 = -part1;

        printf("Real and Imaginary Parts: %.2f, %.2f\n", part1, part2);
    }
	return 0;
}
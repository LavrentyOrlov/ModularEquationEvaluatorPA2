/*
Programmer: Lavrenty "Larry" Orlov
Class: CptS 121; Lab Section 10L
Programming Assignment: Programming Assignment 2 - A Modular Equation Evaluator
Date: 9/11/2025
Description: This program uses functions to perform several calculations based on user input, 
			 including: total resistance for three resistors connected in series, the total
			 sales tax of an item, volume of a right rectangular pyramid, total parallel 
			 resistance of three resistors connected in series, the encoding of a character 
			 based on ASCII values, the distance between two coordinate points, and the solution 
			 to a general equation

Note: Andy said that students can use his PA1 solution as a starting point for PA2, so I started 
writing this PA2 program based on the same structure as his solution for PA1.
*/

#include "equations.h"

int main(void)
{
	int  r1 = 0,
		r2 = 0,
		r3 = 0,
		series_resistance = 0,
		shift = 0,
		a = 0;

	char plaintext_character = '\0',
		encoded_character = '\0';

	double sales_tax_rate = 0.0,
		item_cost = 0.0,
		total_sales_tax = 0.0,
		l = 0.0,
		w = 0.0,
		h = 0.0,
		volume_pyramid = 0.0,
		parallel_resistance = 0.0,
		x1 = 0.0,
		x2 = 0.0,
		y1 = 0.0,
		y2 = 0.0,
		distance_points = 0.0,
		x = 0.0,
		z = 0.0,
		y = 0.0;

	/* Problem 1 */

	printf("Please enter the r1, r2, and r3 values (all integers) for use in a total series resistance equation: ");

	// Get the three resistor values
	scanf("%d%d%d", &r1, &r2, &r3);

	// Compute the total series resistance
	series_resistance = calculate_series_resistance(r1, r2, r3);

	printf("Total series resistance: series_resistance = R1 + R2 + R3 = %d + %d + %d = %d\n",
		r1, r2, r3, series_resistance);

	/* Problem 2 */

	printf("\nPlease enter the sales tax rate and item cost (both floating-point values) for use in a total sales tax equation: ");

	// 2b Get the salex tax rate and item cost values
	scanf("%lf%lf", &sales_tax_rate, &item_cost);

	// Compute the total sales tax
	total_sales_tax = calculate_total_sales_tax(sales_tax_rate, item_cost);

	printf("Sales tax: total_sales_tax = sales_tax_rate * item_cost = %.2lf * %lf = %.2lf\n",
		sales_tax_rate, item_cost, total_sales_tax);

	/* Problem 3 */

	printf("\nPlease enter the length, width, and height (all floating-point values) for use in a volume of pyramid equation\n");

	// Get the length, width, and height
	scanf("%lf%lf%lf", &l, &w, &h);

	// Compute the volume of the right rectangular pyramid
	volume_pyramid = calculate_volume_pyramid(l, w, h);

	printf("Volume of a right rectangular pyramid: volume_pyramid = (l * w * h) / 3\n");
	printf(" = (%.2lf * %.2lf * %.2lf) / 3 = %.2lf\n", l, w, h, volume_pyramid);

	/* Problem 4 */

	printf("\nPlease enter three resistance values (all integers) for use in\n");
	printf(" a total prarallel resistance equation: ");

	// Get the R1, R2, and R3 resistor values
	scanf("%d%d%d", &r1, &r2, &r3);

	// Compute the total parallel resistance using the R1, R2, and R3 integer values
	parallel_resistance = calculate_total_parallel_resistance(r1, r2, r3);

	printf("Total parallel resistance: parallel_resistance = 1 / (1 / R1 + 1 / R2 + 1 / R3) = 1 / (%.2lf + %.2lf + %.2lf) = %.2lf\n",
		(double)1 / r1, (double)1 / r2, (double)1 / r3, parallel_resistance);

	/* Problem 5 */

	printf("\nPlease enter the plaintext character and shift key for use in a character encoding equation: ");

	// Get the plain text character and shift integer values
	scanf(" %c%d", &plaintext_character, &shift);

	// Compute the encoded character
	encoded_character = character_encoding(plaintext_character, shift);

	printf("Character encoding: encoded_character = (plaintext_character - 'a') + 'A' - shift = (%c - %c) + %c - %d = %c\n",
		plaintext_character, 'a', 'A', shift, encoded_character);

	/* Problem 6 */

	printf("\nPlease enter the x1, y1, x2, and y2 (all floating point values) for use in a distance between points equation: ");

	// Get the values for x1, x2, y1, and y2
	scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);

	// Compute the distance between the two points
	distance_points = calculate_distance(x1, x2, y1, y2);

	printf("\nDistance between 2 pts: distance = sqrt ((x1 - x2)^2 + (y1 - y2)^2)\n");
	printf(" = sqrt ((%.2lf - %.2lf)^2 + (%.2lf - %.2lf)^2) = %.2lf\n", x1, x2, y1, y2, distance_points);

	/* Problem 7 */

	printf("\nPlease enter x, y, and z (all floating_point values) and a (an integer value)\n");
	printf(" for use in a general equation: ");

	// Get the values for x, y, z, and a
	scanf("%lf%lf%lf%d", &x, &y, &z, &a);

	printf("general equation: y = y / (3/17) - z + x / (a %% 2) + PI\n = %.2lf / %.2lf - %.2lf + %.2lf / (%d %% 2) + %.2lf = ", y, ((double)3 / 17), z, x, a, PI);

	// Compute the general equation
	y = calculate_equation(x, y, z, a);

	// Print the result of the general equation
	printf("%.2lf\n\n", y);

	return 0;
}
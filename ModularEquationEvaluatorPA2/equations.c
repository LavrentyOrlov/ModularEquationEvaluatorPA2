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

// Takes the sum of three resistor values to calculate total series resistance
// Preconditions: Three resistor values are integers
int calculate_series_resistance(int r1, int r2, int r3)
{
	return r1 + r2 + r3;
}

// Calculates total sales tax for an item by multiplying sales tax rate by the item's cost
// Preconditions: The sales tax rate and item cost are both double-precision floating-point values
double calculate_total_sales_tax(double sales_tax_rate, double item_cost)
{
	return sales_tax_rate* item_cost;
}

// Multiplies the length, width, and height of a pyramid, then divides the product by 3,
// to calculate the pyramid's volume
// Preconditions: the length, width, and height are all double-precision floating-point values
double calculate_volume_pyramid(double l, double w, double h)
{
	return (l * w * h) / 3;
}

// Takes three resistor values to calculate total parallel resistance using a formula
// Preconditions: Three resistor values are all non-zero integers
double calculate_total_parallel_resistance(int r1, int r2, int r3)
{
	return 1 / ((double)1 / r1 + (double)1 / r2 + (double)1 / r3);
}

// Takes a plaintext character and an ASCII shift integer to determine a new encoded character
// based on a formula
// Preconditions: the plaintext character and shift integer are each a single value in their
// corresponding data types
char character_encoding(char plaintext_character, int shift_integer)
{
	return (plaintext_character - 'a') + 'A' - shift_integer;
}

// Calculates the distance between two points using the x1 and y1 values for point 1 and the
// x2, y2 values for point 2
// Preconditions: x1, y1, x2, and y2 are all double-precision floating point values
double calculate_distance(double x1, double x2, double y1, double y2)
{
	return sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
}

// Calculates the result of an equation using values for x, y, z, and a.
// Preconditions: x, y, and z are double-precision floating-point values,
// while a is an odd integer value
double calculate_equation(double x, double y, double z, int a)
{
	return y / ((double)3 / 17) - z + x / (a % 2) + PI;
}
#include "calculator.h"

// this module has functions which allow you to
// do some basic arithmetic operations with numbers

// add operation 
int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

// sub operation
int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

// mul operation 
int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

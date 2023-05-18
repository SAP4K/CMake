#include "Calculator.h"

int Calculator::sum(int x, int y)
{
    return x + y;
}

int Calculator::diff(int x, int y)
{
    return x - y;
}

int Calculator::mod(int x, int y)
{
    return x % y;
}

int Calculator::div(int x, int y)
{
    return x / y;
}

ICalculator& ICalculator::getInstance()
{
    static Calculator Calculator;
    return Calculator;
}
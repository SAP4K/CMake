#pragma once

#include "ICalculator.h"

class Calculator : public ICalculator
{
public:
    int sum(int x, int y);
    int diff(int x, int y);
    int mod(int x, int y);
    int div(int x, int y);
};
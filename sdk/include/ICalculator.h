#pragma once

class ICalculator
{
public:
    static ICalculator& getInstance();

    virtual int sum(int x, int y) = 0;
    virtual int diff(int x, int y) = 0;
    virtual int mod(int x, int y) = 0;
    virtual int div(int x, int y) = 0;
};
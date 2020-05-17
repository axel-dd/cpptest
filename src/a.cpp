#include "a.h"
#include <iostream>

A::A()
{
    std::cout << __FUNCTION__ << " passed.\n";
}

A::~A()
{
    std::cout << __FUNCTION__ << " passed.\n";
}
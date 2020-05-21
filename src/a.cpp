#include "a.hpp"
#include <iostream>

A::A()
{
    std::cout << __FUNCTION__ << " passed.\n";
}

A::~A()
{
    std::cout << __FUNCTION__ << " passed.\n";
}
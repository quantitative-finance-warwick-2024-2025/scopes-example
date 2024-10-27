#include <iostream>
#include "headerfileA.hpp"

const int same_name = 10;
int a4 = 3;

int exposed_function_A() {
    return same_name + a1 + a2 + a4;
}

void a2_modifer(int value) {
    a2 = value;
}

void print_a2() {
    std::cout << a2 << std::endl;
}
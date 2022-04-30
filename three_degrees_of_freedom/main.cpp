#include "./include/MatrixModule.h"
#include <stdio.h>
#include <iostream>
#include <python.h>

int main(){
    matrix s = matrix(3, 3);
    double l = s.getMatrixValue(2, 2);
    std::cout << l << std::endl;
}


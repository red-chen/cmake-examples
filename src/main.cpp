#include <iostream>

#include "calculator.h"

int main(int argc, char *argv[]) {
   project::Calculator calculator;
   std::cout << "Hello C++, "<< calculator.Add(1, 2) << std::endl;
   return 0;
}
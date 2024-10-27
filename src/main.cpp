 #include "headerfileA.hpp"
 #include "headerfileB.hpp"
 #include <iostream>

 int main() {
   //a1 = 200;
   std::cout << a1 << std::endl;

   a2 = 100;
   print_a2();

   a2_modifer(200);
   print_a2();

   std::cout << exposed_function_A() << std::endl;
   std::cout << exposed_function_B() << std::endl;
   return 0;
 }
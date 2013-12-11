// min example
#include<iostream>  // std::cout
#include<algorithm> // std::min

int main(){
  std::cout << "min(1,2) == " << std::min(1,2) << std::endl;
  std::cout << "min(2,1) == " << std::min(2,1) << std::endl;
  std::cout << "ming('a','z') == " << std::min('a','z') << std::endl;
  std::cout << "ming(3.14,2,73) == " << std::min(3.14,2.73) << std::endl;

  return 0;
}

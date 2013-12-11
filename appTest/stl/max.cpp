// max example
#include<iostream>  // std::cout
#include<algorithm> // std::max

int main(){
  std::cout << "max(1,2) == " <<std::max(1,2) << std::endl;
  std::cout << "max(2,1) == " << std::max(2,1) << std::endl;
  std::cout << "max('a','z') == " << std::max('a','z') << std::endl;
  std::cout << "max(3.14,2.73) == " << std::max(3.14,2.73) << std::endl;

  return 0;
}

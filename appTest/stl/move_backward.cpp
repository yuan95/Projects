// move_backward example
#include<iostream>  // std::cout
#include<algorithm> // std::move_backward
#include<string>    // std::string

int main(){
  std::string elems[10] = {"air", "water", "fire", "earth"};

  // insert new element at the beginning:
  std::move_backward(elems, elems+4, elems+5);
  elems[0] = "ether";
  
  std::cout << "elems contains:";
  for(int i=0; i<10; ++i)
    std::cout << " [" << elems[i] << "]";
  std::cout << std::endl;

  return 0;
}

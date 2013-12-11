// next_permutation example
#include<iostream>  // std::cout
#include<algorithm> // std::next_permutation, std::sort, std::reverse

int main(){
  int myints[]={1,2,3};
  
  std::sort(myints, myints+3);
  std::reverse(myints, myints+3);

  std::cout << "The 3! possible permutation with 3 elements:" << std::endl;
  do{
    std::cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << std::endl;
  }while(std::prev_permutation(myints, myints+3));

  std::cout << "After loop: " << myints[0] << ' ' << myints[1] << ' ' << myints[2] << std::endl;

  return 0;
}

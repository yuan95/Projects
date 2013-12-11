// lexicographical_compare example
#include<iostream>  // std::cout
#include<algorithm> // std::lexicographical_compare
#include<cctype>    // std::tolower

// a case-insensitive comparison function:
bool mycomp(char c1, char c2){
  return std::tolower(c1) < std::tolower(c2);
}

int main(){
  char foo[] = "Apple";
  char bar[] = "apartment";

  std::cout << std::boolalpha;

  std::cout << "Comparing foo and bar lexicographically (foo<bar):" << std::endl;
  std::cout << "Using default comparison (operator<): ";
  std::cout << std::lexicographical_compare(foo, foo+5, bar, bar+9);
  std::cout << std::endl;

  std::cout << "Using mycomp as comparison object: ";
  std::cout << std::lexicographical_compare(foo, foo+5, bar, bar+9, mycomp);
  std::cout << std::endl;

  return 0;
}

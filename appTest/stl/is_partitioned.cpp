// is_partitioned example
#include<iostream>  // std::cout
#include<algorithm> // std::is_partitioned
#include<array>     // std::array

bool IsOdd(int i) { return (i%2)==1;}

int main(){
  std::array<int, 7> foo {1,2,3,4,5,6,7};

  // print contents:
  std::cout << "foo: ";
  for(int& x:foo) std::cout << ' ' << x;
  if(std::is_partitioned(foo.begin(), foo.end(), IsOdd))
    std::cout << " (partitioned)" << std::endl;
  else
    std::cout << " (not partitioned)" << std::endl;

  // partition array:
  std::partition(foo.begin(), foo.end(), IsOdd);
  
  std::cout << "foo: ";
  for(int& x:foo) std::cout << ' ' << x;
  if(std::is_partitioned(foo.begin(), foo.end(), IsOdd))
    std::cout << " (partitioned)" << std::endl;
  else
    std::cout << " (not partitioned)" << std::endl;

  return 0;
}

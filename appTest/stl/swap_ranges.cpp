// swap_ranges example
#include<iostream>  // std::cout
#include<algorithm> // std::swap_ranges
#include<vector>    // std::vector

int main(){
  std::vector<int> foo(5,10);
  std::vector<int> bar(5,33);

  std::swap_ranges(foo.begin()+1, foo.end()-1, bar.begin());
  
  // print out results of swap:
  std::cout << "foo contains:";
  for(std::vector<int>::iterator it=foo.begin(); it!=foo.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << std::endl;

  std::cout << "bar contains:";
  for(std::vector<int>::iterator it=bar.begin(); it!=bar.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << std::endl;

  return 0;
}

// is_heap example
#include<iostream>  // std::cout
#include<algorithm> // std::is_heap_until, std::sort, std::reverse
#include<vector>    // std::vector

int main(){
  std::vector<int> foo{2,6,9,3,8,4,5,1,7};

  std::sort(foo.begin(), foo.end());
  std::reverse(foo.begin(),foo.end());

  auto last = std::is_heap_until(foo.begin(), foo.end());

  std::cout << "The " << (last-foo.begin()) << " first elements are a valid heap:";
  for(auto it=foo.begin(); it!=last; ++it)
    std::cout << ' ' << *it;
  std::cout << std::endl;

  return 0;
}

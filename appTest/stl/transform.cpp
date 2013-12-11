// transform algorithm example
#include<iostream>  // std::cout
#include<algorithm> // std::transform
#include<vector>    // std::vector
#include<functional>// std::plus

int op_increase(int i){return ++i;}

int main(){
  std::vector<int> foo;
  std::vector<int> bar;

  // set some values:
  for(int i=1; i<6; i++)
    foo.push_back(i*10);

  bar.resize(foo.size());

  std::transform(foo.begin(), foo.end(), bar.begin(), op_increase);

  // std::plus adds together its two arguments:
  std::transform(foo.begin(), foo.end(), bar.begin(), foo.begin(), std::plus<int>());
  
  std::cout << "foo contains:";
  for(std::vector<int>::iterator it=foo.begin(); it!=foo.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << std::endl;

  return 0;
}

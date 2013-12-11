// replace_copy_if example
#include<iostream>  // std::cout
#include<algorithm> // std::replace_copy_if
#include<vector>    // std::vector

bool IsOdd(int i) {return (i%2)==1;}

int main(){
  std::vector<int> foo, bar;
  
  // set some values:
  for(int i=1; i<10; i++) foo.push_back(i);

  bar.resize(foo.size());  // allocate space
  std::replace_copy_if(foo.begin(), foo.end(), bar.begin(), IsOdd, 0);

  std::cout << "bar contains:";
  for(std::vector<int>::iterator it=bar.begin(); it!=bar.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << std::endl;

  return 0;
}

// reverse algorithm example
#include<iostream>  // std::cout
#include<algorithm> // std::reverse
#include<vector>    // std::vector

int main(){
  std::vector<int> myvector;

  // set some values:
  for(int i=1; i<10; ++i) myvector.push_back(i);
 
  std::reverse(myvector.begin(), myvector.end());

  // print out content:
  std::cout << "myvector contains:";
  for(std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << std::endl;

  return 0;
}

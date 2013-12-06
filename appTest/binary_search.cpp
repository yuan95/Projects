// binary_search example
#include<iostream>  // std::cout
#include<algorithm>  // std::binary_search, std::sort
#include<vector>  // std::vector

bool myfunction(int i, int j){return (i<j);}

int main(){
  int myints[] = {1,2,3,4,5,4,3,2,1};
  std::vector<int> v(myints, myints+9);

  // using default comparison:
  std::sort(v.begin(), v.end());

  std::cout << "looking for a 3 ...";
  if(std::binary_search(v.begin(), v.end(), 3))
    std::cout << "found!" << std::endl;
  else
    std::cout << "not found." << std::endl;

  // using myfunction as comp:
  std::sort(v.begin(), v.end(), myfunction);
  
  std::cout << "looking for a 6 ..." << std::endl;
  if(std::binary_search(v.begin(), v.end(), 6, myfunction))
    std::cout << "fould." << std::endl;
  else
    std::cout << "not found." << std::endl;

  return 0;
}

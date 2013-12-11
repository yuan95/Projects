// remove_copy example
#include<iostream>  // std::cout
#include<algorithm> // std::remove_copy
#include<vector>    // std::vector

int main(){
  int myints[] = {10,20,30,30,20,10,10,20};
  std::vector<int> myvector(8);

  std::remove_copy(myints, myints+8, myvector.begin(), 20);
 
  std::cout << "myvector contains:";
  for(std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    std::cout << ' ' << *it;

  std::cout << std::endl;

  return 0;
}

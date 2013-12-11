// replace algorithm example
#include<iostream>  // std::cout
#include<algorithm> // std::replace
#include<vector>    // std::vector

int main(){
  int myints[]={10,20,30,30,20,10,10,20};
  std::vector<int> myvector(myints, myints+8);

  std::replace(myvector.begin(), myvector.end(), 20,99);

  std::cout << "myvector contains:";
  for(std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << std::endl;

  return 0;
}

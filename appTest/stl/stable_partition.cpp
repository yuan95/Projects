// stable_partition example
#include<iostream>  // std::cout
#include<algorithm> // std::stable_partition
#include<vector>    // std::vector

bool IsOdd(int i) {return (i%2)==1;}

int main(){
  std::vector<int> myvector;

  // set some values:
  for(int i=1; i<10; ++i) myvector.push_back(i); // 1 2 3 4 5 6 7 8 9

  std::vector<int>::iterator bound;
  bound = std::stable_partition(myvector.begin(), myvector.end(),IsOdd);

  // print out content:
  std::cout << "odd elements:";
  for(std::vector<int>::iterator it=myvector.begin(); it!=bound; ++it)
    std::cout << ' ' << *it;
  std::cout << std::endl;

  std::cout << "even elements:";
  for(std::vector<int>::iterator it=bound; it!=myvector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << std::endl;

  return 0;
}

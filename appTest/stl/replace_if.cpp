// replace_if example
#include<iostream>  // std::cout
#include<algorithm> // std::replace_if
#include<vector>    // std::vector

bool IsOdd(int i){return (i%2)==1;}

int main(){
  std::vector<int> myvector;

  // set some values:
  for(int i=1; i<10; i++) myvector.push_back(i);

  std::replace_if(myvector.begin(), myvector.end(), IsOdd, 0);

  std::cout << "myvector contains:";
  for(std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << std::endl;

  return 0;
}

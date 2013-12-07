// for_each example
#include<iostream>  // std::cout
#include<algorithm> // std::for_each
#include<vector>    // std::vector

void myfunction(int i){  // function object type
  std::cout << ' ' << i;
}

struct myclass{  // function object type;
  void operator()(int i) {std::cout << ' ' << i;}
} myobject;

int main(){
  std::vector<int> myvector;
  myvector.push_back(10);
  myvector.push_back(20);
  myvector.push_back(30);

  std::cout << "myvector contains: ";
  for_each(myvector.begin(), myvector.end(), myfunction);
  std::cout << std::endl;

  // or
  std::cout << "myvector contains: ";
  for_each(myvector.begin(), myvector.end(), myobject);
  std::cout << std::endl;

  return 0;
}

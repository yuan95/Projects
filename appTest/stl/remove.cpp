// remove algorithm example
#include<iostream>  // std::cout
#include<algorithm> // std::remove

int main(){
  int myints[] = {10,20,30,20,10,10,20};

  // bounds of range:
  int* pbegin = myints;
  int* pend = myints+sizeof(myints)/sizeof(int);

  pend = std::remove(pbegin, pend, 20);

  std:: cout << "range contains:";
  for(int* p=pbegin; p!=pend; ++p)
    std::cout << ' ' << *p;
  std::cout << std::endl;

  return 0;
}

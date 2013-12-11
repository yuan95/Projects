// set_intersection example
#include<iostream>  // std::cout
#include<algorithm> // std::set_intersection, std::sort
#include<vector>    // std::vector

int main(){
  int first[]={5,10,15,20,25};
  int second[]={50,40,30,20,10};
  std::vector<int> v(10);
  std::vector<int>::iterator it;

  std::sort(first, first+5);
  std::sort(second, second+5);

  it=std::set_intersection(first, first+5, second, second+5, v.begin());

  v.resize(it-v.begin());

  std::cout << "The intersection has " << (v.size()) << " elements:" << std::endl;
  for(it=v.begin(); it!=v.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << std::endl;

  return 0;
}

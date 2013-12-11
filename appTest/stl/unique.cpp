// unique algorithm example
#include<iostream>  // std::cout
#include<algorithm> // std::unique, std::distance
#include<vector>    // std::vector

bool myfunction(int i, int j){
  return (i == j);
}

int main(){
  int myints[]={10,20,20,20,30,30,20,20,10};
  std::vector<int>myvector(myints, myints+9);

  // using default comparison:
  std::vector<int>::iterator it;
  it = std::unique(myvector.begin(), myvector.end());

  myvector.resize(std::distance(myvector.begin(), it));

  // using predicate comparison:
  std::unique(myvector.begin(), myvector.end(), myfunction);

  // print out content:
  std::cout << "myvector contains:";
  for(it=myvector.begin();it!=myvector.end();++it)
    std::cout << ' ' << *it;
  std::cout << std::endl;

  return 0;
}

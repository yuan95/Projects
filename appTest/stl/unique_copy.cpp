// unique_copy example
#include<iostream>  // std::cout
#include<algorithm> // std::unique_copy, std::sort, std::distance
#include<vector>  // std::vector

bool myfunction(int i, int j){
  return (i==j);
}

int main(){
  int myints[]={10,20,20,20,30,30,20,20,10};
  std::vector<int> myvector(9);

  // using default compairson:
  std::vector<int>::iterator it;
  it=std::unique_copy(myints, myints+9, myvector.begin());

  std::sort(myvector.begin(), it);

  // using predicate comparison:
  it=std::unique_copy(myvector.begin(), it, myvector.begin(), myfunction);

  myvector.resize(std::distance(myvector.begin(), it));

  // print out content:
  std::cout << "myvector contains:";
  for(it=myvector.begin(); it!=myvector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << std::endl;

  return 0;
}

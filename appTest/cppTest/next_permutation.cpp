#include<iostream>
#include<algorithm>
#include<vector>

int main(){
  std::vector<int> data;
  for(int i=0; i<10; ++i)
    data.push_back(i);

  do{
    for(std::vector<int>::iterator it=data.begin(); it!=data.end(); ++it)
      std::cout << *it << ' ';
    std::cout << std::endl;
  }while(next_permutation(data.begin(), data.end()));
 
  std::cout << std::endl;
  std::cout << "permutations were tested." << std::endl;

  return 0;
}

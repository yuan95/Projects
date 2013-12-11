// wrapper of combination

#include<iostream>
#include<vector>
#include<string>
#include"combination.h"

bool display(std::vector<int>::iterator begin, std::vector<int>::iterator end){
  for(std::vector<int>::iterator it=begin; it!=end; ++it)
    std::cout << *it << ' ';
  std::cout << std::endl;
}

void combinationGen(int N, int r){
  std::vector<int> originSequence;
  std::vector<int> selectSequence;

  for(int i=0; i<N; ++i)          // initial original sequence
    originSequence.push_back(i);

  for(int j=0; j<r; ++j)          // initial select sequence
    selectSequence.push_back(j);

  recursive_combination(originSequence.begin(), originSequence.end(),0,
    			selectSequence.begin(), selectSequence.end(),0,(originSequence.size() - selectSequence.size()), display);
}


void fullCombination(int N){
  std::cout << "Full combination of " << N << " is ..." << std::endl;
  for(int i=1; i<=N; i++){
    combinationGen(N,i);
  }
}

int main(){

  int N=5, r=5;
  //std::cout << "start combination..." << std::endl;
  //combinationGen(N, r);
  fullCombination(N);
  std::cout << "Complete!" << std::endl;

  return 0;
}

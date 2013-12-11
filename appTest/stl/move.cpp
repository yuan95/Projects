// move algorithm example
#include<iostream>  // std::cout
#include<algorithm> // std::move(ranges)
#include<utility>   // std::move(objects)
#include<vector>    // std::vector
#include<string>    // std::string

int main(){
  std::vector<std::string> foo = {"air", "water", "fire", "earth"};
  std::vector<std::string> bar(4);

  // moving ranges:
  std::cout << "Moving ranges..." << std::endl;
  std::move(foo.begin(), foo.begin()+4, bar.begin());

  std::cout << "foo contains " << foo.size() << " elements:";
  std::cout << " (each in an unspecified but valid state)";
  std::cout << std::endl;

  std::cout << "bar contains " << bar.size() << " elements:";
  for(std::string& x:bar) std::cout << " [" << x << "]";
  std::cout << std::endl;

  // moving container:
  std::cout << "Moving container..." << std::endl;
  foo = std::move(bar);

  std::cout << "foo contains " << foo.size() << " elements:";
  for(std::string& x:foo) std::cout << " [" << x << "]";
  std::cout << std::endl;

  std::cout << "bar is in an unspecified but valid state";
  std::cout << std::endl;

  return 0;
}

#include <iostream>
#include <vector>
#include <string>
#include "combination.h"

using namespace std;
//using namespace stdcomb;

void display(char* begin,char* end)
{
  cout<<begin<<endl;
}

int main()
{
  char ca[]="123456";
  char cb[]="12345";
   
  recursive_combination(ca,ca+6,0,
                  cb,cb+5,0,6-5,display);
  cout<<"Complete!"<<endl;
    return 0;
}

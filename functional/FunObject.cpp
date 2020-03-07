#include <iostream>
using namespace std;

class AddValue{
  int value;
  public:
  AddValue(int val):value(val){}
  void operator()(int & elem)const{
    elem += value;
  }
};

int main(){
  AddValue adder_10(10);
  AddValue adder_20(20);
  int val=25;
  std :: cout << " Value before calling function object:- " << val << std::endl;
  adder_10(val);
  std :: cout << " Value after calling function object:- " << val << std::endl;
  adder_20(val);
  std :: cout << " Value after calling function object:- " << val << std::endl;
  return 0;
}

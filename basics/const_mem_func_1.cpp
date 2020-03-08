#include <iostream>
/* 
 * - const object can call only const member functions
 * - static member function can not be const qualifier
 * - non static data members of an class can't be modified inside a const member function,but static and outer data can be modified.
 *
 */

class sample{
  int a;
  public:
  static  int b;
  sample(int a):a(a){}
  void show()const{
    std::cout << "can be called by both const and non-const object- " << a << std::endl;
  }
  void show(){
    std::cout << "can be called by both const and non-const object- " << a << std::endl;
  }
  void display() const {
    std::cout << "only non const object can call " <<  a <<  std::endl;
  }
  /* not allowed 
  int modify_a()const{
    a += 10;
    return a;
  }
  */
  int  modify_b()const{
    b += 10;
    return b;
  }
};
int sample::b=100;

int main(){
  const sample s1(20);
  sample::b=100;
  s1.show();
  s1.display();
  sample s2(20);
  s2.show();
  s2.display();
  std::cout << " b after change " << s1.modify_b() << std::endl;
  std::cout << " b after change " << s2.modify_b() << std::endl;
  return 0;
}

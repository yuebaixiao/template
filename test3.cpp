#include <iostream>
#include <utility>

template<typename F, typename T1, typename T2>
void fcn(F f, T1 t1, T2 t2){
  f(t2, t1);
}
template<typename F, typename T1, typename T2>
void fcn2(F f, T1&& t1, T2&& t2){
  f(std::forward<T2>(t2), std::forward<T1>(t1));
  //f(t2, t1);
}

void f1(int&& i1, int& i2){
  i1 = 10;
  i2 = 20;
}
int main(){
  int i1 = 1, i2 = 2;
  int& a = i1;
  int& b = i2;
  fcn2(f1, a, 42);
  std::cout << i1 << ", " << i2 << std::endl;
}

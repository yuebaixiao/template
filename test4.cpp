#include <iostream>

template<typename T>
void f1(T t){
  t = 99;
}

template<typename T>
void f4(const T t){
  //t = 99;
}

template<typename T>
void f2(T& t){
  //t = 99;
}

template<typename T>
void f3(const T& t){}


template<typename T>
void f5(T&& t){}

template<typename T>
void f6(const T&& t){}

int main(){
  /*
  f1(1);//int
  int i = 1;
  f1(i);//int
  int& ri = i;
  f1(ri);//int
  std::cout << ri << std::endl;
  const int ci = 2;
  f1(ci);//int
  const int& rci = ci;
  f1(rci);//int
  */

  /*
  f4(1);//int
  int i = 1;
  f4(i);//int
  int& ri = i;
  f4(ri);//int
  std::cout << ri << std::endl;
  const int ci = 2;
  f4(ci);//int
  const int& rci = ci;
  f4(rci);//int
  */
  
  /*
  //f2(1);//error cannot bind non-const lvalue reference of type ‘int&’ to an rvalue of type ‘int’
  int i = 1;
  f2(i);//int
  int& ri = i;
  f2(ri);//int
  const int ci = 2;
  f2(ci);//const int
  const int& rci = ci;
  f2(rci);//const int
  */

  /*
  f3(1);//int
  int i = 1;
  f3(i);//int
  int& ri = i;
  f3(ri);//int
  const int ci = 2;
  f3(ci);//int
  const int& rci = ci;
  f3(rci);//int
  */

  /*
  f5(1);//int
  int i = 1;
  f5(i);//int&
  int& ri = i;
  f5(ri);//int&
  std::cout << ri << std::endl;
  const int ci = 2;
  f5(ci);//const int&
  const int& rci = ci;
  f5(rci);//const int&
  */

  f6(1);//int
  int i = 1;
  //f6(i);//int&
  int& ri = i;
  //f6(ri);//int&
  std::cout << ri << std::endl;
  const int ci = 2;
  //f6(ci);//const int&
  const int& rci = ci;
  //f6(rci);//const int&
  
}

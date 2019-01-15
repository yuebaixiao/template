#include <iostream>
#include <cstring>
#include <functional>
#include <vector>
#include <list>
#include <string>

template<unsigned M, unsigned N>
int compare(const char (&p1)[M], const char (&p2)[N]){
  return std::strcmp(p1, p2);
}

template<typename T>
int com(const T& p1, const T& p2){
  if(std::less<T>()(p1, p2)) return 1;
  if(std::less<T>()(p2, p1)) return -1;
  return 0;
}

template<typename InputIt, typename T>
InputIt myfind(InputIt first, InputIt last, const T& val){
  for(;first != last; ++first){
    if(*first == val){
      return first;
    }
  }
  return last;
}

/*
void print(int (&arr)[10]){
  for(auto el : arr){
    std::cout << el << ",";
  }
  std::cout << std::endl;
}
*/

template <typename T, unsigned M>
void print(const T (&arr)[M]){
  for(auto a : arr){
    std::cout << a << ",";
  }
  std::cout << std::endl;
}

template<typename Arr>
void prints(const Arr& arr){
  for(auto a : arr){
    std::cout << a << ",";
  }
  std::cout << std::endl;
}

template<typename T, unsigned M>
T* mybegin(T (&arr)[M]){
  return arr;
}

template<typename T, unsigned M>
T* myend(T (&arr)[M]){
  return arr + M;
}
int main(){
  /*
  compare("hi", "aaa");
  com<int>(123, 123);

  using namespace std;
  vector<int> iv{1,2,3324,33,55,77,22};
  auto au = myfind(iv.begin(), iv.end(), 33);
  cout << *au << endl;
  list<string> sl{"as3","2ds","111"};
  auto al = myfind(sl.cbegin(), sl.cend(), string("2ds"));
  cout << *al << endl;
  */

  /*
  int i[10] = {1,2,3,4,5,6,7,8,9,0};
  print(i);
  int j[2] = {1,2};
  print(j);
  //prints(j);
  const char c[] = {'f','s','a','a'};
  print(c);
  //prints(c);
  int k = 10;
  //prints(k);
  */

  int ii[] = {2,3,5,1,3,6,9};
  for(auto a = mybegin(ii); a !=myend(ii); ++a){
    std::cout << *a << ",";
  }
  std::cout << std::endl;
}

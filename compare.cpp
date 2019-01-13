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


int main(){
  compare("hi", "aaa");
  com<int>(123, 123);

  using namespace std;
  vector<int> iv{1,2,3324,33,55,77,22};
  auto au = myfind(iv.begin(), iv.end(), 33);
  cout << *au << endl;
  list<string> sl{"as3","2ds","111"};
  auto al = myfind(sl.cbegin(), sl.cend(), string("2ds"));
  cout << *al << endl;
}

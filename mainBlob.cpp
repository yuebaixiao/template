#include "Blob.h"
#include <string>
#include <list>

int main(){
  /*
  Blob<std::string> ar = {"a","sdf"};
  Blob<std::string> br;
  br.push_back("aaa");
  br.pop_back();
  br.front();
  br.back();
  br[0];
  */
  
  std::vector<std::string> ls{"dd","aa","12","sadf"};
  Blob<std::string> b(ls.begin(), ls.end());
  
}

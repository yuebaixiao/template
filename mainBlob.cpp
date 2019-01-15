#include "Blob.h"
#include <string>

int main(){
  Blob<std::string> ar = {"a","sdf"};
  Blob<std::string> br;
  br.push_back("aaa");
  br.pop_back();
  br.front();
  br.back();
  br[0];
}

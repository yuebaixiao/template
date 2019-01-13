
template<unsigned M, unsigned N>
int compare(const char (&p1)[M], const char (&p2)[N]){
  return strcmp(p1, p2);
}

int main(){
  compare("hi", "aaa");
}
